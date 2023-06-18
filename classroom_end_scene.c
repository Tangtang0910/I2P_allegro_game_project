#include "classroom_end_scene.h"

Dialogue classroom_classmate_end_dialogue[] = {
    {0, 1, 0, 0, "umm... 說真的,我的條件真的主角/男神等級的除了胖了一點外(100多不便\n透露),其他各方面都遠超其他人"},
    {1, 1, 0, 0, "不如這樣說吧,我比較偏向利維兵長那種冷酷壞帥的類型,\n身高也跟他差不多,\n我看女生都很喜歡這種類型的不是嗎?"},
    {2, 1, 0, 0, "利維在動漫角色投票也都很多女粉, \n討女生歡心、幽默之類的,我有時候也會\n像阪本銀時或是五條悟平常一樣不太正經、開點玩笑嘴個幾句"},
    {3, 1, 0, 1, "不過認真的時候就會像領域展開一樣驚人, \n或是體育課的時候霸氣地說一句「拿去吧!」"},
    {4, 1, 0, 0, "加一個兵長的表情,就把自己喝一半的水讓給女同學(雖然她好像沒喝), \n實際還有很多很多例子"},
    {5, 1, 0, 0, "真的是又體貼又幽默又認真 這些都是我上網看女生會喜歡的條件啊"},
    {6, 1, 0, 1, "不過... 要跟你當朋友以上的關係也不是不可以拉．．．．．．"},
};
Dialogue classroom_goddess_end_dialogue[] = {
    {0, 1, 3, 0, "你讀...你居然讀交大嗎"},
    {1, 1, 3, 0, "那是哪一間啊，是在陽明山下那一間嗎，\n還是紐約市大學(NYC University)啊"},
    {2, 1, 3, 0, "我好像有朋友學測少考一科才會到那邊去，\n他現在已經在準備明年重考了"},
    {3, 1, 3, 0, "我沒辦法跟這種學店的人當朋友，\n拜託你今天當作沒有碰到我"},
};
int classroom_end_dialogue_index = 0;  
int classroom_end_dialogue_counter = 0;  

void classroom_end_scene_init() {
    classroom_end_dialogue_index = 0;
    classroom_end_dialogue_counter = 0;

    if (end_option == 0) {
        drawSakura = true;
    }
}

void classroom_end_scene_process(ALLEGRO_EVENT event) {
    if (event.type == ALLEGRO_EVENT_KEY_DOWN && event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
        classroom_end_dialogue_index++;
        classroom_end_dialogue_counter = 0;
    }
}

void classroom_end_scene_draw() {    
    if (end_option == 0) {
        if (classroom_end_dialogue_index <= 6) {
            al_draw_bitmap(main_background, 0, 0, 0);
            Dialogue current_dialog = classroom_classmate_end_dialogue[classroom_end_dialogue_index];
            display_dialog(current_dialog, &classroom_end_dialogue_counter, true);
        } else {
            al_draw_scaled_bitmap(end_bitmaps[0][0][charator_gender], 0, 0, al_get_bitmap_width(end_bitmaps[0][0][charator_gender]), al_get_bitmap_height(end_bitmaps[0][0][charator_gender]), 0, 0, WIDTH, HEIGHT, 0);
        }
    } else if (end_option == 1) {
        al_draw_scaled_bitmap(end_bitmaps[2][1][0], 0, 0, al_get_bitmap_width(end_bitmaps[2][1][0]), al_get_bitmap_height(end_bitmaps[2][1][0]), 0, 0, WIDTH, HEIGHT, 0);
        if (classroom_end_dialogue_index < 4) {
            Dialogue current_dialog = classroom_goddess_end_dialogue[classroom_end_dialogue_index];
            display_dialog(current_dialog, &classroom_end_dialogue_counter, true);
        }
    }
}

void classroom_end_scene_destroy() {
    drawSakura = false;
}
