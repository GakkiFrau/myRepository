#include <stdio.h>
#include <stdlib.h>


/**
 * @brief write a cocktail sort. it is bubble sort's variant. the first time compare form
 * beginning to end.the second time form end to beginning, and so on...
 */

/**
 * @brief the function is to swap two number
 * 
 * @param a the fist number of swap
 * @param b the second number of swap
 */
void swap(int *a,int *b)
{
    int t = 0;
    t = *a;
    *a = *b;
    *b = t;
}

/**
 * @brief the function is cocktail sort 
 * 
 * @param a array name
 * @param len array length
 */

void cocktail(int a[],int len)
{
    int top = len-1;
    int botton = 0;
    int i,j;
    char SWITCH = 1;
    
    while(SWITCH){
        SWITCH = 0;
        for(i = botton;i<top;i++){
            if(a[i] > a[i+1]){
                swap(&a[i],&a[i+1]);
                SWITCH = 1;
            }
        }
        top = top -1;
        for(i = top;i>botton;i--){
            if(a[i] < a[i-1])
            {
                swap(&a[i],&a[i-1]);
                SWITCH = 1;
            }
        }
        botton = botton +1;
       
    }

}

/**
 * @brief 
 * 
 * @return int 
 */
void printArray(int array[],int len)
{
    int i = 0;
    for(i = 0;i<len;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {10,8,4,5,6,1,7,3,2,9};
    int len = sizeof(array)/sizeof(array[0]);

    printArray(array,len);
    cocktail(array,len);
    printArray(array,len);

    return 0;
}