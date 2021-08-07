#include<stdio.h>

int nilai[100];
int i,n,j,temp;
void main()
{
	printf("====INPUT====\n\n");
	printf("Banyak Nilai : ");scanf("%d",&n);
	
	for(i=0;i<=n-1;i++)
	{
		printf("Nilai ke-%d : ", i+1);
		scanf("%d",&nilai[i]);
	}
	
	//proses insertion sort//
	for(i=0;i<=n-1;i++)
	{
		temp=nilai[i];
		j=i;
		while((j>0)&&(temp<nilai[j-1]))
		{
			nilai[j]=nilai[j-1];
			j=j-1;
		}
	nilai[j]=temp;
	}
	
	//Menampilkan Hasil Sorting//
	printf("\n====OUTPUT====\n\n");
	for(i=0;i<=n-1;i++)
	{
		if(nilai[i]<=100&&nilai[i]>80)
		{
			printf("%d (A)\n",nilai[i]);
		}
		else if(nilai[i]<=80&&nilai[i]>70)
		{
			printf("%d (B)\n",nilai[i]);
		}
		else if(nilai[i]<=70&&nilai[i]>60)
		{
			printf("%d (C)\n",nilai[i]);
		}
		else if(nilai[i]<=60&&nilai[i]>50)
		{
			printf("%d (D)\n",nilai[i]);
		}
		else if(nilai[i]<=50&&nilai[i]>=0)
		{
			printf("%d (E)\n",nilai[i]);
		}
	}
}



