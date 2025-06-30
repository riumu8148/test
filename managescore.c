#include<stdio.h>
#include"managescore.h"
#include "game.h"

int sum[8];
extern FILE* fp;

void printscore(Game box[],int size){
    printf("aabb");
    for(int i=0;i<size;i++){
        printf("%dゲーム %d\n",i,sum[i]);
    }
}

void add_score(Game box[],int size){
    printf("cccc");
    //そのフレームのスコア計算
    for(int i=0;i<size;i++){
        sum[i]=box[i].score[0]+box[i].score[1]+box[i].score[2];
    }

    //前のフレームのスコアを足させて合計点を出力
    for(int i=1;i<size;i++){
        sum[i]=sum[i]+sum[i-1];
    }
}

void outputscore(Game box[],int size){
    printf("aaaa");
    if((fp = fopen("ffasf.txt","w"))==NULL)
    {
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    for(int i=1;i<size;i++){
        fprintf(fp,"%d",sum[i]);
    }
    fclose(fp);
}
