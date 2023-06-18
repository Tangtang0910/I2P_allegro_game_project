#include "outside_scene.h"

ALLEGRO_BITMAP *outside_scene_cafe_background = NULL, *outside_scene_street_background = NULL, *outside_scene_question = NULL;

Dialogue outside_scene_dialogue[] = {
    {0, 1, 3, 0, "（校外咖啡廳）"},
    {1, 1, -1, 0, "難得的下午空堂，來咖啡廳讀期末考好了，上次那個助教講了好多\n神奇解題技巧，趁著現在有記憶趕快來實踐www。"},
    {2, 1, -1, 0, "先來點單好了"},
    {3, 2, -1, 0, "菜單選項：\n1)doki doki水果茶    2)萌萌噠卡布奇諾\n3)猛男咖啡       4)魯肉飯"},
    {4, 1, -1, 0, "點完餐了(汗).....薩 來找位置吧！"},
    {5, 1, -1, 0, "好耶，5點鐘方向發現一個空座位。"},
    {6, 1, 2, 0, "可以請你借過嗎，這是我的位置。"},
    {7, 1, -1, 0, "八嘎哪，怎麼可能？我剛剛看這裡是空的耶。"},
    {8, 1, -1, 0, "(等等等等等!!!這不是剛剛問我題目的女神嗎？)"},
    {9, 1, -1, 0, "抱歉，是在下的疏失，有請小姐入座。"},
    {10, 1, 2, 0,"(這個人好奇怪，不過他點的東西有點讓我在意......)"},
    {11, 1, -1, 0,"那麼，在下告辭了(颯爽轉頭離場，但是飲料卻飛出去撒在女神身上)"},
    {12, 1, 2, 2, "(目 光 厭 惡)"},
    {13, 1, -1, 0, "對...對不起!!!!!!!!!!"},
    {14, 1, -1, 0, "不...不然，我有一個好....好主意............?"},
    {15, 1, 2, 2, "說吧。"},
    {16, 1, -1, 0,"作為補償，我幫你把程設作業解決掉，你就原諒我好嗎？"},
    {17, 1, 2,  0,"好吧，聽起來還不錯，只要你解的出來我就原諒你。"},
    {18, 1, 2,  3,"看在你點了doki doki水果茶的份上，你就坐我對面吧，我的貼文正好缺\n一張照片。"},
    {19, 1, 2,  3,"看在你點了萌萌噠卡布奇諾的份上，你就坐我對面吧，我的貼文正好缺\n一張照片。"},
    {20, 1, 2,  3,"看在你點了猛男咖啡的份上，你就坐我對面吧，我的貼文正好缺一張照片。"},
    {21, 1, 2,  3,"看在你點了魯肉飯的份上，你就坐我對面吧，我的貼文正好缺一張照片。"},
    {22, 1, -1, 0,"(賺爛了賺爛了，可以快樂解題目又能坐女神對面 55555555)"},
    {23, 1, -1, 0,"(這次要好好表現！！)"},
    {24, 1, -1, 0,"(OJ 啟動!!)"},
    {25, 2, -1, 0,"1)gf_opinion\n2)my_opinion\n3)他沒寫分號QQ"},
    {26, 1, 3,  0,"答對！"},
    {27, 1, 3,  0,"答錯！"},
    {28, 1, 2,  1,"抱歉我想到我還有點事情，之後我再去看結果，今天謝謝你了。"},
    {29, 1, 3, 0,"呼......想不到能在這裡遇到女神...看來之後要多找機會來這裡多看看了。"},
    {30, 1, 3, 0,"時間不早了，先回宿舍吧！"},
    {31, 1, -1, 0,"怎麼回事，突然一個黑影把我撞倒了"},
    {32, 1, -1, 0,"不對，這不是凜喵醬同學嗎？等等....那是.....OLOO??"},
    {33, 1, -1, 0,"你該不會騎OLOO出校園了吧，這可是違法行為喔？"},
    {34, 1, 3,  0,"(宣導警告：OLOO不能騎出校園喔)"},
    {35, 1, 0,  2,"對不起對不起!!!"}, 
    {36, 1, -1, 0,"(算了，今天有香香女神陪我喝飲料，就不跟他計較了)"},
    {37, 1, -1, 0,"算了算了，沒事，下次注意。"},
    {38, 1, 0,  2,"對不起........TT"}, 
    {39, 1, 3, 0,"(地上散落著被撞開的包包和各種物品)"}, 
    {40, 1, 0, 0,"(拿到我珍藏的東方projecct宣傳單)"},
    {41, 1, 0, 1,"你也是東方廚嗎？？？"}, 
    {42, 1, -1, 0,"(居然遇到同好了!?)"}, 
    {43, 1, 0,  1,"那麼www正邪跟探女常因為角色設定被認為是甚麼關係呢？"},
    {44, 2, 3,  0,"\n1)親姊妹     2)母女\n3)沒有關係    4)神明與鬼 "},
    {45, 1, 3,  0,"答對！"},
    {46, 1, 3, 0, "答錯！"}, 
    {47, 1, 0, 1,"總之，天探女天邪鬼的設定蠻有趣的吶(*owo*)"},
    {48, 1, 0, 2, "完了，顧著閒聊，都忘了時間了，我要先去遊戲demo了www之後再聊！！！"},
    {49, 1, -1, 0,"掰掰......"},
    {50, 1, -1, 0,"不只遇到女神，還遇到東方廚，今天真的很幸運。"},
    {51, 1, -1, 0,"(走了一陣子.........)"},
    {52, 1, -1, 0,"(咦？為甚麼帥哥教授在前面呢？)"},
    {53, 1, 1, 0, "咦？哈囉(玩家姓名)，我等等要去看學生的遊戲demo，但我遇到了一題\n問題卡好久，好想把它解出來啊...."},
    {54, 1, -1, 0,"（看教授這麼苦惱的樣子，還是我來幫忙看看好了）"},
    {55, 1, 1, 1, " 如果 X(n) 代表 X 這個數字是 n 進位，請問 D02A(16) + 5487(10) 等於多少？"},
    {56, 2, 3, 0,"\n1)162631(8)\n2)F599(16)\n3)1100 0101 1001 1001(2)"},
    {57, 1, 3, 0, "答對！"},
    {58, 1, 3, 0, "答錯！"},
    {59, 1, 1, 3, "同學感謝你想幫忙的心，但我現在來不及了，我先趕回去學校了啊!"},
    {60, 1, -1, 0,"好的好的，教授掰掰～"},
    {61, 1, -1, 0,"（不愧是教授啊，連忙碌的身影也是如此的帥氣）"},
    {62, 1, 3, 0, "（突然有人擦肩跑過）"},
    {63, 1, -1, 0, "咦？妳怎麼在這呀？剛剛不是有急事要忙嗎？"},
    {64, 1, 2, 0, "怎麼是你？借過一下我趕時間"},
    {65, 1, -1, 0, "你怎麼了，為什麼這麼趕呀?"},
    {66, 1, 2, 2, "我要去遊戲demo了，但我還沒趕完遊戲內容，該怎麼辦啊...."},
    {67, 2, -1, 0, "\n1)抱歉我也幫不上忙...QQ \n2)痾....喝熱水有用嗎??\n3)我這邊剛好有之前做過的project，叫做 doki doki 戀愛冒險，可以借你用一下"},
    {68, 1, 2, 0, "唉沒事，我去趕期末了"},
    {69, 1, -1, 0, "掰掰～改天見ㄚ owo"},
};

