#pragma once
#include<ncurses.h>
#include "Board.hpp"




class SnakeGame
{
public:

  SnakeGame(int height,int width){
    board = Board(height,width);
    board.initialize();
    game_over = false;
  }
  void processInput(){
    chtype ch = board.getInput();
    // will process the input after

  }
  void updateState(){

  }
  void redraw(){
   board.refresh();
  }
  bool isOver(){
    return game_over;

  }
  private:
    Board board;
    bool game_over;
};
