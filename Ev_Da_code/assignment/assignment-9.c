#include <stdio.h>

/**
 * @brief use the param of main function input the first and the last name
 * and check  for the arguments' sum is right.
 * @param argc the count of argument
 * @param argv the count of argument 
 * 
 */

int main(int argc,char *argv[])
{
    //scanf("%s",argv[1]);
    //scanf("%s",argv[2]);

    

   // return 0;
   if(argc >3 || argc <3){
       printf("usage: ./assignment firstname lastname\n");
   }
   else{
        printf("welcome to %s and %s\n",argv[1],argv[2]);
   }

}