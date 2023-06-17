#include "choose_scene.h"

void choose_scene_init() {
    al_init_primitives_addon();
    al_init_font_addon();
    al_init_ttf_addon();
}

void choose_scene_process(ALLEGRO_EVENT event) {

}

void choose_scene_draw() {
    al_clear_to_color(al_map_rgb(248,163,192));

    al_draw_filled_rectangle(WIDTH/3, HEIGHT*4/6, WIDTH*2/3, HEIGHT*4/5, al_map_rgb(255,222,213));
    al_draw_rectangle(WIDTH/3, HEIGHT*4/6, WIDTH*2/3, HEIGHT*4/5, al_map_rgb(210,33,147), 7);

    
}

void choose_scene_destroy() {
    
}
