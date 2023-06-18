#include"campus_scene.h"

ALLEGRO_BITMAP *campus_scene_background = NULL;

/*Dialogue campusdialogue[] = {
    {0, 1, -1, 0, "終於下課了～(歡呼)"},
    {1, 1, -1, 0, "不知道女神最後有沒有理解題目呢～希望之後還能再講到話呢www"},
    {2, 1, -1, 0, "去外面走走散心好了"},
    {3, 1, -1, 0, "誒咦那不是上一堂課的帥教授嗎"},
    {4, 1, -1, 0, "要不要去跟教授打個招呼呢..."},
    {5, 2, -1, 0, "1)哈囉教授！我是(玩家姓名)\n2)那...那個，誒.....不好意思借過一下"},
    {6, 1, 1, 1, "誒這不是(玩家姓名)同學嗎？"},
    {7, 1, -1, 0, "您好！(><)"},
    {8, 1, 1, 1, "怎麼啦～是有什麼事情要找我嗎?"},
    {9, 2, -1, 0, "1)教授不好意思下次考試的時候可以請助教出題手下留情嗎5555\n2)想請問教授要怎麼保養才能和您一樣帥呢\n3)教授這裡風好大..."},
    {10, 1, 1, 3, "哈..哈哈哈..."},
    {11, 1, 1, 3, "阿對！我...我想到我還有課要上，(玩家姓名)同學先這樣啦掰掰"},
    {12, 1, -1, 0, "教授跑好快www看來教授要遲到了呢"},
    {13, 1, -1, 0, "咦？前面那個不是早上跟我搭話的同學嗎?"},
    {14, 1, -1, 0, "剛好現在很閒，也去跟他打個招呼好了www"},
    {15, 1, -1, 0, "哈囉同學！"},
    {16, 1, 0, 0, "摳你機挖，挖搭西挖"},
    {17, 1, -1, 0, "（哈哈...這同學比我還奇怪..."},
    {18, 1, -1, 0, "你...你好啊"},
    {19, 1, 0, 1, "呃喝呃喝(////)要來猜猜吾的真名嗎"},
    {20, 2, -1, 0, "1)不要\n2)好"},
    {21, 1, 0, 0, "那麼 以下有三個吾的化名，試著猜出吾的真名吧!"},
    {22, 2, -1, 0, "1)墮龍狂嘯\n2)劍起雲湖\n3)怒狼破\n4)凜喵醬"},
    {23, 1, 0, 0, "吾乃凜喵醬得思:.ﾟヽ(*´∀`)ﾉﾟ.:｡隨風而生，隨風而逝，是你在呼喚吾之名嗎？"},
    {24, 1, -1, 0, "阿對對對對。"},
    {25, 1, 0, 0, "你我也算有緣，這個給你。"},
    {26, 1, -1, 0, "(接過物品)"},
    {27, 1, 0, 0, "那麼，告辭。"},
    {28, 1, -1, 0, "........"},//周邊圖
    {29, 1, -1, 0, "這......看來似乎案情不單純。"},
};*/

void campus_scene_init(){
    al_init_image_addon();

    campus_scene_background = al_load_bitmap("./image/campus_bk.jpeg");
}

void campus_scene_process(ALLEGRO_EVENT event){
    if(event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_Q){
        judge_next_window = true;
    }
    if(event.type == ALLEGRO_EVENT_KEY_UP && event.keyboard.keycode == ALLEGRO_KEY_R){
        judge_previous_window = true;
    }
}

void campus_scene_draw(){
    al_draw_scaled_bitmap(campus_scene_background, 0, 0, al_get_bitmap_width(campus_scene_background), al_get_bitmap_height(campus_scene_background), 0, 0, WIDTH, HEIGHT, 0);

}

void campus_scene_destroy(){
    
}
