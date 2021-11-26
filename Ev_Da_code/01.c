#include <stdio.h>
#include <stdlib.h>
/*
 * @argument nums is array,numsSize is the length of nums,target is to find numbers
 * that they in array and they sum is target,returnSize is the length of return
 * @return is pointer(*)  and point to int type
*/

// 定义 循环变量 i，j，
// use calloc()function open the space for int *ret variable
// for cycle form i=0 to numsSize , int key = target - nums[i];
// for cycle form i+1 to numsSize, if num[j] == key; ret[0] = i,ret[1] = j;
// return ret;


int *twoSum(int *nums,int numsSize,int target,int *returnSize){
    int i,j;
    int *ret = calloc(2,sizeof(int));

    for(i = 0;i<numsSize;i++){
        int key = target - nums[i];
        for(j = i+1;j<numsSize;j++){
            if(nums[j] == key){
                ret[0] = i;
                ret[1] = j;
            }
        }
    }
    *returnSize = 2;
    return ret;
}

int main()
{
    int nums[] = {3,2,4};
    int returnSize;
    int *ret = twoSum(nums,3,5,&returnSize);
    printf("%d %d\n",ret[0],ret[1]);
    printf("%d\n",returnSize);

}