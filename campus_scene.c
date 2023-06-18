#include"campus_scene.h"

ALLEGRO_BITMAP *campus_scene_background = 0;

void campus_scene_init(){
    al_init_image_addon();

    ALLEGRO_BITMAP* original_campus_scene_background = al_load_bitmap("./image/campus_bk.jpeg");
    campus_scene_background = al_create_bitmap(WIDTH, HEIGHT);
    al_set_target_bitmap(campus_scene_background);
    al_draw_scaled_bitmap(original_campus_scene_background, 0, 0, al_get_bitmap_width(original_campus_scene_background), al_get_bitmap_height(original_campus_scene_background), 0, 0, WIDTH, HEIGHT, 0);
    al_set_target_backbuffer(al_get_current_display());
    al_destroy_bitmap(original_campus_scene_background);
}

void campus_scene_process(ALLEGRO_EVENT event){
    if(event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_Q){
        judge_next_window = true;
    }
    if(event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_R){
        judge_previous_window = true;
    }
}

void campus_scene_draw(){
    al_draw_bitmap(campus_scene_background, 0, 0, 0);

}

void campus_scene_destroy(){
    
}
