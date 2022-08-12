#include<ncurses.h>
#include "./Board.hpp"
#include "./SnakeGame.hpp"


#define BOARD_DIM 40
#define BOARD_ROWS BOARD_DIM 
#define BOARD_COLS BOARD_DIM * 2.5


int main(int argc,char **argv){
  initscr();
  refresh();
  noecho();


  // Here i initiated the snakegame
  SnakeGame game = SnakeGame(BOARD_ROWS,BOARD_COLS);
  
  // Let's create the game loop
  while(!game.isOver()){
    //1: get the input from the user
    game.processInput();
    //2: update the game state
    game.updateState();
    //3: redraw the display 
    game.redraw();
  }




  getch();
  endwin();
  return 0;
}
