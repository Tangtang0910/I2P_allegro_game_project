#include "classroom_scene.h"

ALLEGRO_BITMAP *classroom_scene_background = NULL;
ALLEGRO_BITMAP *classroom_scene_main_charator= NULL;
ALLEGRO_FONT *classroom_user_name = NULL;
ALLEGRO_FONT *class_font = NULL;
char dialogue_texts[][256] = {
    "我：最近在資工系感覺課業繁重啊... ",
    "我：還好系上的泡麵頭教授人很好,下一節他的課我也要好好努力www",
    "而且最令人期待的是等等會跟女神一起上課 (owo)",
    "不知道今天有沒有機會跟她說到話呢～（歪頭燦笑）",
    "我：（鐘響）啊啊要趕快去下一堂課了，不然搶不到好位子，先不說了..."
};
int classroom_current_dialogue_index = 0;  
int classroom_scene_counter = 0;  

void classroom_scene_init() {
    
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();

    classroom_scene_background = al_load_bitmap("image/classroom_bk_1.jpeg");

    class_font = al_load_font("font/hand_write_CH.ttf",80, 0);
    classroom_user_name = al_load_font("./font/hand_write_CH.ttf", 70, 0);

    if(charator_gender){
        classroom_scene_main_charator = al_load_bitmap("image/main_chrator_boy.png");
    }else{
        classroom_scene_main_charator = al_load_bitmap("image/main_charator_girl.png");
    }
}

void classroom_scene_process(ALLEGRO_EVENT event) {
    if (event.type == ALLEGRO_EVENT_KEY_DOWN && event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
        classroom_current_dialogue_index++;
        if (classroom_current_dialogue_index >= sizeof(dialogue_texts) / sizeof(dialogue_texts[0])) {
            judge_next_window = true;
        }
        classroom_scene_counter = 0; 
    }
}

void classroom_scene_draw() {
    al_clear_to_color(al_map_rgb(0, 0, 0));  // 清除畫面為黑色
    al_draw_scaled_bitmap(classroom_scene_background, 0, 0, al_get_bitmap_width(classroom_scene_background), al_get_bitmap_height(classroom_scene_background),
                          0, 0, WIDTH, HEIGHT, 0);
   al_draw_bitmap(classroom_scene_main_charator, 0, 0, 0);


    al_draw_filled_rectangle(text_box_x, text_box_y*0.8, text_box_x*4, text_box_y*0.7, al_map_rgb(246,165,192));
    al_draw_text(classroom_user_name, al_map_rgb(0,0,0), text_box_x*0.9, text_box_y*0.75, ALLEGRO_ALIGN_LEFT, user_name);
    
    al_draw_filled_rectangle(text_box_x, text_box_y - text_box_height, text_box_x + text_box_width, text_box_y, al_map_rgb(255, 255, 255));
    al_draw_rectangle(text_box_x, text_box_y - text_box_height, text_box_x + text_box_width, text_box_y, al_map_rgb(246,165,192), 10);

    typemachine(0.01, dialogue_texts[classroom_current_dialogue_index], class_font, al_map_rgb(0, 0, 0), text_box_x + 20, text_box_y - text_box_height + 20, &classroom_scene_counter);
}

void classroom_scene_destroy() {
    al_destroy_bitmap(classroom_scene_background);
    al_destroy_bitmap(classroom_scene_main_charator);
    al_destroy_font(class_font);
    al_destroy_font(classroom_user_name);
}

// 在程式的適當位置呼叫 classroom_scene_destroy() 來釋放字體資源
