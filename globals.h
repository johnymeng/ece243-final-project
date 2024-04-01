#ifndef GLOBALS_H
#define GLOBALS_H

#include <stdio.h>
#include <stdlib.h>

struct cat;
struct dog;

int ENEMY_BASE_POS = 40;
int PLAYER_BASE_POS = 300;

#define NORMAL_CAT_HP 10;
#define NORMAL_CAT_DMG 2;

#define TANK_CAT_HP 25;
#define TANK_CAT_DMG 2;

#define AXE_CAT_HP 20;
#define AXE_CAT_DMG 4;

#define TALL_CAT_HP 40;
#define TALL_CAT_DMG 4;

#define DOG_HP 25;
#define DOG_DMG 3;

#define BASE_HP_BAR_LENGTH 50;

#define PROGRESS_BAR_WIDTH 20;

extern int player_money = 0, ENEMY_HP = 1000, PLAYER_HP = 1000, can_buy_normal_cat = 0;

//game over == 1 when there is a winner, if winner == 0 then enemy won, if winner == 1 then player won
extern int game_over = 0, winner = -1, draw = 1;

extern int left_shift = 0; //used to move cats to the left every framea
extern int right_shift = 0; //used to move opponent dogs to the right

extern int cat_ID = 0, dog_ID = 0; //keeps track of each cat in game, id is used to find the position of each cat
extern struct cat cat_tracking[100]; //keeps track of the x position of each cat, "x" is cat_id, "y" is the current x position of cat of cat_id
extern struct dog dog_tracking[100];//keeps track of the x position of each dog, "x" is dog_id, "y" is the current x position of dog of god_id

extern const short int tank_cat[];
extern const short int normal_cat[];
extern const short int axe_cat[];
extern const short int tall_cat[];
extern const short int ninja_cat[];
extern const short int Background[];
extern const short int start_screen[];

//keeps track of the dog that is furthest to the right
//kepst rack of the cat that is furthest to the left
extern int max_dog_pos = -1, min_cat_pos = 500;

struct cat
{
    int catID;
    int damage;
    int hp;
    int x_position;
    char* type;
};

struct dog
{
    int dogID;
    int damage;
    int hp;
    int x_position;
};

#endif