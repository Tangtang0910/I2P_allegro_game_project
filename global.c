#include "global.h"

// variables for global usage
const float FPS = 60.0;
const int WIDTH = 3030;
const int HEIGHT = 1710;
ALLEGRO_EVENT_QUEUE *event_queue = NULL;
ALLEGRO_TIMER *fps = NULL;
bool key_state[ALLEGRO_KEY_MAX] = {false};
bool judge_next_window = false;
bool judge_previous_window = false;
int scene_option = -1; // 有分岔的場景，選擇哪一個
int end_option = -1; // 哪一個結局

char user_name[100] = {0};//使用者名字
int charator_gender = 2;//使用者性別

int goddes_favorability = 5;
int professor_favorability = 5;
int classmate_favorability = 5;

float text_box_width = WIDTH * 7/8;   // 文字框的寬度
float text_box_height = HEIGHT / 5;     // 文字框的高度
float text_box_x = WIDTH / 15;           // 文字框的起始 x 座標
float text_box_y = (float)HEIGHT *((float)8/9) ;      // 文字框的起始 y 座標

ALLEGRO_BITMAP *main_character_bitmap = NULL;
ALLEGRO_FONT *user_name_font = NULL;
ALLEGRO_FONT *dialogue_font = NULL;