int outside_scene_dialogue_index = 0;  
int outside_scene_dialogue_counter = 0;  
int outside_scene_background_option = 1;
int count_drink_type = 0;


void outside_scene_init(){
    outside_scene_dialogue_index = 0;  
    outside_scene_dialogue_counter = 0;  
    outside_scene_background_option = 1;
    count_drink_type = 0;

    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();
    outside_scene_cafe_background = al_load_bitmap("./image/outside_bk_cafe.jpeg");
    outside_scene_street_background = al_load_bitmap("./image/outside_bk_street.jpeg");
    outside_scene_question = al_load_bitmap("./image/outside_question.png");
}

void outside_scene_process(ALLEGRO_EVENT event){
    if (outside_scene_dialogue[outside_scene_dialogue_index].type == 1 && event.type == ALLEGRO_EVENT_KEY_DOWN && event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
        if(outside_scene_dialogue_index == 30){
            outside_scene_background_option = 2;
            outside_scene_dialogue_index ++;
            outside_scene_dialogue_counter = 0; 
        } else if(outside_scene_dialogue_index == 17){
            if(count_drink_type == 1){
                outside_scene_dialogue_index = 18;
                outside_scene_dialogue_counter = 0; 
            }else if(count_drink_type == 2){
                outside_scene_dialogue_index = 19;
                outside_scene_dialogue_counter = 0;
            }else if(count_drink_type == 3){
                outside_scene_dialogue_index = 20;
                outside_scene_dialogue_counter = 0;
            }else if(count_drink_type == 4){
                outside_scene_dialogue_index = 21;
                outside_scene_dialogue_counter = 0;
            }
                
        } else if(outside_scene_dialogue_index == 18){
            outside_scene_dialogue_index += 4;
            outside_scene_dialogue_counter = 0; 
        } else if (outside_scene_dialogue_index == 19) {
            outside_scene_dialogue_index += 3;
            outside_scene_dialogue_counter = 0; 
        } else if (outside_scene_dialogue_index == 20) {
            outside_scene_dialogue_index += 2;
            outside_scene_dialogue_counter = 0;   
        } else if (outside_scene_dialogue_index == 21) {
            outside_scene_dialogue_index += 1;
           outside_scene_dialogue_counter = 0; 
        } else if (outside_scene_dialogue_index == 26) {
            outside_scene_dialogue_index += 2;
            outside_scene_dialogue_counter = 0; 
        } else if (outside_scene_dialogue_index == 45) {
            outside_scene_dialogue_index += 2;
            outside_scene_dialogue_counter = 0; 
        } else if (outside_scene_dialogue_index == 57) {
            outside_scene_dialogue_index += 2;
            outside_scene_dialogue_counter = 0; 
        } else if (outside_scene_dialogue_index >= 69) {
            end_option = 3;
            judge_next_window = true;
        } else {
            outside_scene_dialogue_index++;
            outside_scene_dialogue_counter = 0;
        }    
        
    } 
    if (outside_scene_dialogue_index  == 3 && event.type == ALLEGRO_EVENT_KEY_DOWN) {
        if (event.keyboard.keycode == ALLEGRO_KEY_1) {
            outside_scene_dialogue_index++;
            outside_scene_dialogue_counter = 0; 
            count_drink_type = 1;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_2) {
            outside_scene_dialogue_index++;
            outside_scene_dialogue_counter = 0; 
            count_drink_type = 2;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_3) {
            outside_scene_dialogue_index++;
            outside_scene_dialogue_counter = 0; 
            count_drink_type = 3;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_4) {
            outside_scene_dialogue_index++;
            outside_scene_dialogue_counter = 0; 
            count_drink_type = 4;
        }
    }
    else if (outside_scene_dialogue_index == 25 && event.type == ALLEGRO_EVENT_KEY_DOWN) {
        if (event.keyboard.keycode == ALLEGRO_KEY_1) { //goddes +1
            outside_scene_dialogue_index++;
            outside_scene_dialogue_counter = 0;
            favor[2][2]++;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_2){ //goddes -1
            outside_scene_dialogue_index += 2;
            outside_scene_dialogue_counter = 0;
            favor[2][2]--;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_3){ //goddes -1
            outside_scene_dialogue_index += 2;
            outside_scene_dialogue_counter = 0;
            favor[2][2]--;
        }

    }
    else if (outside_scene_dialogue_index == 44 && event.type == ALLEGRO_EVENT_KEY_DOWN) {
        if (event.keyboard.keycode == ALLEGRO_KEY_1) {
            outside_scene_dialogue_index += 2; // classmate -1
            outside_scene_dialogue_counter = 0;
            favor[2][0]--;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_2){
            outside_scene_dialogue_index ++; // classmate +1
            outside_scene_dialogue_counter = 0;
            favor[2][0]++;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_3){
            outside_scene_dialogue_index += 2; // classmate -1
            outside_scene_dialogue_counter = 0;
            favor[2][0]--;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_4){
            outside_scene_dialogue_index += 2; // classmate -1
            outside_scene_dialogue_counter = 0;
            favor[2][0]--;
        }
    }
    else if (outside_scene_dialogue_index == 56 && event.type == ALLEGRO_EVENT_KEY_DOWN) {
        if (event.keyboard.keycode == ALLEGRO_KEY_1) { 
            end_option = 0; // professor happy endding
            judge_next_window = true;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_2){ //pro -1
            outside_scene_dialogue_index += 2;
            outside_scene_dialogue_counter = 0;
            favor[2][1]--;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_3){ //pro -1
            outside_scene_dialogue_index += 2;
            outside_scene_dialogue_counter = 0;
            favor[2][1]--;
        }
    }
    else if (outside_scene_dialogue_index == 67 && event.type == ALLEGRO_EVENT_KEY_DOWN) {
        if (event.keyboard.keycode == ALLEGRO_KEY_1) { 
            outside_scene_dialogue_index++;
            outside_scene_dialogue_counter = 0;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_2){ 
            end_option = 1; // goddes bad endding
            judge_next_window = true;
        } else if (event.keyboard.keycode == ALLEGRO_KEY_3){ 
            end_option = 2; // goddes happy endding
            judge_next_window = true;
        }
    }
}

