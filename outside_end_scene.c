#include "outside_end_scene.h"

Dialogue classmate_end_dialogue[] = {
    {0, 1, 0, 0, "umm... 說真的,我的條件真的主角/男神等級的除了胖了一點外(100多不便\n透露),其他各方面都遠超其他人"},
    {1, 1, 0, 0, "不如這樣說吧,我比較偏向利維兵長那種冷酷壞帥的類型,\n身高也跟他差不多,\n我看女生都很喜歡這種類型的不是嗎?"},
    {2, 1, 0, 0, "利維在動漫角色投票也都很多女粉, \n討女生歡心、幽默之類的,我有時候也會\n像阪本銀時或是五條悟平常一樣不太正經、開點玩笑嘴個幾句"},
    {3, 1, 0, 1, "不過認真的時候就會像領域展開一樣驚人, \n或是體育課的時候霸氣地說一句「拿去吧!」"},
    {4, 1, 0, 0, "加一個兵長的表情,就把自己喝一半的水讓給女同學(雖然她好像沒喝), \n實際還有很多很多例子"},
    {5, 1, 0, 0, "真的是又體貼又幽默又認真 這些都是我上網看女生會喜歡的條件啊"},
    {6, 1, 0, 1, "不過... 要跟你當朋友以上的關係也不是不可以拉．．．．．．"},
};
Dialogue professor_end_dialogue[] = {
    {0, 1, 1, 0, "每次在課堂上看到你認真的模樣，都讓我很心動"},
    {1, 1, 1, 3, "以後 你的程設只允許由我來教。我們的愛 是雙向的 \n如果拿電流比喻的話 就是只能 AC 不能 DC \n如果愛情有無限個測資 那麼我們也只會 ac "},
    {2, 1, 1, 0, "今後 我們會攜手跨過無數個困難 找到每件事情的最佳解\n不論要用深度優先搜尋還是廣度優先搜尋 我最在乎的\n還是怎麼在茫茫的人海搜尋你的一顰一笑"},
    {3, 1, 1, 1, "如果世界少了你 就像程式碼沒了主函式一樣 難以運作 \n你就是我的標頭檔 你可以沒有我 但我必須包含你的一切 \n所以 謝謝你 ．．．。"},
};
Dialogue goddess_end_dialogue[] = {
    {0, 1, 2, 0, "那個...謝謝你之前的幫忙"},
    {1, 1, 2, 1, "其實自從你幫我解題之後我就很欣賞你"},
    {2, 1, 2, 3, "以後也請多多指叫了喔 學弟......或者說 親 愛 的 ？ "},
};
int outside_end_dialogue_index = 0;  
int outside_end_dialogue_counter = 0;

void outside_end_scene_init(){
    outside_end_dialogue_index = 0;
    outside_end_dialogue_counter = 0;
    drawSakura = true;
}

void outside_end_scene_process(ALLEGRO_EVENT event){
    if (event.type == ALLEGRO_EVENT_KEY_DOWN && event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
        if (outside_end_dialogue_index < 3) {
            outside_end_dialogue_index++;
            outside_end_dialogue_counter = 0;
        }
    }
}

void outside_end_scene_draw(){
    if (outside_end_dialogue_index == 3) {
        al_draw_scaled_bitmap(end_bitmaps[2][0][charator_gender], 0, 0, al_get_bitmap_width(end_bitmaps[2][0][charator_gender]), al_get_bitmap_height(end_bitmaps[2][0][charator_gender]), 0, 0, WIDTH, HEIGHT, 0);
    } else {
        al_draw_bitmap(main_background, 0, 0, 0);
        Dialogue current_dialog = goddess_end_dialogue[outside_end_dialogue_index];
        display_dialog(current_dialog, &outside_end_dialogue_counter, true);
    }
}

void outside_end_scene_destroy(){
    drawSakura = false;
}
