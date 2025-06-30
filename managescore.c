#include<stdio.h>
#include"managescore.h"

extern FILE* fp;

void printscore(Game box[],int size){
    for(int i=0;i<size;i++){
        printf("%dゲーム %d\n",i,box[i]);
    }
}

void add_score(Game box[],int size){
    //そのフレームのスコア計算
    for(int i=0;i<size;i++){
        box[i].score=box[i].throw_number[0]+box[i].throw_number[1]+box[i].throw_number[2];
    }

    //前のフレームのスコアを足させて合計点を出力
    for(int i=1;i<size;i++){
        box[i].score=box[i].score+box[i-1].score;
    }
}

void outputscore(Game box[],int size){
    if((fp = fopen("ffasf.txt","w"))==NULL)
    {
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    for(int i=1;i<size;i++){
        fprintf(fp,"%d",box[i].score);
    }
    fclose(fp);
}
