#include <stdio.h>
#include <math.h>

/**
 * @brief caculate the quadratic formula 
 * 
 * @return int 
 */

int main()
{
    // initialize vars and get their values
    float a,b,c,x;
    float solution1,solution2;
    printf("Enter the value of variable \'A\':");
    scanf("%f",&a);
    printf("Enter the value of variable \'B\':");
    scanf("%f",&b);
    printf("Enter the value of variable \'C\':");
    scanf("%f",&c);

    solution1 = (-b + sqrt((b*b)- (4*a*c)))/(2*a);
    solution2 = (-b - sqrt((b*b) - (4*a*c)))/(2*a);

    if(((a*(solution1 * solution1)) + (b*solution1) + c) == 0 ){
        printf("The soulution using the '+' operator is : %f\n",solution1);
    } 
    else{
        printf("The soulution using the '+' operator is : %.3f,but you might want to double-check that...\n ",solution1);
    }
    if(((a*(solution2 * solution2)) + (b*solution2) + c) == 0 ){
        printf("The soulution using the '+' operator is : %f\n",solution2);
    } 
    else{
        printf("The soulution using the '+' operator is : %.3f,but you might want to double-check that...\n ",solution2);
    }
}

