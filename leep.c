#include<stdio.h>
int main()
{
	int a,leep;
	printf("Enter the year\n");
	scanf("%d",&a);
	if((a%4==0)&&(a%100!=0)||(a%400==0))
	printf("leep year",leep);
	else
	printf("Not leep year");
	return 0;	
}