void outside_scene_draw(){
    if (outside_scene_background_option == 1) {
        al_draw_scaled_bitmap(outside_scene_cafe_background, 0, 0, al_get_bitmap_width(outside_scene_cafe_background), al_get_bitmap_height(outside_scene_cafe_background), 0, 0, WIDTH, HEIGHT, 0);
    } else if (outside_scene_background_option == 2) {
        al_draw_scaled_bitmap(outside_scene_street_background, 0, 0, al_get_bitmap_width(outside_scene_street_background), al_get_bitmap_height(outside_scene_street_background), 0, 0, WIDTH, HEIGHT, 0);
    }

    if (outside_scene_dialogue_index == 53) {
        sprintf(outside_scene_dialogue[outside_scene_dialogue_index].text, "咦？哈囉%s，我等等要去看學生的遊戲demo，但我遇到了一題程式\n問題卡好久，好想把它解出來啊....", user_name);
    }else if (outside_scene_dialogue_index == 25){
        al_draw_scaled_bitmap(outside_scene_question, 0, 0, al_get_bitmap_width(outside_scene_question), al_get_bitmap_height(outside_scene_question), WIDTH*3/7,  HEIGHT*3/5, WIDTH*4/7, HEIGHT*3.5/5, 0);
    }

    Dialogue current_dialog = outside_scene_dialogue[outside_scene_dialogue_index];
    display_dialog(current_dialog, &outside_scene_dialogue_counter, true);
}

void outside_scene_destroy(){
    al_destroy_bitmap(outside_scene_cafe_background);
    al_destroy_bitmap(outside_scene_street_background);
    al_destroy_bitmap(outside_scene_question);
}
