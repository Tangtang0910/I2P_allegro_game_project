#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED
#define GAME_TERMINATE -1
#include <stdio.h>
#include <math.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_video.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

// note that you can't assign initial value here!
extern const float FPS;
extern const int WIDTH;
extern const int HEIGHT;
extern bool key_state[ALLEGRO_KEY_MAX];
extern bool judge_next_window;
extern bool judge_previous_window;
extern int scene_option;
extern int end_option;
extern ALLEGRO_EVENT_QUEUE *event_queue;
extern ALLEGRO_TIMER *fps;
extern char user_name[100];
extern int charator_gender;
extern int goddes_favorability;
extern int professor_favorability;
extern int classmate_favorability;
extern float text_box_width;   // 文字框的寬度
extern float text_box_height;     // 文字框的高度
extern float text_box_x;           // 文字框的起始 x 座標
extern float text_box_y;      // 文字框的起始 y 座標

extern ALLEGRO_BITMAP *main_character_bitmap;
extern ALLEGRO_BITMAP *character_bitmaps[3][4];
extern int character_face_option; // 角色的表情
extern ALLEGRO_FONT *user_name_font;
extern ALLEGRO_FONT *dialogue_font;

#endif
