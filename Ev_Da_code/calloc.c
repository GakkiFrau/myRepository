#include <stdio.h>
#include <stdlib.h>
/*
 * learn and use calloc() function
 * @prototype: void *callod(size_t num,size_t size);
 * @argument num is have size length continuous sapce.the size*num is the space size
 * @return is a void * 
*/

int main()
{
    int n;
    printf("please input the nums: \n");
    scanf("%d",&n);

    int *space = (int *)calloc(n,sizeof(int));
    if(space == NULL) exit(1);
    for(int i =0 ;i<n;i++){

        printf("please input the %d number\n",i);
        scanf("%d",&space[i]);

    }
    for(int i = 0;i<n;i++)printf("%d\t",space[i]);

    free(space);
    system("pause");
    return 0;

}