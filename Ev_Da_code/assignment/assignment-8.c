#include <stdio.h>

/**
 * @brief ask the user input the number and the range is form 1 to 500
 * then tell it is in the range of which range.
 * 
 * @return int 
 */

int main()
{
    float number;
    printf("Enter the number : \n");
    scanf("%f",&number);

    if(number){
        if(number >= 1 && number <=100){
            printf("%.0f is between [1,100]\n",number);
        }
        if(number >= 101 && number <=200){
            printf("%.0f is between [101,200]\n",number);
        }
         if(number >= 201 && number <=300){
            printf("%.0f is between [201,300]\n",number);
        }
         if(number >= 301 && number <=400){
            printf("%.0f is between [301,400]\n",number);
        }
         if(number >= 401 && number <=500){
            printf("%.0f is between [401,500]\n",number);
        }
    }
    else{
        printf("the number is %.0f\n",number);
    }


}