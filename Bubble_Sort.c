#include<stdio.h>
void main()
{
	int i,temp,j,arr[5]={8,7,6,5,2};
	
	for(i=5;i>0;i--)
	{
		for(j=0;j<i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(j=0;j<5;j++)
	{
		printf("%d",arr[j]);
	}
}
