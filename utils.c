#include "utils.h"

void typemachine(double typing_speed , const char* text , ALLEGRO_FONT *type_font, ALLEGRO_COLOR type_color, int x, int y, int *counter_ptr) {
    int total_len = strlen(text), word_len = (double)(*counter_ptr) / FPS / typing_speed;
    if (word_len >= total_len) {
        word_len = total_len;
    }
    char* result = malloc(word_len + 1);
    strncpy(result, text, word_len);
    result[word_len] = '\0';

    char* token = strtok(result, "\n");
    while (token != NULL) {
        al_draw_text(type_font, type_color, x, y, ALLEGRO_ALIGN_LEFT, token);
        y += al_get_font_line_height(type_font);;
        token = strtok(NULL, "\n");
    }
    (*counter_ptr)++;
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

void display_dialog(Dialogue dialogue, int *dialogue_counter_ptr, bool linmiaogian) {
    if (dialogue.character == -1) {
        al_draw_bitmap(main_character_bitmap, 0, 0, 0);
        al_draw_filled_rectangle(text_box_x, text_box_y*0.8, text_box_x*4, text_box_y*0.7, al_map_rgb(246,165,192));
        al_draw_text(user_name_font, al_map_rgb(0,0,0), text_box_x*1.5, text_box_y*0.705, ALLEGRO_ALIGN_LEFT, user_name);
    } else if(dialogue.character == 0){
        al_draw_scaled_bitmap(character_bitmaps[0][dialogue.face_option], 0, 0, al_get_bitmap_width(character_bitmaps[0][dialogue.face_option]), al_get_bitmap_height(character_bitmaps[0][dialogue.face_option]), WIDTH/15, HEIGHT/6, WIDTH/3, HEIGHT/1.9, 0);
        al_draw_filled_rectangle(text_box_x, text_box_y*0.8, text_box_x*4, text_box_y*0.7, al_map_rgb(246,165,192));
        if (linmiaogian) {
            al_draw_text(user_name_font, al_map_rgb(0,0,0), text_box_x*1.5, text_box_y*0.705, ALLEGRO_ALIGN_LEFT, "凜喵醬");
        } else {
            al_draw_text(user_name_font, al_map_rgb(0,0,0), text_box_x*1.5, text_box_y*0.705, ALLEGRO_ALIGN_LEFT, "不知名宅宅");
        }
    } else if(dialogue.character == 1){
        al_draw_scaled_bitmap(character_bitmaps[1][dialogue.face_option], 0, 0, al_get_bitmap_width(character_bitmaps[1][dialogue.face_option]), al_get_bitmap_height(character_bitmaps[1][dialogue.face_option]), WIDTH/10, HEIGHT/10, WIDTH/4, HEIGHT/1.7, 0);
        al_draw_filled_rectangle(text_box_x, text_box_y*0.8, text_box_x*4, text_box_y*0.7, al_map_rgb(246,165,192));
        al_draw_text(user_name_font, al_map_rgb(0,0,0), text_box_x*1.5, text_box_y*0.705, ALLEGRO_ALIGN_LEFT, "教授");
    } else if(dialogue.character == 2){
        al_draw_scaled_bitmap(character_bitmaps[2][dialogue.face_option], 0, 0, al_get_bitmap_width(character_bitmaps[2][dialogue.face_option]), al_get_bitmap_height(character_bitmaps[2][dialogue.face_option]), WIDTH/20, HEIGHT/10, WIDTH/4, HEIGHT/1.7, 0);
        al_draw_filled_rectangle(text_box_x, text_box_y*0.8, text_box_x*4, text_box_y*0.7, al_map_rgb(246,165,192));
        al_draw_text(user_name_font, al_map_rgb(0,0,0), text_box_x*1.5, text_box_y*0.705, ALLEGRO_ALIGN_LEFT, "女神");
    }
    al_draw_filled_rectangle(text_box_x, text_box_y - text_box_height, text_box_x + text_box_width, text_box_y, al_map_rgb(255, 255, 255));
    al_draw_rectangle(text_box_x, text_box_y - text_box_height, text_box_x + text_box_width, text_box_y, al_map_rgb(246,165,192), 10);
    typemachine(0.01, dialogue.text, dialogue_font, al_map_rgb(0, 0, 0), text_box_x + 25, text_box_y - text_box_height + 30, dialogue_counter_ptr);
}
