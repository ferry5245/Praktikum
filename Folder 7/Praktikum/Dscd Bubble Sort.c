#include<stdio.h>
void main()
{
	int data[100];
	int n,i,j,temp;
	printf("==========DESCENDING SORT PROGRAM==========\n\n");
	printf("Masukkan Jumlah Data : ");scanf("%d",&n);
	printf("\n---INPUT---\n");
	for(i=0;i<n;i++)
	{
		printf("Masukkan Data ke-%d : ",i+1);
		scanf("%d",&data[i]);
	}
	printf("\n\n---OUTPUT---\n");
	printf("\n====OLD DATA====\n");
	for(i=0;i<n;i++)
	{
		printf("%d. %d\n",i+1,data[i]);
	}
	for(i=n-1;i>=0;i--)
	for(j=0;j<i;j++)
	{
		if(data[j]<data[j+1])
		{
			temp=data[j];
			data[j]=data[j+1];
			data[j+1]=temp;
		}
	}
	printf("\n\n====SORTED LIST====\n");
	for(i=0;i<n;i++)
	{
		printf("%d.%d\n",i+1,data[i]);
	}
}
