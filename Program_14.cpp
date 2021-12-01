#include<stdio.h>
main()
{
 int x, y, a, b, c, d;
 printf("Enter a value for x: ");
 scanf("%d",&x);
 printf("\nEnter a value for y: ");
 scanf("%d",&y);
 a = x + y;
 b = x - y;
 c = x * y;
 d = x / y;
 printf("\nThe sum of %d and %d is: %d", x, y, a);
 printf("\nThe difference of %d and %d is: %d", x, y, b);
 printf("\nThe product of %d and %d is: %d", x, y, c);
 printf("\nThe division of %d and %d is: %d", x, y, d);
 return 0;
}
