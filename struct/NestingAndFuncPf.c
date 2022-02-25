#include <stdio.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

typedef struct
{
    uint8_t             row;
    uint8_t             col;
  
} kscan_Key_t;

typedef struct{
    uint32_t keys;
    kscan_Key_t nums;
     
} key_Evt;

kscan_Key_t fun1(int a, int b)
{
    kscan_Key_t key;
    key.row = a;
    key.col = b;
    return key;
}

kscan_Key_t fun2(int a, int b)
{
    kscan_Key_t key;
    key.row = a+b;
    key.col = a*b;
    return key;
}

int main()
{
    printf("sizeof = %d\n",sizeof(key_Evt));

    kscan_Key_t (*pf[2])(int,int);          // 函数指针数组
    //   kscan_Key_t (*(*pf1)[2])(int,int);      // 函数指针数组指针
 
    pf[0] = fun1;                           // 函数指针赋值给函数指针数组
    pf[1] = fun2;                           // 函数指针赋值给函数指针数组
    
    // pf1 = &pf;                              // 函数指针数组赋值给指针   
    // kscan_Key_t key=  pf1[0][0](1,2);;      //调用函数指针数组指针
    // kscan_Key_t key1= pf1[0][1](2,3);;      //调用函数指针数组指针

    //kscan_Key_t key= fun1(4,6);
    kscan_Key_t key= pf[0](4,6);
    kscan_Key_t key1= pf[1](4,6);

    printf("%d\n",key.row);
    printf("%d\n",key.col);
    printf("%d\n",key1.row);
    printf("%d\n",key1.col);

    return 0;
}

















 