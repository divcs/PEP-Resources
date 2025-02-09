#include <stdio.h>

void f1(int, int);

void main()
{
 int a = 5,
     b = a;
 f1(a = a + 1, b = a + 1);
}

void f1(int a, int b)

{
 printf("%d,%d", a, b);
}

// 06, 7

//     05,
//     6

//     06,
//     6

// None