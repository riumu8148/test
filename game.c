#include "game.h"
Game box[8];
FILE *fp = NULL;

int main(int argc, char *argv[]){
    startgame();    //game開始をアナウンスする
    throwdarts(argv[1]);      //fileopenを確認する
    add_score(box,8);    //スコアを計算する
    printcore(box,8);    //スコアを表示する
    outputscore(box,8);  //スコアを出力する
    return 0;
}