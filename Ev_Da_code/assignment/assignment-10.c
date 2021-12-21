#include <stdio.h>

/**
 * @brief create an integer array with 10 integers and then print
 *  the number of elements in the array to the terminal.
 * 
 */

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(array)/sizeof(array[0]);
    for(int i = 0;i<len;i++){
        printf("%d\t",array[i]);

    }
    printf("\nThe array has %d elements.\n",len);
    return 0;
    
}