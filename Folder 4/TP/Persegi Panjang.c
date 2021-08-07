#include<stdio.h>

void main()
{
	int i,j,baris,kolom;
	printf("====PROGRAM PERSEGI PANJANG====\n\n");
	printf("----INPUT----\n\n");
	printf("Jumlah Panjang Ke Samping : "); scanf("%d",&baris);
	printf("Jumlah Panjang ke Bawah : ");scanf("%d",&kolom);
	
	printf("\n\n----OUTPUT----\n\n");
	for(j=0;j<kolom;j++)
	{
		for(i=0;i<baris;i++)
			{
			printf("+");
			}
		printf("\n");
	}
	printf("\n\n----SELESAI----\n\n");
	printf("\nTerima Kasih\n\n");
}
