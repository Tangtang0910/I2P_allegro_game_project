#include "menu.h" 

double rec_size = 1.5, sign = 1, count = 0;
bool in_button = false;
ALLEGRO_BITMAP *title_img = 0;
ALLEGRO_FONT *font = NULL, *bigFont = NULL, *smallFont = NULL;
ALLEGRO_BITMAP *background = NULL;

// function of menu
void menu_init(){
    al_init_image_addon();
    al_init_primitives_addon();

    ALLEGRO_BITMAP* originalBackground = al_load_bitmap("./image/ini_background.png");
    background = al_create_bitmap(WIDTH, HEIGHT);
    al_set_target_bitmap(background);
    al_draw_scaled_bitmap(originalBackground, 0, 0, al_get_bitmap_width(originalBackground), al_get_bitmap_height(originalBackground), 0, 0, WIDTH, HEIGHT, 0);
    al_set_target_backbuffer(al_get_current_display());
    al_destroy_bitmap(originalBackground);
    title_img = al_load_bitmap("./image/ttl.png");

    bigFont = al_load_ttf_font("./font/pirulen.ttf", HEIGHT/10, 0);
    smallFont = al_load_ttf_font("./font/pirulen.ttf", HEIGHT/35, 0);
}

void menu_process(ALLEGRO_EVENT event){
    if(event.type == ALLEGRO_EVENT_MOUSE_AXES) {
        // 鼠標移動事件
        int mouse_x = event.mouse.x;
        int mouse_y = event.mouse.y;

        if((mouse_x >= WIDTH/3 && mouse_x <= WIDTH*2/3) && (mouse_y >= HEIGHT*3/5 && mouse_y <= HEIGHT*4/5)){
            in_button = true;
        } else {
            in_button = false;
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
    al_draw_bitmap(background, 0, 0, 0);

    al_draw_bitmap(title_img, WIDTH/5, HEIGHT/5, 0);

    if (count == 50) {
        count = 0;
        sign = -sign;
    }
    count++;
    rec_size += sign * 0.4 * sin(count * 3.14 / 100);

    if(in_button == false){
        draw_rounded_rectangle(WIDTH/3, HEIGHT*3/5, WIDTH*2/3, HEIGHT*4/5, 20, al_map_rgb(51,76,97), rec_size);
        font = smallFont;
        al_draw_text(font, al_map_rgb(51,76,97), WIDTH/2, HEIGHT*7.5/11 , ALLEGRO_ALIGN_CENTRE, "Press HERE to start");
    }
    else{
        draw_rounded_rectangle(WIDTH/3, HEIGHT*3/5, WIDTH*2/3, HEIGHT*4/5, 20, al_map_rgb(240,121,161), rec_size+20);
        font = bigFont;
        al_draw_text(font, al_map_rgb(240,121,161), WIDTH/2, HEIGHT*7/11 , ALLEGRO_ALIGN_CENTRE, "start!");

        
    }
}

void menu_destroy(){
    al_destroy_font(font);
    al_destroy_bitmap(background);
    al_destroy_bitmap(title_img);
}
