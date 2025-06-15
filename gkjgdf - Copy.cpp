#include<stdio.h>
int main()
{
	float p;
	printf("Enter percentage:");
	scanf("%f", &p);
	if (p>=80 && p<=100);
	printf("Distinction");
	else if (p>=60 && p<80)
	{
	printf ("frist");
}
	else if (p>=50 && p<60)
	{
	printf ("second");
	}
	else if (p>=40 && p<50)
	{	
	printf("third");
	}
	else
	{
	printf("fail");
}
	return 0;
	
}
