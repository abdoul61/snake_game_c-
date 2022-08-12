all: main


main: main.cpp  ./Board.hpp ./SnakeGame.hpp ./Drawable.hpp 
	g++ main.cpp -lncurses -o main


