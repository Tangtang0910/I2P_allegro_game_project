#include <allegro5/allegro.h>

int main() {
    // 初始化 Allegro
    al_init();

    // 創建顯示視窗
    ALLEGRO_DISPLAY* display = al_create_display(800, 600);

    // 設置視窗標題
    al_set_window_title(display, "Allegro Sample");

    // 創建繪圖介面
    ALLEGRO_BITMAP* backbuffer = al_get_backbuffer(display);
    ALLEGRO_BITMAP* rectangle = al_create_sub_bitmap(backbuffer, 100, 100, 200, 150);

    // 清空視窗
    al_clear_to_color(al_map_rgb(255, 255, 255));

    // 繪製矩形
    al_set_target_bitmap(rectangle);
    al_clear_to_color(al_map_rgb(255, 0, 0));

    // 顯示視窗，等待使用者關閉
    al_flip_display();
    al_rest(5.0); // 暫停程式執行 5 秒鐘

    // 清理資源並退出
    al_destroy_bitmap(rectangle);
    al_destroy_display(display);

    return 0;
}

