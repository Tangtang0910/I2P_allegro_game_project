#include "choose_scene.h"

ALLEGRO_FONT *choose_scene_pre_enter_name_font = NULL;
ALLEGRO_FONT *choose_scene_JP_font = NULL;
ALLEGRO_FONT *choose_scene_name_font = NULL;

ALLEGRO_BITMAP *male_symbo_image = NULL;
ALLEGRO_BITMAP *female_symbo_image = NULL;

int choose_scene_time_counter = 0;

void choose_scene_init() {
    int choose_scene_time_counter = 0;

    male_symbo_image = al_load_bitmap("./image/male.jpeg");
    female_symbo_image = al_load_bitmap("./image/female.jpeg");

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
            int len = strlen(choose_scene_name_input);
            if(len < 10) { // avoid buffer overflow
                choose_scene_name_input[len] = keycode;
                choose_scene_name_input[len + 1] = '\0';
            }
        }
    } else if (event.type == ALLEGRO_EVENT_KEY_DOWN) {
        if(event.keyboard.keycode == ALLEGRO_KEY_BACKSPACE) { // handle backspace
            int len = strlen(choose_scene_name_input);
            if(len > 0) { 
                choose_scene_name_input[len - 1] = '\0';
            }
        }
    }
}

void choose_scene_draw() {
    choose_scene_time_counter++;
    double second = (double)choose_scene_time_counter / FPS;

    al_clear_to_color(al_map_rgb(248,163,192));

    al_draw_bitmap(male_symbo_image, 0, 0, 0);
    al_draw_bitmap(female_symbo_image, 0, 0, 0);

    al_draw_text(choose_scene_JP_font, al_map_rgb(0,0,0), WIDTH*1.35/3, HEIGHT*3.7/6, ALLEGRO_ALIGN_LEFT, "君の名は。");

    al_draw_filled_rectangle(WIDTH/3, HEIGHT*4/6, WIDTH*2/3, HEIGHT*4/5, al_map_rgb(255,222,213));
    al_draw_rectangle(WIDTH/3, HEIGHT*4/6, WIDTH*2/3, HEIGHT*4/5, al_map_rgb(210,33,147), 7);
    
    // 畫出輸入的文字
    if(strlen(choose_scene_name_input) == 0){    
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
        al_draw_text(choose_scene_name_font, al_map_rgb(0,0,0), WIDTH*2/5, HEIGHT*6.7/10, ALLEGRO_ALIGN_LEFT, choose_scene_name_input);
    }

    al_draw_filled_circle(WIDTH/2, HEIGHT/3, 50, al_map_rgb(196,146,227));
    
}  

void choose_scene_destroy() {
    al_destroy_bitmap(male_symbo_image);
    al_destroy_bitmap(female_symbo_image);
    al_destroy_font(choose_scene_name_font);
    al_destroy_font(choose_scene_pre_enter_name_font);
    al_destroy_font(choose_scene_JP_font);
}
