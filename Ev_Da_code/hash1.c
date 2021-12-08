#include <stdio.h>

/**
 * @brief write a shellsort(), the function is use hasi algorithm; the array was divided into
 * several areas,then smaller and smaller steps to sort.
 * @param a 
 * @param n 
 */

void shellsort(int *a,int n)
{
    int i,j,k,t;
    k = n/2;
    while(k>0){
        for(i = k; i < n; i++){
            t = a[i];
            j = i - k;
            while(j >= 0 && t < a[j]){
                a[j+k] = a[j];
                j = j-k;
            }
            a[j+k] = t;
        }
        k /= 2;
    }
}

int main()
{
    int a[] = {8,10,3,5,7,4,6,1,9,2};
    int N;
    N = sizeof(a) / sizeof(a[0]);
    shellsort(a,N);
    for(int k = 0;k<N;k++){
        printf("a[%d] = %d\n",k,a[k]);
    }
    return 0;
}