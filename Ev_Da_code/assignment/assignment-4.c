#include <stdio.h>

#define PIE 3.14
/**
 * @brief input the radius of circle and caculate its areas
 * 
 * @return int 
 */

int main()
{
    float radius;
    float areas = 0;
    printf("please input the radius of circle: \n");
    scanf("%f",&radius);

    printf("%f\n",radius);

    areas = PIE * radius * radius;
    
    printf("the areas of circle is %f\n",areas);



}