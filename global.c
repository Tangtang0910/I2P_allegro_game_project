#include "global.h"

// variables for global usage
const float FPS = 60.0;
const int WIDTH = 3030;
const int HEIGHT = 1710;
ALLEGRO_EVENT_QUEUE *event_queue = NULL;
ALLEGRO_TIMER *fps = NULL;
bool key_state[ALLEGRO_KEY_MAX] = {false};
bool judge_next_window = false;
bool isFirstDraw = true ;

char user_name[100] = {0};//使用者名字
int charator_gender = 2;//使用者性別

int goddes_favorability = 5;
int professor_favorability = 5;
int classmate_favorability = 5;

float text_box_width = WIDTH * 7/8;   // 文字框的寬度
float text_box_height = HEIGHT / 5;     // 文字框的高度
float text_box_x = WIDTH / 15;           // 文字框的起始 x 座標
float text_box_y = (float)HEIGHT *((float)8/9) ;      // 文字框的起始 y 座標