#include "GameWindow.h"

bool draw = false;
int window = 3; // 第幾個畫面
const char *title = "どきどき戀愛冒險";

// ALLEGRO Variables
ALLEGRO_DISPLAY *display = NULL;
ALLEGRO_SAMPLE *song = NULL;
ALLEGRO_SAMPLE_INSTANCE *sample_instance;

int Game_establish() {
    int msg = 0;

    game_init();
    game_begin();
    classroom_scene_init();//最後會刪掉, 更改第幾個畫面的時候要更新
    while ( msg != GAME_TERMINATE ) {
        msg = game_run();
        if ( msg == GAME_TERMINATE )
            printf( "Game Over\n" );
    }

    game_destroy();
    return 0;
}

void game_init() {
    printf( "Game Initializing...\n" );
    al_init();
    // init audio
    al_install_audio();
    al_init_acodec_addon();
  
    display = al_create_display(WIDTH, HEIGHT);//螢幕視窗大小
    // create event queue
    event_queue = al_create_event_queue();
    // Initialize Allegro settings
    al_set_window_position(display, 0, 0); //螢幕出現位置
    al_set_window_title(display, title);
    al_init_primitives_addon();
    al_init_font_addon(); // initialize the font addon
    al_init_ttf_addon(); // initialize the ttf (True Type Font) addon
    al_init_image_addon(); // initialize the image addon
    al_init_acodec_addon(); // initialize acodec addon
    al_install_keyboard(); // install keyboard event
    al_install_mouse();    // install mouse event
    al_install_audio();    // install audio event
    // Register event
    al_register_event_source(event_queue, al_get_display_event_source( display ));
    al_register_event_source(event_queue, al_get_keyboard_event_source());
    al_register_event_source(event_queue, al_get_mouse_event_source());
    fps  = al_create_timer( 1.0 / FPS );
    al_register_event_source(event_queue, al_get_timer_event_source( fps )) ;
    // initialize the icon on the display
    ALLEGRO_BITMAP *icon = al_load_bitmap("./image/icon.jpg");//程式執行icon
    al_set_display_icon(display, icon);

    main_character_bitmap = al_load_bitmap("image/main_character_boy.png");
    user_name_font = al_load_font("./font/hand_write_CH.ttf", 100, 0);
    dialogue_font = al_load_font("font/hand_write_CH.ttf",80, 0);

    for (int i = 0; i < 3; i++) {
        char image_path[100];
        sprintf(image_path, "./image/classmate/%d.png", i);
        character_bitmaps[0][i] = al_load_bitmap(image_path);
    }
    for (int i = 0; i < 4; i++) {
        char image_path[100];
        sprintf(image_path, "./image/professor/%d.png", i);
        character_bitmaps[1][i] = al_load_bitmap(image_path);
    } 
    for (int i = 0; i < 4; i++) {
        char image_path[100];
        sprintf(image_path, "./image/goddes/%d.png", i);
        character_bitmaps[2][i] = al_load_bitmap(image_path);
    } 
}

void game_begin() {
    // Load sound
    //song = al_load_sample("./sound/hello.wav");
    al_reserve_samples(20);
    sample_instance = al_create_sample_instance(song);
    // Loop the song until the display closes
    al_set_sample_instance_playmode(sample_instance, ALLEGRO_PLAYMODE_LOOP);
    al_restore_default_mixer();
    al_attach_sample_instance_to_mixer(sample_instance, al_get_default_mixer());
    // set the volume of instance
    al_set_sample_instance_gain(sample_instance, 1);
    al_play_sample_instance(sample_instance);
    al_start_timer(fps);
    // initialize the menu before entering the loop
    menu_init();
}

void game_update(){
    if (judge_next_window) {
        if (window == 1) {
            menu_destroy();
            choose_scene_init();
            judge_next_window = false;
            window = 2;
        } else if (window == 2) {
            choose_scene_destroy();
            classroom_scene_init();
            judge_next_window = false;
            window = 3;
        } else if (window == 3) {
            classroom_scene_destroy();
            if (scene_option == 1) {
                campus_scene_init();
                window = 4;
            } else if (scene_option == 2) {
                classroom_end_scene_init();
                window = 5;
            }
            judge_next_window = false;
        } else if (window == 4) {
            campus_scene_destroy();
            outside_scene_init();
            judge_next_window = false;
            window = 6;
        } else if (window == 5) {
            classroom_end_scene_destroy();
            judge_next_window = false;
        } else if (window == 6) {
            outside_scene_destroy();
            outside_end_scene_init();
            judge_next_window = false;
            window = 7;
        } else if (window == 7) {
            outside_end_scene_destroy();
            judge_next_window = false;
        }
    }

    if (judge_previous_window) {
        if (window == 7) {
            outside_end_scene_destroy();
            outside_scene_init();
            judge_previous_window = false;
            window = 6;
        } else if (window == 6) {
            outside_scene_destroy();
            campus_scene_init();
            judge_previous_window = false;
            window = 4;
        } else if (window == 5) {
            classroom_end_scene_destroy();
            classroom_scene_init();
            judge_previous_window = false;
            window = 3;
        } else if (window == 4) {
            campus_scene_destroy();
            classroom_scene_init();
            judge_previous_window = false;
            window = 3;
        } else if (window == 3) {
            classroom_scene_destroy();
            choose_scene_init();
            judge_previous_window = false;
            window = 2;
        }
    }
}

int process_event(){
    // Request the event
    ALLEGRO_EVENT event;
    al_wait_for_event(event_queue, &event);
    // process the event of other component
    if (window == 1) {
        menu_process(event);
    } else if (window == 2) {
        choose_scene_process(event);
    } else if (window == 3) {
        classroom_scene_process(event);
    } else if (window == 4) {
        campus_scene_process(event);
    } else if (window == 5) {
        classroom_end_scene_process(event);
    } else if (window == 6) {
        outside_scene_process(event);
    } else if (window == 7) {
        outside_end_scene_process(event);
    }

    // Shutdown our program
    if(event.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
        return GAME_TERMINATE;
    else if(event.type == ALLEGRO_EVENT_TIMER)
        if(event.timer.source == fps)
            draw = true;
    if(draw) game_update();
    return 0;
}

// 畫出每一格畫面
void game_draw(){
    if (window == 1) {
        menu_draw();
    } else if (window == 2) {
        choose_scene_draw();
    } else if (window == 3) {
        classroom_scene_draw();
    } else if (window == 4) {
        campus_scene_draw();
    } else if (window == 5) {
        classroom_end_scene_draw();
    } else if (window == 6) {
        outside_scene_draw();
    } else if (window == 7) {
        outside_end_scene_draw();
    }

    al_flip_display();
}

int game_run() {
    int error = 0;
    if( draw ){
        game_draw();
        draw = false;
    }
    if ( !al_is_event_queue_empty(event_queue) ) {
        error = process_event();
    }
    return error;
}

void game_destroy() {
    // Make sure you destroy all things
    al_destroy_event_queue(event_queue);
    al_destroy_display(display);
    
    al_destroy_bitmap(main_character_bitmap);
    al_destroy_font(user_name_font);
    al_destroy_font(dialogue_font);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            al_destroy_bitmap(character_bitmaps[i][j]);
        }
    }
}
