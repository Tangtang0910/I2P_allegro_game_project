#include "type.h"

void typemachine(double typing_speed ,const  char* text ,const ALLEGRO_FONT *type_font, int x, int y, int *counter) {
    int len = strlen(text);
    if (isFirstDraw) {
        for (int i = 0; i < len; i++) {
            char current_char[2] = { text[i], '\0' };
            al_draw_text(type_font, al_map_rgb(0, 0, 0), x, y, ALLEGRO_ALIGN_LEFT, current_char);
            al_flip_display();
            al_rest(typing_speed);
            x += al_get_text_width(type_font, current_char);
            printf("%s\n", current_char);
        }
        isFirstDraw = false;
    } else {
        al_draw_text(type_font, al_map_rgb(0, 0, 0), x, y, ALLEGRO_ALIGN_LEFT, text);
    }
}