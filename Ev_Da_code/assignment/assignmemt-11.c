#include <stdio.h>
#include <string.h>

/**
 * @brief ask the user input their scores and the max count is 8. I will print the average
 * of the socres.
 * 
 * @return int 
 */


int main()
{
    float datascore[10];
    int i = 0;
    char ch;
    float sum = 0,average = 0;
    
    while(1){
        printf("please input your score: \n");
        scanf("%f",&datascore[i++]);
        getchar();
point:        
        printf("would you like to continue? press Y/N\n");
        scanf("%c",&ch);
        if(ch == 'N' || i == 8){
            break;
        }
        else if(ch == 'Y'){
            continue;
        }
        else{
           goto point;
        }
    }
    for(int j = 0;j<i;j++){
        sum +=datascore[j]; 
    }
    printf("average = %f\n",sum/(i));

    return 0;
}
