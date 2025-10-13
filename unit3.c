#include <stdio.h>
void main()
 {//function prototype declation.
 void sub(void);
 sub();//calling function.
 }
 //function defination
 void sub(void)
 {int a,b,c;
 printf("\nentre 2 nos.");
 scanf("%d %d",&a,&b);
 c=a-b;
 printf("answer=%d",c);
 }
