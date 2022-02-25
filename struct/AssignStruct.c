#include <stdio.h>
#include <math.h>

#define SUM(a,b) \
    (a+b)

void sum(void){
    printf("%d\n",SUM(3,4));
}

void (*func[1])(void);      //函数指针数组
void (*func1)(void);        //函数指针



typedef unsigned char uint8_t;
typedef struct 
{
    int lesson1;
    int lesson2;
}HEL;

int main()
{   
    HEL hel={
        .lesson1 = 8,
        .lesson2 = 4,
        // 8,4
    };
  // struct AI hel = {4,2};
 //  HEL hel ;
  
    // hel.LESSON1 = 3;
    // hel.LESSON2 = 4;
    printf("%d\n",hel.lesson1);
    printf("%d\n",hel.lesson2);

    printf("%d\n",sizeof(HEL));

    //CODE(4);
    printf("%d\n",SUM(8,1));
    sum();

    func[0] = sum;
    func[0]();

    func1 = sum;
    func1();

    return 0;
}