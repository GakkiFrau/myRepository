#include <stdio.h>
/**
 *@brief the usage of #define. Individual brackets() and number
 * replace
 * when the negative float ualue is decimals, let it add non-float value
 * they are all goning to subtract 1
**/


#define SQR(x) x*x
#define SQR1(x) (x)*(x)
#define SQR2(x) ((x)\
*(x))

#define SQR3(x) printf("The square of x is %d\n",((x)*(x)))
#define SQR4(x) printf("The square of "#x" is %d\n",((x)*(x)))

int main()
{
    int a = SQR(5+1);
    int b = SQR1(5*3)*SQR1(5*3);
    int c = SQR2(5*3)*SQR2(5*3);
    
    printf("%d\n",a);   // 11   5+1*5+1
    printf("%d\n",b);   // 50625  (5*3)*(5*3)
    printf("%d\n",c);   // 50625
    printf("///////\n");
    SQR3(8);        //The square of x is 64
    SQR4(8);        //The square of 8 is 64

    float a1 = -0.0453;
   // float a11 = -2.0453;
    float a2 = 0.00001;
    unsigned int b1 = 100;
    int b11 = 1000;
    float b111 = 10000;
    unsigned int b2 = 100;
    b1 = b1+a1;
    b1 += a1;
    b11 = b11 + a1;
    b11 += a1;
    b111 = b111 + a1;
    b111 += a1;
    b2 += a2;
    b2 = b2+a2;
    printf("%u\n",b1);         // 98
    printf("%d\n",b11);         // 998
    printf("%f\n",b111);        // 9999.910156
    printf("%d\n",b2);          //100

}
