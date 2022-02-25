#include <stdio.h>

/**
 * @brief  函数指针数组的指针（拆分，重组）
 * 是一个指针，这个指针指向一个数组，数组里面存放的是指向函数的指针
 * char * (*(*pf)[3])(char * p);
 * pf指针指向拥有三个元素的一个数组，这个数组里面存放的是指向函数的指针；
 * 这些指针指向一些返回值类型为指向字符型的指针，参数为一个指向字符型的指针
 * 的函数。
 */

char * fun1(char * p)
{
   printf("%s\n",p);
   return p;
}
char * fun2(char * p)
{
   printf("%s\n",p);
   return p;
}
char * fun3(char * p)
{
   printf("%s\n",p);
   return p;
}
int main(){
   char * (*a[3])(char * p);
   char * (*(*pf)[3])(char * p);
   pf = &a;
   a[0] = fun1;
   a[1] = &fun2;
   a[2] = &fun3;
   pf[0][0]("fun1");
   pf[0][1]("fun2");
   pf[0][2]("fun3");
   return 0;
}