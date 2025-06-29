#include<stdio.h>
#include<stdlib.h>
#include"throw.h"

void throw_darts(int argc,char *argv[]){
    FILE *fp;
    if((fp=fopen(argv[1],'r'))==NULL){
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    fclose(fp);
    return 0;
}
