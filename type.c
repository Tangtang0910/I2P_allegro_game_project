#include "type.h"

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