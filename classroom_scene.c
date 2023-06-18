#include "classroom_scene.h"

ALLEGRO_BITMAP *classroom_scene_background_out = NULL, *classroom_scene_background_in = NULL;
ALLEGRO_FONT *classroom_user_name = NULL;
ALLEGRO_FONT *class_font = NULL;

Dialogue classroom_dialogue[] = {
    {0, 1, -1, "最近在資工系感覺課業繁重啊... "},
    {1, 1, -1, "還好系上的泡麵頭教授人很好,下一節他的課我也要好好努力www"},
    {2, 1, -1, "而且最令人期待的是等等會跟女神一起上課 (owo)"},
    {3, 1, -1, "不知道今天有沒有機會跟她說到話呢～（歪頭燦笑）"},
    {4, 1, -1, "（鐘響）啊啊要趕快去下一堂課了，不然搶不到好位子，先不說了..."},
    {5, 1, 0, "同...同學，你好可愛喔，跟我交往好嗎www？（後空翻"},
    {6, 2, 0, "1)doki doki doki doki doki doki <3\n2)不...不好意思，請問你是？"},
    {7, 1, 1, "以上是今天的教學內容，這裡有一個題目，\n(玩家姓名)同學願意試試看嗎？"},
    {8, 2, -1, "1)好\n2)先pass\n3)恩...先思考一下"},
    {9, 1, 1, "問：剛剛上課提到了oj系統 截至目前為止請問oj上有幾道題目(不含contest)？"},
    {10, 2, 1, "1)147\n2)149"},
    {11, 1, 3, "答對！"},
    {12, 1, 3, "答錯！"},
    {13, 1, 2, "不好意思，剛剛老師教的我不太懂，可以教我一下嗎？"},
    {14, 1, -1, "我：（女神居然主動找我！！我要好好表現！！）"},
    {15, 1, -1, "我：哪一題有問題呢？我可以試試看wwwwww"},
    {16, 1, 2, "你看這題...."},
    {17, 2, 2, "1)invaluable\n2)2147483647\n3)NULL"},
    {18, 1, 3, "答對！"},
    {19, 1, 3, "答錯！"},
    {18, 1, 2, "對了，請問你是什麼學校的呢？"},
    {19, 2, 2, "1)交大\n2)清大"},
};
int classroom_dialogue_index = 0;  
int classroom_dialogue_counter = 0;  
int classroom_background_option = 1;

void classroom_scene_init() {
    classroom_dialogue_index = 0;
    classroom_dialogue_counter = 0;
    classroom_background_option = 1;
    
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();

    classroom_scene_background_out = al_load_bitmap("image/classroom_bk_out.jpeg");
    classroom_scene_background_in = al_load_bitmap("image/classroom_bk_in.webp");
}

void classroom_scene_process(ALLEGRO_EVENT event) {
    if (classroom_dialogue[classroom_dialogue_index].type == 1 && event.type == ALLEGRO_EVENT_KEY_DOWN && event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
        if (classroom_dialogue_index == 4) {
            classroom_background_option = 2;
            if (charator_gender == 1) { // 女生才觸發宅宅劇情, 男生就跳過
                classroom_dialogue_index = 7;
            }
            classroom_dialogue_counter = 0; 
        } else if (classroom_dialogue_index == 11) {
            classroom_dialogue_index += 2;
            classroom_dialogue_counter = 0; 
        } else if (classroom_dialogue_index == 18) {
            classroom_dialogue_index += 2;
            classroom_dialogue_counter = 0;   
        } else if (classroom_dialogue_index >= sizeof(classroom_dialogue) / sizeof(classroom_dialogue[0])) {
            judge_next_window = true;
        } else {
            classroom_dialogue_index++;
            classroom_dialogue_counter = 0; 
        }
    }
    if (classroom_dialogue_index == 6 && event.type == ALLEGRO_EVENT_KEY_DOWN) {
        
    } else if (classroom_dialogue_index == 8 && event.type == ALLEGRO_EVENT_KEY_DOWN) {
        if (event.keyboard.keycode == ALLEGRO_KEY_1) {
            classroom_dialogue_index++;
            classroom_dialogue_counter = 0;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_2) {
            classroom_dialogue_index = 13;
            classroom_dialogue_counter = 0;  
        } else if (event.keyboard.keycode == ALLEGRO_KEY_3) {
            classroom_dialogue_counter = 0;
        }
    } else if (classroom_dialogue_index == 10 && event.type == ALLEGRO_EVENT_KEY_DOWN) {
        if (event.keyboard.keycode == ALLEGRO_KEY_1) {
            classroom_dialogue_index++;
            classroom_dialogue_counter = 0;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_2) {
            classroom_dialogue_index += 2;
            classroom_dialogue_counter = 0;
        }
    } 
}

