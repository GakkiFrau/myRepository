#include <stdio.h>

/**
 * @brief the numerator and denominator. if they divide each other will equate 0, desmotrate
 * there is not a remainder, else there is a reminder. 
 * 
 * @return int 
 */

int main()
{
    int numerator,denominator;
    // prompt user input imformation
    printf("please input the numerator: \n");
    scanf("%d",&numerator);
    printf("please input the denominator: \n");
    scanf("%d",&denominator);

    if(numerator % denominator == 0){
        printf("There is NOT a remainder!\n");
    }
    else{
        printf("There is a remainder!\n");
    }
    return 0;

}