#ifndef MECHANICS_H
#define MECHANICS_H
using namespace std;


struct Board {
    int column;
    int row;
    int numberOfFlags;
    int numberOfMines;
    extern int numFlagMines;
    int xLocation;
    int yLocation;
    char **mineBoard;
    char **playerBoard;
    extern int currentScore;

    void setBoardSize();
    void setBoard();
    void placeMines(int x, int y);
    void delDynamic();
    void printBoard();
    char getPlayerInput(bool IsFirstTimePlaying);
    void uncover(int x, int y);
    void flagging();
};

#endif
