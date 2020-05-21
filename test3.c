#include<stdio.h>

	int main()
{
	char a,b,c,d,e;
	int avg;
	scanf("%c %c %c %c %c",&a,&b,&c,&d,&e);

	int sum=(a+b+c+d+e);
	printf("%d ",sum);
	avg = sum/5;
	if(sum%5 == 0)
	{
		printf("%d ",avg);
		printf("%c ",avg);}
	else
	{
		printf("%d ",avg+1);
		printf("%c ",avg+1);
}
}