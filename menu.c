#include "menu.h" 

int menu_button_counter = 0, menu_button_sign = 1;
double menu_button_size = 1.5;
bool menu_inside_button = false;

int press_here_counter = 0, start_counter = 0;
ALLEGRO_BITMAP *menu_title_image = 0;
ALLEGRO_FONT *menu_big_font = NULL, *menu_small_font = NULL;
ALLEGRO_BITMAP *menu_background = NULL;

// function of menu
void menu_init(){
    //方便做回車鍵
    menu_button_size = 1.5;
    menu_button_sign = 1;
    menu_button_counter = 0;
    menu_inside_button = false;

    press_here_counter = 0;
    start_counter = 0;

    al_init_image_addon();
    al_init_primitives_addon();

    ALLEGRO_BITMAP* originalBackground = al_load_bitmap("./image/ini_background.png");
    menu_background = al_create_bitmap(WIDTH, HEIGHT);
    al_set_target_bitmap(menu_background);
    al_draw_scaled_bitmap(originalBackground, 0, 0, al_get_bitmap_width(originalBackground), al_get_bitmap_height(originalBackground), 0, 0, WIDTH, HEIGHT, 0);
    al_set_target_backbuffer(al_get_current_display());
    al_destroy_bitmap(originalBackground);

    menu_title_image = al_load_bitmap("./image/ttl.png");
    menu_big_font = al_load_ttf_font("./font/pirulen.ttf", HEIGHT/10, 0);
    menu_small_font = al_load_ttf_font("./font/pirulen.ttf", HEIGHT/35, 0);
}

void menu_process(ALLEGRO_EVENT event){
    if(event.type == ALLEGRO_EVENT_MOUSE_AXES) {
        // 鼠標移動事件
        int mouse_x = event.mouse.x;
        int mouse_y = event.mouse.y;

        if((mouse_x >= WIDTH/3 && mouse_x <= WIDTH*2/3) && (mouse_y >= HEIGHT*3/5 && mouse_y <= HEIGHT*4/5)){
            menu_inside_button = true;
        } else {
            menu_inside_button = false;
        }
    }
    else if(event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
        // 鼠標按下事件
        int mouse_x = event.mouse.x;
        int mouse_y = event.mouse.y;
        
        if((mouse_x >= WIDTH/3 && mouse_x <= WIDTH*2/3) && (mouse_y >= HEIGHT*3/5 && mouse_y <= HEIGHT*4/5)){
            judge_next_window = true;
        }
    }
}

void draw_rounded_rectangle(float x1, float y1, float x2, float y2, float r, ALLEGRO_COLOR color, float thickness) {
    // Draw the four corners
    al_draw_arc(x1 + r, y1 + r, r, ALLEGRO_PI, ALLEGRO_PI / 2, color, thickness); // top-left
    al_draw_arc(x2 - r, y1 + r, r, ALLEGRO_PI * 1.5, ALLEGRO_PI / 2, color, thickness); // top-right
    al_draw_arc(x1 + r, y2 - r, r, ALLEGRO_PI / 2, ALLEGRO_PI / 2, color, thickness); // bottom-left
    al_draw_arc(x2 - r, y2 - r, r, 0, ALLEGRO_PI / 2, color, thickness); // bottom-right

    // Draw the four edges
    al_draw_line(x1 + r, y1, x2 - r, y1, color, thickness); // top
    al_draw_line(x1 + r, y2, x2 - r, y2, color, thickness); // bottom
    al_draw_line(x1, y1 + r, x1, y2 - r, color, thickness); // left
    al_draw_line(x2, y1 + r, x2, y2 - r, color, thickness); // right
}

void menu_draw(){
    al_draw_bitmap(menu_background, 0, 0, 0);

    al_draw_bitmap(menu_title_image, WIDTH/5, HEIGHT/5, 0);

    if (menu_button_counter == 50) {
        menu_button_counter = 0;
        menu_button_sign = -menu_button_sign;
    }
    menu_button_size += menu_button_sign * 0.4 * sin(menu_button_counter++ * 3.14 / 100);

    if(!menu_inside_button){
        draw_rounded_rectangle(WIDTH/3, HEIGHT*3/5, WIDTH*2/3, HEIGHT*4/5, 20, al_map_rgb(51,76,97), menu_button_size);
        typemachine(0.2, "Press here to start!", menu_small_font, al_map_rgb(51,76,97), WIDTH*1.85/5, HEIGHT*7.5/11, &press_here_counter);
    }
    else{
        draw_rounded_rectangle(WIDTH/3, HEIGHT*3/5, WIDTH*2/3, HEIGHT*4/5, 20, al_map_rgb(240,121,161), menu_button_size+20);
        typemachine(0.2, "start!", menu_big_font, al_map_rgb(240,121,161), WIDTH*1.85/5, HEIGHT*7/11, &start_counter);
    }
}

void menu_destroy(){
    al_destroy_font(menu_big_font);
    al_destroy_font(menu_small_font);
    al_destroy_bitmap(menu_background);
    al_destroy_bitmap(menu_title_image);
}
