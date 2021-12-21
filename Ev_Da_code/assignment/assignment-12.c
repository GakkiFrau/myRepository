#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(void)
{
    // setting upper and lower range(1= heads,2=tails)
    int lower,upper;
    lower = 1;
    upper = 2;
    // initializing randomization 
    srand(time(0));

    // find out how many times to flip coni
    int count;
    printf("How many times would you like to flip the coin?\n");
    scanf("%d",&count);

    // flip coin and track resules 
    int i,result;
    int heads = 0;
    int tails = 0;

    for(i = 0;i<count;i++){
        result = rand()%(upper - lower+1)+lower;
        if(result == 1){
            heads++;
        }
        else if(result == 2){
            tails++;
        }
    }

    printf("after flipping the coin %d times,the results were\n%d heads \n%d tails\n",count,heads,tails);

}