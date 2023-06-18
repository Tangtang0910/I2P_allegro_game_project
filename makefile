ALLEGRO_LIBRARIES := allegro-5 allegro_image-5 allegro_font-5 allegro_ttf-5 allegro_dialog-5 allegro_primitives-5 allegro_audio-5 allegro_acodec-5 allegro_video-5
ALLEGRO_FLAGS := $(shell pkg-config --cflags --libs "$(ALLEGRO_LIBRARIES) <= 5.2.7") -lallegro

CC := gcc
OUT:= game
MAIN:= GameWindow.c mac_main.c global.c utils.c menu.c choose_scene.c classroom_scene.c campus_scene.c outside_scene.c classroom_end_scene.c outside_end_scene.c

all: $(MAIN)
	$(CC) -o $(OUT) $(MAIN) $(ALLEGRO_FLAGS)

clean:
	rm $(OUT)
