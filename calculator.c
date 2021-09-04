//fn to make a calculator

#include<stdio.h>

float add(float,float);
float sub(float,float);
float multi(float,float);
float div(float,float);

main()
{
	float a,b,d;
	char c;
	printf("what operation wouuld you like to carry out\n type '+' for addition, '-' for substraction, '*' for multilication, '/'for division\n");
	scanf(" %c",&c);
	printf("enter any two no for the above operation to be carried out\n");
	scanf("%f%f",&a,&b);
	switch(c)
	{
		case '+':
		d=add(a,b);
		break;
		case '-':
		d=sub(a,b);
		break;
		case '*':
		d=multi(a,b);
		break;
		case '/':
		d=div(a,b);
	}
	printf("the answer is %f",d);
}
float add(float a,float b)
{
	return(a+b);
}
float sub(float a,float b)
{
	return(a-b);
}
float multi(float a,float b)
{
	return(a*b);
}
float div(float a,float b)
{
	return(a/b);
}
