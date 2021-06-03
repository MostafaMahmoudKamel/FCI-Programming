
/*
Write a function to compute the distance between two points
, ??_1 (??_1,??_1 ), ??_2 (??_2,??_2)
The distance is computed using: v((??_2-??_1 )^2+(??_2-??_1 )^2 )
*/#include <stdio.h>
#include <math.h>
int main()
{
int x1,x2,y1,y2;
printf("enter x1,x2,y1,y2 value\n");
scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
int x=x2-x1;
 int _x=pow(x,2);
int y=y2-y1;
int _y=pow(y,2);
int z=_x+_y;
printf("%f",sqrt(z));
}
