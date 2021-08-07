#include<stdio.h>
#include<string.h>
void main()
{
	int a,i;
	printf("=====KUIS=====\n\n");
	for(i=3;i>0;i--)
	{
		printf("\nHasil dari Penjumlahan 1+1 adalah "); scanf("%d",&a);
		if(a==2)
		{
			printf("Jawaban Benar!!\n");break;
		}
		else 
		{
		printf("Jawaban Salah!!!\nSisa Kesempatan %d \n", i-1);
		}
	}
}
