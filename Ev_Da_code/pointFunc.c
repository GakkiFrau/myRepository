#include <stdio.h>

/**
 * @brief descripe the function pointer. 
 * they can use to structures and typedef
 */
typedef void (*itoc)(int a);

struct FUNCTION{
    int value;
    int (*func)(int a,int b);
}FUNC;

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a>b?a-b:b-a;
}

void change(int a){
   
    if(a>='a' && a<= 'z'){
        printf("%c\n",a-32);
    }
    else 
        printf("%c\n",a+32);
}

int main(int argc,char *argv[])
{
    //printf("%d\n%d\n",add(4,2),sub(2,4));         // check the function is valid

    FUNC.func = add;
    FUNC.value = FUNC.func(4,2);
    printf("the add(4,2) = %d\n",FUNC.value);
    FUNC.func = &sub;
    FUNC.value = FUNC.func(3,8);
    printf("the sub(3,8) = %d\n",FUNC.value);

    itoc func1 = &change;
    func1(97);

}