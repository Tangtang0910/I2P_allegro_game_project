#include "classroom_scene.h"
ALLEGRO_BITMAP *classroom_scene_background = NULL;
ALLEGRO_FONT *class_font = NULL;
char dialogue_texts[][256] = {
    "我：最近在資工系感覺課業繁重啊... (✖﹏✖)",
    "我：還好系上的泡麵頭教授人很好，下一節他的課我也要好好努力www",
    "而且最令人期待的是等等會跟女神一起上課，不知道今天有沒有機會跟她說到話呢～（歪頭燦笑）",
    "我：（鐘響）啊啊要趕快去下一堂課了，不然搶不到好位子，先不說了..."
};
int current_dialogue_index = 0;  
int counter = 0;  

void classroom_scene_init() {
    
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();

    classroom_scene_background = al_load_bitmap("image/classroom_bk_1.jpeg");
    if (!classroom_scene_background) {
        fprintf(stderr, "加载教室背景图片失败。\n");
    }

    class_font = al_load_font("font/hand_write_CH.ttf", 18, 0);
    if (!class_font) {
        fprintf(stderr, "加载字体失败。\n");
    }
}

void classroom_scene_process(ALLEGRO_EVENT event) {
    if (event.type == ALLEGRO_EVENT_KEY_DOWN && event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
        current_dialogue_index++;
        if (current_dialogue_index >= sizeof(dialogue_texts) / sizeof(dialogue_texts[0])) {
            judge_next_window = true;
        }
        counter = 0; 
    }
}

void classroom_scene_draw() {
    al_clear_to_color(al_map_rgb(0, 0, 0));  // 清除畫面為黑色
    al_draw_scaled_bitmap(classroom_scene_background, 0, 0, al_get_bitmap_width(classroom_scene_background), al_get_bitmap_height(classroom_scene_background),
                          0, 0, WIDTH, HEIGHT, 0);

    al_draw_filled_rectangle(WIDTH*1/5,WIDTH*4/5, HEIGHT*3/5, HEIGHT*4/5, al_map_rgb(255, 255, 255));
    al_draw_rectangle(100, 100, 500, 300, al_map_rgb(0, 0, 0), 2);

  
    typemachine(0.1, dialogue_texts[current_dialogue_index], class_font, al_map_rgb(0, 0, 0), 120, 120, &counter);

    al_flip_display();
}

void classroom_scene_destroy() {
    al_destroy_bitmap(classroom_scene_background);
    al_destroy_font(class_font);
    al_shutdown_font_addon();
    al_shutdown_ttf_addon();
}

// 在程式的適當位置呼叫 classroom_scene_destroy() 來釋放字體資源
