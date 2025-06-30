#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct game{
    int score;
    int throw_number[3];
    int frame;
}Game;

void add_score(Game box[], int size);
void printcore(Game box[], int size);
void outputscore(Game box[], int size);
void throwdarts(const char *filename);
void startgame(void);