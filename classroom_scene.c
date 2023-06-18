#include "classroom_scene.h"

ALLEGRO_BITMAP *classroom_scene_background = NULL;
ALLEGRO_FONT *classroom_user_name = NULL;
ALLEGRO_FONT *class_font = NULL;

Dialogue class_dialogue[] = {
    {1, -1, "我：最近在資工系感覺課業繁重啊... "},
    {2, -1, "我：還好系上的泡麵頭教授人很好,下一節他的課我也要好好努力www"},
    {3, -1, "而且最令人期待的是等等會跟女神一起上課 (owo)"},
    {4, -1, "不知道今天有沒有機會跟她說到話呢～（歪頭燦笑）"},
    {5, -1, "我：（鐘響）啊啊要趕快去下一堂課了，不然搶不到好位子，先不說了..."},
    {6, 0, "不知名宅宅：同...同學，你好可愛喔，跟我交往好嗎www？（後空翻"},
    {7, 1, "教授：以上是今天的教學內容，這裡有一個題目，(玩家姓名)同學願意試試看嗎？"},
    {8, 1, "問：剛剛上課提到了oj系統 截至目前為止請問oj上有幾道題目(不含contest)？"},
    {9, 2, "校花：不好意思，剛剛老師教的我不太懂，可以教我一下嗎？"},
    {10, -1, "我：（女神居然主動找我！！我要好好表現！！）"},
    {11, -1, "我：哪一題有問題呢？我可以試試看wwwwww"},
    {12, 2, "校花：你看這題...."},
    {13, 2, "校花：對了，請問你是什麼學校的呢？"},
};
int classroom_dialogue_index = 0;  
int classroom_dialogue_counter = 0;  

void classroom_scene_init() {
    
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();

    classroom_scene_background = al_load_bitmap("image/classroom_bk_out.jpeg");
}

void classroom_scene_process(ALLEGRO_EVENT event) {
    if (event.type == ALLEGRO_EVENT_KEY_DOWN && event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
        classroom_dialogue_index++;
        if (classroom_dialogue_index >= sizeof(class_dialogue) / sizeof(class_dialogue[0])) {
            judge_next_window = true;
        }
        classroom_dialogue_counter = 0; 
    }
}

void classroom_scene_draw() {
    al_clear_to_color(al_map_rgb(0, 0, 0));  // 清除畫面為黑色
    al_draw_scaled_bitmap(classroom_scene_background, 0, 0, al_get_bitmap_width(classroom_scene_background), al_get_bitmap_height(classroom_scene_background), 0, 0, WIDTH, HEIGHT, 0);
    
    Dialogue current_dialog = class_dialogue[classroom_dialogue_index];
    if (current_dialog.character == -1) {
        al_draw_bitmap(main_character_bitmap, 0, 0, 0);
    } else {
        al_draw_bitmap(character_bitmaps[current_dialog.character][0], 0, 0, 0);
    }

    al_draw_filled_rectangle(text_box_x, text_box_y*0.8, text_box_x*4, text_box_y*0.7, al_map_rgb(246,165,192));
    al_draw_filled_rectangle(text_box_x, text_box_y - text_box_height, text_box_x + text_box_width, text_box_y, al_map_rgb(255, 255, 255));
    al_draw_rectangle(text_box_x, text_box_y - text_box_height, text_box_x + text_box_width, text_box_y, al_map_rgb(246,165,192), 10);
    al_draw_text(user_name_font, al_map_rgb(0,0,0), text_box_x*1.5, text_box_y*0.705, ALLEGRO_ALIGN_LEFT, user_name);
    
    typemachine(0.01, current_dialog.text, dialogue_font, al_map_rgb(0, 0, 0), text_box_x + 25, text_box_y - text_box_height + 30, &classroom_dialogue_counter);
}

void classroom_scene_destroy() {
    al_destroy_bitmap(classroom_scene_background);
}

// 在程式的適當位置呼叫 classroom_scene_destroy() 來釋放字體資源
