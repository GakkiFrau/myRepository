#include <stdio.h>
#include <stdlib.h>

/**
 * @brief input the name then say welcome to them
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc,char *argv[])
{
    char first[20];
    char last[20];

    // prompt user input the first name and last name
    printf("please input the first name:\n");
    scanf("%s",&first);
 
    printf("please input the last name:\n");
    scanf("%s",&last);

    printf("hello %s %s\n",first,last);
   // free(first);
  //  free(last);

}

