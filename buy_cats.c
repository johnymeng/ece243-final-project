#include "globals.h"

void new_normal_cat()
{
    if(player_money >= 50)
    {
        player_money -= 50;
    }

    // int catID;
    // int damage;
    // int hp;
    // int x_position;

    cat_tracking[cat_ID].catID = cat_ID;
    cat_tracking[cat_ID].damage = NORMAL_CAT_DMG;
    cat_tracking[cat_ID].hp = NORMAL_CAT_HP;
    cat_tracking[cat_ID].x_position = 200;
    cat_tracking[cat_ID].type = "normal";

    cat_ID++;
}

void new_tank_cat()
{
    if(player_money >= 100)
    {
        player_money -= 100;
    }

    // int catID;
    // int damage;
    // int hp;
    // int x_position;

    cat_tracking[cat_ID].catID = cat_ID;
    cat_tracking[cat_ID].damage = TANK_CAT_DMG;
    cat_tracking[cat_ID].hp = TANK_CAT_HP;
    cat_tracking[cat_ID].x_position = 200;
    cat_tracking[cat_ID].type = "tank";

    cat_ID++;
}

void new_axe_cat()
{
    if(player_money >= 200)
    {
        player_money -= 200;
    }

    // int catID;
    // int damage;
    // int hp;
    // int x_position;

    cat_tracking[cat_ID].catID = cat_ID;
    cat_tracking[cat_ID].damage = AXE_CAT_DMG;
    cat_tracking[cat_ID].hp = AXE_CAT_HP;
    cat_tracking[cat_ID].x_position = 200;
    cat_tracking[cat_ID].type = "axe";

    cat_ID++;
}

void new_tall_cat()
{
    if(player_money >= 100)
    {
        player_money -= 100;
    }

    // int catID;
    // int damage;
    // int hp;
    // int x_position;

    cat_tracking[cat_ID].catID = cat_ID;
    cat_tracking[cat_ID].damage = TALL_CAT_DMG;
    cat_tracking[cat_ID].hp = TALL_CAT_HP;
    cat_tracking[cat_ID].x_position = 200;
    cat_tracking[cat_ID].type = "tall";

    cat_ID++;
}