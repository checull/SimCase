//libraries
#include <iostream>
#include <fstream>
#include <cstring>
#include <ncurses.h>

//data structures

//global variables
int ScreenWidth, ScreenHeight;
//function calls

void init(); //initialization

void RollAnimation(); //rolling animation (duh)

void MainMenu(); //main menu selection and idk what

void ItemList(); // item list where you can add or remove items


int main()
{
    init();
    return 0;
}


void init()
{
    char mesg[]="Just a string";
    initscr();
    //curs_set(0);
    getmaxyx(stdscr, ScreenHeight, ScreenWidth);
    noecho();
    wborder(stdscr, '|', '|', '_', '_', '+', '+', '+', '+');
    refresh();
    mvprintw(ScreenHeight/2, (ScreenWidth-strlen("initialization complete."))/2, "Initialization complete.");
    mvprintw(ScreenHeight/2+1, (ScreenWidth-strlen("Press any key to continue."))/2, "Press any key to continue.");
    getch();
    endwin();
}
