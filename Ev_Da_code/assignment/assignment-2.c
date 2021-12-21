#include <stdio.h>

/**
 * @brief use the program printf various type of data,such as char int float array
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc,char *argv[])
{
    char ca = 'b';
    int ia = 4;
    float fa = 3.1415926;
    char sa[] = "hello world!";

    printf("ca = %c     it is a char\n",ca);
    printf("ia = %d     it is a integer\n",ia);
    printf("fa = %f     it is a float\n",fa);
    printf("sa = %s     it is a string\n",sa);

   // printf("%d\n",sizeof(sa));        13

}