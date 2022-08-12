#pragma once

class Board{
  public:
    Board()
    {
      construct(0,0);
    }
    // This is the constructor Board 
    Board(int height,int width){
      construct(height,width);
    }

    // This method is meant to initiaze the game view
    void initialize(){
      clear();
      refresh();
    }
    // This method is to add the border on the terminal
    void addBorder()
    {
      box(board_win,0,0);

    }
    // This method is to clear the view 
    void clear(){
      wclear(board_win);
      addBorder();
    }

    // This method is to refresh the screen 
    void refresh(){
      wrefresh(board_win);
    }

    // This method will pass the new position of the window and the position of the snake
    void addat(int y,int x, chtype ch){
      mvwaddch(board_win,y,x,ch);
    }
    chtype getInput(){
      return wgetch(board_win);
    }

    

  private:
    WINDOW *board_win;
    void construct(int height,int width){
    int xMax , yMax;
    getmaxyx(stdscr,yMax,xMax);
    board_win = newwin(height,width ,(yMax/2)-(height/2),(xMax/2)-(width/2));

}



};
