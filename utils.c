#include "utils.h"

void typemachine(double typing_speed , const char* text , ALLEGRO_FONT *type_font, ALLEGRO_COLOR type_color, int x, int y, int *counter_ptr) {
    int total_len = strlen(text), word_len = (double)(*counter_ptr) / FPS / typing_speed;
    if (word_len >= total_len) {
        al_draw_text(type_font, type_color, x, y, ALLEGRO_ALIGN_LEFT, text);
    } else {
        char* result;
        result = malloc(word_len + 1);
        strncpy(result, text, word_len);
        result[word_len] = '\0';
        al_draw_text(type_font, type_color, x, y, ALLEGRO_ALIGN_LEFT, result);
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
