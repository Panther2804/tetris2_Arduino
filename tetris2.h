 //
// Created by ppasch on 26.05.18.
//

#ifndef TETRISCLION_MAIN_H
#define TETRISCLION_MAIN_H

int main();

void setup();
void loop();

void playfieldinit();
void minit();
void mprint();
void transfer();
bool mput(int ,int , int, bool);
void undoplayfield();
bool draw(const bool[][4],int,bool);
void pieceselect(int);
void cnstcpy(bool[2][4], const bool[2][4]);
void linecheck();
void playfieldprint();

#endif //TETRISCLION_MAIN_H