void classroom_scene_draw() {
    al_clear_to_color(al_map_rgb(0, 0, 0));  // 清除畫面為黑色
    if (classroom_background_option == 1) {
        al_draw_scaled_bitmap(classroom_scene_background_out, 0, 0, al_get_bitmap_width(classroom_scene_background_out), al_get_bitmap_height(classroom_scene_background_out), 0, 0, WIDTH, HEIGHT, 0);
    } else if (classroom_background_option == 2) {
        al_draw_scaled_bitmap(classroom_scene_background_in, 0, 0, al_get_bitmap_width(classroom_scene_background_in), al_get_bitmap_height(classroom_scene_background_in), 0, 0, WIDTH, HEIGHT, 0);
    }

    if (classroom_dialogue_index == 7) {
        sprintf(classroom_dialogue[classroom_dialogue_index].text, "教授：以上是今天的教學內容，這裡有一個題目，\n      %s 同學願意試試看嗎？", user_name);
    }

    Dialogue current_dialog = classroom_dialogue[classroom_dialogue_index];
    if (current_dialog.character == -1) {
        al_draw_bitmap(main_character_bitmap, 0, 0, 0);
        al_draw_filled_rectangle(text_box_x, text_box_y*0.8, text_box_x*4, text_box_y*0.7, al_map_rgb(246,165,192));
        al_draw_text(user_name_font, al_map_rgb(0,0,0), text_box_x*1.5, text_box_y*0.705, ALLEGRO_ALIGN_LEFT, user_name);
    } else if(current_dialog.character == 0){
        al_draw_scaled_bitmap(character_bitmaps[0][0], 0, 0, al_get_bitmap_width(character_bitmaps[0][0]), al_get_bitmap_height(character_bitmaps[0][0]), WIDTH/15, HEIGHT/6, WIDTH/3, HEIGHT/1.9, 0);
        al_draw_filled_rectangle(text_box_x, text_box_y*0.8, text_box_x*4, text_box_y*0.7, al_map_rgb(246,165,192));
        al_draw_text(user_name_font, al_map_rgb(0,0,0), text_box_x*1.5, text_box_y*0.705, ALLEGRO_ALIGN_LEFT, "不知名宅宅");
    } else if(current_dialog.character == 1){
        al_draw_scaled_bitmap(character_bitmaps[1][0], 0, 0, al_get_bitmap_width(character_bitmaps[1][0]), al_get_bitmap_height(character_bitmaps[1][0]), WIDTH/15, HEIGHT/10, WIDTH/3.4, HEIGHT/1.7, 0);
        al_draw_filled_rectangle(text_box_x, text_box_y*0.8, text_box_x*4, text_box_y*0.7, al_map_rgb(246,165,192));
        al_draw_text(user_name_font, al_map_rgb(0,0,0), text_box_x*1.5, text_box_y*0.705, ALLEGRO_ALIGN_LEFT, "教授");
    } else if(current_dialog.character == 2){
        al_draw_scaled_bitmap(character_bitmaps[2][0], 0, 0, al_get_bitmap_width(character_bitmaps[2][0]), al_get_bitmap_height(character_bitmaps[2][0]), WIDTH/20, HEIGHT/10, WIDTH/4, HEIGHT/1.7, 0);
        al_draw_filled_rectangle(text_box_x, text_box_y*0.8, text_box_x*4, text_box_y*0.7, al_map_rgb(246,165,192));
        al_draw_text(user_name_font, al_map_rgb(0,0,0), text_box_x*1.5, text_box_y*0.705, ALLEGRO_ALIGN_LEFT, "校花");
    }
    al_draw_filled_rectangle(text_box_x, text_box_y - text_box_height, text_box_x + text_box_width, text_box_y, al_map_rgb(255, 255, 255));
    al_draw_rectangle(text_box_x, text_box_y - text_box_height, text_box_x + text_box_width, text_box_y, al_map_rgb(246,165,192), 10);
    
    typemachine(0.01, current_dialog.text, dialogue_font, al_map_rgb(0, 0, 0), text_box_x + 25, text_box_y - text_box_height + 30, &classroom_dialogue_counter);
}

void classroom_scene_destroy() {
    al_destroy_bitmap(classroom_scene_background_out);
    al_destroy_bitmap(classroom_scene_background_in);
}

// 在程式的適當位置呼叫 classroom_scene_destroy() 來釋放字體資源
