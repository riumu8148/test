#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct game{
    int score[3];
    int throw_number[3];
    int frame;
}Game;

void add_score(Game box[], int size);
void printscore(Game box[], int size);
void outputscore(Game box[], int size);
void throwdarts(const char *filename);
//void startgame(void);