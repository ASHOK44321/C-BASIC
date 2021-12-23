#include<stdio.h>
#include<math.h>
main()
{
   float x1,x2,y1,y2,d;
   printf("enter the value of x1 and x2:");
   scanf("%f%f",&x1,&x2);
   printf("enter the value of y1 and y2:");
   scanf("%f%f",&y1,&y2);
   d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   printf("distance between two points=%f",d);
}
