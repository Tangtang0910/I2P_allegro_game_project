#include "choose_scene.h"

ALLEGRO_FONT *choose_scene_pre_enter_name_font = NULL;
ALLEGRO_FONT *choose_scene_JP_font = NULL;
ALLEGRO_FONT *choose_scene_name_font = NULL;

ALLEGRO_BITMAP *male_symbo_image = NULL;
ALLEGRO_BITMAP *female_symbo_image = NULL;

int choose_scene_time_counter = 0;
bool choose_scene_inside_button = false;
bool choose_gender_circle_fix = false;
int mouse_boy_circle_distance = 0;
int mouse_girl_circle_distance = 0;

void choose_scene_init() {
    int choose_scene_time_counter = 0;
    bool choose_scene_inside_button = false;
    bool choose_gender_circle_fix = false;
    int mouse_boy_circle_distance = 0;
    int mouse_girl_circle_distance = 0;
    user_name[0] = '\0';

    male_symbo_image = al_load_bitmap("./image/boy.png");
    female_symbo_image = al_load_bitmap("./image/girl.png");

    al_init_image_addon();
    al_init_primitives_addon();
    al_init_font_addon();
    al_init_ttf_addon();
    al_install_keyboard();
    choose_scene_pre_enter_name_font = al_load_font("./font/pirulen_EN.ttf", 60, 0);
    choose_scene_JP_font = al_load_font("./font/setofont_JP.ttf", 60, 0);
    choose_scene_name_font = al_load_font("./font/hand_write_CH.ttf", 200, 0);
}

void choose_scene_process(ALLEGRO_EVENT event) {
    if(event.type == ALLEGRO_EVENT_KEY_CHAR){
        char keycode = event.keyboard.unichar;
        if(keycode >= 32 && keycode <= 126) {
            int len = strlen(user_name);
            if(len < 10) { // avoid buffer overflow
                user_name[len] = keycode;
                user_name[len + 1] = '\0';
            }
        }
    }
    else if (event.type == ALLEGRO_EVENT_KEY_DOWN) {
        if(event.keyboard.keycode == ALLEGRO_KEY_BACKSPACE) { // handle backspace
            int len = strlen(user_name);
            if(len > 0) { 
                user_name[len - 1] = '\0';
            }
        }
    }

    int mouse_x = event.mouse.x;
    int mouse_y = event.mouse.y;
    mouse_boy_circle_distance = (mouse_x-WIDTH*1.23/3)*(mouse_x-WIDTH*1.23/3) + (mouse_y-HEIGHT*2.32/5)*(mouse_y-HEIGHT*2.32/5);
    mouse_girl_circle_distance = (mouse_x-WIDTH*1.72/3)*(mouse_x-WIDTH*1.72/3) + (mouse_y-HEIGHT*2.32/5)*(mouse_y-HEIGHT*2.32/5);
    
    if (event.type == ALLEGRO_EVENT_MOUSE_AXES && !choose_gender_circle_fix) {
    // 鼠標移動事件
        if (mouse_girl_circle_distance <= 150*150) {
            charator_gender = 0;//女
        }
        else if (mouse_boy_circle_distance <= 150*150){
            charator_gender = 1;//男
        }
        else{
            charator_gender = 2;
        }
    } 
    else if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
        // 鼠標按下事件
        if (mouse_girl_circle_distance <= 150*150) {
            choose_scene_inside_button = true;
            choose_gender_circle_fix = false;
            charator_gender = 0;//女
        }
        else if (mouse_boy_circle_distance <= 150*150){
            choose_scene_inside_button = true;
            choose_gender_circle_fix = false;
            charator_gender = 1;//男
        }
    }

    if(event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_ENTER && choose_gender_circle_fix){
        al_destroy_bitmap(main_character_bitmap);
        if(charator_gender){
            main_character_bitmap = al_load_bitmap("image/main_character_boy.png");
        }else{
            main_character_bitmap = al_load_bitmap("image/main_character_girl.png");
        }
        judge_next_window = true;
    }
}

void choose_scene_draw() {
    choose_scene_time_counter++;
    double second = (double)choose_scene_time_counter / FPS;

    al_clear_to_color(al_map_rgb(248,163,192));

    al_draw_filled_circle(WIDTH*1.72/3, HEIGHT*2.32/5, 150, al_map_rgb(196,146,227));
    al_draw_filled_circle(WIDTH*1.23/3, HEIGHT*2.32/5, 150, al_map_rgb(157,220,235));
    if(charator_gender == 0){
        al_draw_circle(WIDTH*1.72/3, HEIGHT*2.32/5, 155, al_map_rgb(255, 255, 255), 20);
        if(choose_scene_inside_button){
            choose_gender_circle_fix = true;
        }
    }
    else if(charator_gender == 1){
        al_draw_circle(WIDTH*1.23/3, HEIGHT*2.32/5, 155, al_map_rgb(255, 255, 255), 20);
        if(choose_scene_inside_button){
            choose_gender_circle_fix = true;
        }
    }

    float scale = 0.4f; // change this value to what you want
    int w = al_get_bitmap_width(male_symbo_image);// get the width and height of the bitmap
    int h = al_get_bitmap_height(male_symbo_image);
    al_draw_scaled_bitmap(male_symbo_image, 0, 0, w, h, WIDTH*1.1/3, HEIGHT*2/5, w*scale, h*scale, 0);// Draw the scaled bitmap
    w = al_get_bitmap_width(female_symbo_image);
    h = al_get_bitmap_height(female_symbo_image);
    al_draw_scaled_bitmap(female_symbo_image, 0, 0, w, h, WIDTH*1.6/3, HEIGHT*1.95/5, w*scale, h*scale, 0);

    al_draw_text(choose_scene_JP_font, al_map_rgb(0,0,0), WIDTH*1.35/3, HEIGHT*3.7/6, ALLEGRO_ALIGN_LEFT, "君の名は。");

    al_draw_filled_rectangle(WIDTH/3, HEIGHT*4/6, WIDTH*2/3, HEIGHT*4/5, al_map_rgb(255,222,213));
    al_draw_rectangle(WIDTH/3, HEIGHT*4/6, WIDTH*2/3, HEIGHT*4/5, al_map_rgb(210,33,147), 7);
    
    // 畫出輸入的文字
    if(strlen(user_name) == 0){    
        if(second < 0.8){
            al_draw_text(choose_scene_pre_enter_name_font, al_map_rgb(200, 204, 241), WIDTH*1.8/5, HEIGHT*7.1/10, ALLEGRO_ALIGN_LEFT, "Enter Your Name");
        }
        else if(second >= 0.8){
            al_draw_text(choose_scene_pre_enter_name_font, al_map_rgb(255,222,213), WIDTH*1.8/5, HEIGHT*7.1/10, ALLEGRO_ALIGN_LEFT, "Enter Your Name");
        }
        if(second == 1.6)
            choose_scene_time_counter = 0;
        }
    else{
        al_draw_text(choose_scene_name_font, al_map_rgb(0,0,0), WIDTH*2/5, HEIGHT*6.7/10, ALLEGRO_ALIGN_LEFT, user_name);
    }
}  

void choose_scene_destroy() {
    al_destroy_bitmap(male_symbo_image);
    al_destroy_bitmap(female_symbo_image);
    al_destroy_font(choose_scene_name_font);
    al_destroy_font(choose_scene_pre_enter_name_font);
    al_destroy_font(choose_scene_JP_font);
}
