#ifndef MENU_H
#define MENU_H

#include "LPC17xx.h"

#define MAIN_MENU_STATE 0
#define SELECT_SIZE_STATE 1
#define GAME_STATE 2

#define BUTTON_DELAY for(int i=0; i<1000000; i++)

extern uint8_t appState;
extern uint8_t maze_width;
extern uint8_t maze_height;

void updateMainMenu(void);
void updateSelectSize(void);

void drawMainMenu(void);
void drawSelectSize(void);

#endif
