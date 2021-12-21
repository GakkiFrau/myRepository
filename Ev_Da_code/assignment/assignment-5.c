#include <stdio.h>

/**
 * @brief provide seconds then show hour minuter and seconds
 * 
 * @return int 
 */

int main()
{
    float seconds;
    float hours;
    float minuters;
    float reseconds;

    //prompt user input the number of seconds
    printf("please input seconds: \n");
    scanf("%f",&seconds);

    // caculate the hours
    hours = (int)(seconds/3600);
    // caculate the minuters
    minuters = (int)((seconds- (hours*3600))/60);
    // caculate the seconds 
    reseconds = (int)(seconds - (hours*3600+minuters*60));

    printf("the %.2f(s) is %.2f hours %.2f minuters %.2f seconds\n",seconds,hours,minuters,reseconds);



}