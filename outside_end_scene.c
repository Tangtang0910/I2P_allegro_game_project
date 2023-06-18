#include "outside_end_scene.h"

void outside_end_scene_init(){

}

void outside_end_scene_process(ALLEGRO_EVENT event){
    if(event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_Q){
        judge_next_window = true;
    }
    if(event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_R){
        judge_previous_window = true;
    }
}

void outside_end_scene_draw(){
    al_clear_to_color(al_map_rgb(0, 255, 0));
}

void outside_end_scene_destroy(){

}
