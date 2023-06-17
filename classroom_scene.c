#include"classroom_scene.h"

ALLEGRO_BITMAP *classroom_scene_background = NULL;

void classroom_scene_init(){
    al_init_image_addon();

    ALLEGRO_BITMAP* original_classroom_scene_background = al_load_bitmap("./image/classroom_bk_1.jpeg");
    classroom_scene_background = al_create_bitmap(WIDTH, HEIGHT);
    al_set_target_bitmap(classroom_scene_background);
    al_draw_scaled_bitmap(original_classroom_scene_background, 0, 0, al_get_bitmap_width(original_classroom_scene_background), al_get_bitmap_height(original_classroom_scene_background), 0, 0, WIDTH, HEIGHT, 0);
    al_set_target_backbuffer(al_get_current_display());
    al_destroy_bitmap(original_classroom_scene_background);
}

void classroom_scene_process(ALLEGRO_EVENT event){

}

void classroom_scene_draw(){
    al_draw_bitmap(classroom_scene_background, 0, 0, 0);
}

void classroom_scene_destroy(){
    al_destroy_bitmap(classroom_scene_background);
}