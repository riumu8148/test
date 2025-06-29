#include<stdio.h>
#include<stdlib.h>
#include"throw.h"

void throw_darts(char *argv[]){

    if((fp=fopen(argv[1],'r'))==NULL){
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    return 0;
    
}
