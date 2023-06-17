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

char choose_scene_name_input[100] = {0};//使用者名字