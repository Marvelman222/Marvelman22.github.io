#ifndef _config_h_
#define _config_h_

// From math.h
#define M_PI_2 1.57079632679489661923132169163975144   /* pi/2           */

// app parameters
#define FULLSCREEN 0
#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 768
#define VSYNC 1
#define SCROLL_THRESHOLD 0.1
#define MAX_MESSAGES 4
#define DB_PATH "craft.db"
#define USE_CACHE 1
#define DAY_LENGTH 300

// key bindings
#define CRAFT_KEY_QUIT GLFW_KEY_BACKSPACE
#define CRAFT_KEY_FORWARD 'W'
#define CRAFT_KEY_BACKWARD 'S'
#define CRAFT_KEY_LEFT 'A'
#define CRAFT_KEY_RIGHT 'D'
#define CRAFT_KEY_DROP 'Q'
#define CRAFT_KEY_JUMP GLFW_KEY_SPACE
#define CRAFT_KEY_FLY GLFW_KEY_TAB
#define CRAFT_KEY_OBSERVE 'O'
#define CRAFT_KEY_OBSERVE_INSET 'P'
#define CRAFT_KEY_INVENTORY 'E'
#define CRAFT_KEY_BLOCK_TYPE 'R'
#define CRAFT_KEY_ZOOM GLFW_KEY_LEFT_SHIFT
#define CRAFT_KEY_ORTHO 'F'
#define CRAFT_KEY_CHAT 't'
#define CRAFT_KEY_COMMAND '/'

// keys for moving along axes
#define CRAFT_KEY_XM 'Z'
#define CRAFT_KEY_XP 'X'
#define CRAFT_KEY_YM 'C'
#define CRAFT_KEY_YP 'V'
#define CRAFT_KEY_ZM 'B'
#define CRAFT_KEY_ZP 'N'

// advanced parameters
#define CHUNK_SIZE 32
#define COMMIT_INTERVAL 5

// inventory
#define INVENTORY_SLOTS 9
#define INVENTORY_ROWS 4
#define MAX_SLOT_SIZE 64
#define INVENTORY_ITEM_SIZE 48
#define INVENTORY_FONT_SIZE 20
#define INVENTORY_UNLIMITED 0x7fffffff

#define CREATIVE_MODE 1

#endif
