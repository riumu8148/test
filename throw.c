#include "game.h"

extern FILE *fp;
extern Game box[8];
char charscore[1024];

void throw(char *inputfile)
{
    int i = 0;

    if ((fp = fopen(inputfile, "r")) == NULL)
    {
        printf("読み込みファイルなし");
        exit(1);
    }
    while (fgets(charscore, sizeof(charscore), fp) != NULL)
    {
        int j = 0;
        char *check = strtok(charscore, ',');
        while (check != NULL)
        {
            box[i].score[j] = atoi(check);
            box[i].frame = atoi(i);
            strtok(NULL, ',');
            j++;
        }
        i++;
    }
    fclose(fp);
}