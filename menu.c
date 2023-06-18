#include "menu.h"

bool is_button_hovered = true;
int menu_button_counter = 0, menu_button_sign = 1;
double menu_button_size = 1.5;
bool menu_inside_button = false;

int press_here_counter = 0, start_counter = 0;
ALLEGRO_BITMAP *menu_title_image = 0;
ALLEGRO_FONT *menu_big_font = NULL, *menu_small_font = NULL;
ALLEGRO_SAMPLE *start_sample, *menu_music_sample;
ALLEGRO_SAMPLE_INSTANCE *start_sample_instance, *menu_music_sample_instance;

// function of menu
void menu_init(){
    // 方便做回車鍵
    menu_button_size = 1.5;
    menu_button_sign = 1;
    menu_button_counter = 0;
    menu_inside_button = false;
    bool is_button_hovered = true;
    press_here_counter = 0;
    start_counter = 0;
    drawSakura = true;

    al_init_image_addon();
    al_init_primitives_addon();
    al_init_acodec_addon();

    start_sample = al_load_sample("./sound/game_start.wav");
    start_sample_instance = al_create_sample_instance(start_sample);
    al_set_sample_instance_playmode(start_sample_instance, ALLEGRO_PLAYMODE_ONCE);
    al_set_sample_instance_gain(start_sample_instance, 0.3);
    al_attach_sample_instance_to_mixer(start_sample_instance, al_get_default_mixer());

    menu_title_image = al_load_bitmap("./image/ttl.png");
    menu_big_font = al_load_ttf_font("./font/pirulen_EN.ttf", HEIGHT/10, 0);
    menu_small_font = al_load_ttf_font("./font/pirulen_EN.ttf", HEIGHT/35, 0);
}

void menu_process(ALLEGRO_EVENT event) {
    if (event.type == ALLEGRO_EVENT_MOUSE_AXES) {
    // 鼠標移動事件
        int mouse_x = event.mouse.x;
        int mouse_y = event.mouse.y;
        bool is_button_hovered = false;
        if ((mouse_x >= WIDTH / 3 && mouse_x <= WIDTH * 2 / 3) && (mouse_y >= HEIGHT * 3 / 5 && mouse_y <= HEIGHT * 4 / 5)) {
            is_button_hovered = true;
        }

        if (is_button_hovered && !menu_inside_button) {
            // 滑鼠進入按鈕區域且按鈕狀態為未懸停
            al_play_sample_instance(start_sample_instance);
            menu_inside_button = true;
        } else if (!is_button_hovered) {
            // 滑鼠離開按鈕區域
            menu_inside_button = false;
        }
    } 
    else if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
        // 鼠標按下事件
        int mouse_x = event.mouse.x;
        int mouse_y = event.mouse.y;

        if ((mouse_x >= WIDTH / 3 && mouse_x <= WIDTH * 2 / 3) && (mouse_y >= HEIGHT * 3 / 5 && mouse_y <= HEIGHT * 4 / 5)) {
            judge_next_window = true;
        }
    }
}

void menu_draw(){
    al_draw_bitmap(main_background, 0, 0, 0);
    al_draw_bitmap(menu_title_image, WIDTH/5, HEIGHT/5, 0);

    if (menu_button_counter == 50) {
        menu_button_counter = 0;
        menu_button_sign = -menu_button_sign;
    }
    menu_button_size += menu_button_sign * 0.4 * sin(menu_button_counter++ * 3.14 / 100);

    if (!menu_inside_button) {
        draw_rounded_rectangle(WIDTH/3, HEIGHT*3/5, WIDTH*2/3, HEIGHT*4/5, 20, al_map_rgb(51,76,97), menu_button_size);
        typemachine(0.1, "Press here to start!", menu_small_font, al_map_rgb(51,76,97), WIDTH*1.85/5, HEIGHT*7.5/11, &press_here_counter);
        start_counter = 0;
    } else {
        draw_rounded_rectangle(WIDTH/3, HEIGHT*3/5, WIDTH*2/3, HEIGHT*4/5, 20, al_map_rgb(240,121,161), menu_button_size+20);
        typemachine(0.2, "start!", menu_big_font, al_map_rgb(240,121,161), WIDTH*1.85/5, HEIGHT*7/11, &start_counter);
        press_here_counter = 0;
    }
}

void menu_destroy(){
    al_destroy_font(menu_big_font);
    al_destroy_font(menu_small_font);
    al_destroy_bitmap(menu_title_image);
    al_destroy_sample(start_sample);
    al_destroy_sample_instance(start_sample_instance);
    al_destroy_sample(menu_music_sample);
    al_destroy_sample_instance(menu_music_sample_instance);
    drawSakura = false;
}
