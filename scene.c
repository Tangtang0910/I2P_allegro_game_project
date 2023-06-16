#include "scene.h"

ALLEGRO_FONT *font = NULL;
ALLEGRO_BITMAP *background = NULL;

// function of menu
void menu_init(){
    font = al_load_ttf_font("./font/pirulen.ttf",50,0);
}

void menu_process(ALLEGRO_EVENT event){
    if( event.type == ALLEGRO_EVENT_KEY_UP )
        if( event.keyboard.keycode == ALLEGRO_KEY_ENTER )
            judge_next_window = true;
}

void menu_draw(){
    al_clear_to_color(al_map_rgb(248,163,192));
    al_draw_text(font, al_map_rgb(255,255,255), WIDTH/2, 1330 , ALLEGRO_ALIGN_CENTRE, "Press 'Enter' to start");
    al_draw_rectangle(WIDTH/2-500, 1200, WIDTH/2+500, 1500, al_map_rgb(255, 255, 255), 5);
}

void menu_destroy(){
    al_destroy_font(font);
}

// function of game_scene
void game_scene_init(){
    ALLEGRO_BITMAP* originalBackground = al_load_bitmap("./image/ini_background.png");
    background = al_create_bitmap(WIDTH, HEIGHT);
    al_set_target_bitmap(background);
    al_draw_scaled_bitmap(originalBackground, 0, 0, al_get_bitmap_width(originalBackground), al_get_bitmap_height(originalBackground), 0, 0, WIDTH, HEIGHT, 0);
    al_set_target_backbuffer(al_get_current_display());
    al_destroy_bitmap(originalBackground);
}

void game_scene_draw(){
    al_draw_bitmap(background, 0, 0, 0);
}

void game_scene_destroy(){
    al_destroy_bitmap(background);
}
