//to find area and perimeter of a circle

#include<stdio.h>

float circle(float *,float *,float *);

main()
{
	float r,a,p;
	printf("enter the radius of the circle\n ");
	scanf("%f",&r);
	circle(&r,&a,&p);
	printf("the area and perimeter of the circle are %f and %f resptly",a,p);
}
float circle(float *r,float *a,float *p)
{
	*a=3.14**r**r;
	*p=2*3.14**r;
}
