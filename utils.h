#include "global.h"
#ifndef UTILS_H
#define UTILS_H

typedef struct {
    int index;
    int type; // 1: dialogue, 2: options
    int character;
    int face_option;
    char text[256];
} Dialogue;

void typemachine(double typing_speed , const char* text , ALLEGRO_FONT *type_font, ALLEGRO_COLOR type_color, int x, int y, int *counter);
void draw_rounded_rectangle(float x1, float y1, float x2, float y2, float r, ALLEGRO_COLOR color, float thickness);
void display_dialog(Dialogue dialog, int *dialogue_counter_ptr, bool linmiaojian);

#endif 