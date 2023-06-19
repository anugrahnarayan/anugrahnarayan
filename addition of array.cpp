#include<stdio.h>
int main()
{
	int a[3][3]={
	{2,4,5},
	{6,5,4},
	{2,4,7}
	};
	int i,j,sum=0;
	
	//for row
	printf("\n row total:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			sum += a[i] [j];
		}
		printf("\n %d",sum);
		sum=0;
	}
	
	//for column
	printf("\n column total:\n");
	for(j=0;j<3;++j)
	{
		for(i=0;i<3;++i)
		{
			sum += a[i] [j];
		}
		
		printf("\n %d",sum);
		sum=0;
	}
	return 0;
}
