#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INIT_CAPCITY 3

int main(void)
{
    char answer[] = "y";
    int capcity = INIT_CAPCITY;
    double *score = malloc(INIT_CAPCITY * sizeof(double));

    if(!score){
        fprintf(stderr,"Failed to allocate socres array.\n");
        return 1;
    }

    int numscores;

    for(numscores = 0;strcmp(answer,"y") == 0;++numscores){
        if(numscores == capcity){
            capcity *= 2;
            score = realloc(score,capcity*sizeof(double));
            if(!score){
                fprintf(stderr,"Failed to allocate scores array.\n");
                return 1;
            }
        }
        printf("Enter a test score:");
        scanf("%lf",&score[numscores]);

        printf("Would you like to continue?y/n");
        scanf("%s",&answer);
    }

    double sum = 0;
    for(int loop = 0; loop <numscores;loop++){
        sum += score[loop];
    }

    printf("%.2f is the average.\n",sum/numscores);

    free(score);

    return 0;

}


