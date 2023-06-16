#include "menu.h" 

ALLEGRO_FONT *font = NULL;
ALLEGRO_BITMAP *background = NULL;

// function of menu
void menu_init(){
    ALLEGRO_BITMAP* originalBackground = al_load_bitmap("./image/ini_background.png");
    background = al_create_bitmap(WIDTH, HEIGHT);
    al_set_target_bitmap(background);
    al_draw_scaled_bitmap(originalBackground, 0, 0, al_get_bitmap_width(originalBackground), al_get_bitmap_height(originalBackground), 0, 0, WIDTH, HEIGHT, 0);
    al_set_target_backbuffer(al_get_current_display());
    al_destroy_bitmap(originalBackground);
    font = al_load_ttf_font("./font/pirulen.ttf", 10, 0);
}

void menu_process(ALLEGRO_EVENT event){
    if (event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
        judge_next_window = true;
    }
}

void menu_draw(){
    al_draw_bitmap(background, 0, 0, 0);
    al_draw_text(font, al_map_rgb(0, 0, 0), WIDTH/2, HEIGHT*2/3 , ALLEGRO_ALIGN_CENTRE, "Press 'Enter' to start");
    al_draw_rectangle(WIDTH/3, HEIGHT*3/5, WIDTH*2/3, HEIGHT*4/5, al_map_rgb(0, 0, 0), 5);
}

void menu_destroy(){
    al_destroy_font(font);
    al_destroy_bitmap(background);
}
