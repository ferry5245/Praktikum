#include<stdio.h>

void main()
{
	int n, i=1;
	printf("Program Pencari Faktor\n\n");
	printf("Silahkan Masukkan Bilangan Bulat di Bawah\n");
	printf("Masukkan Bilangan yang diinginkan : ");
	scanf("%d",&n);
	
	printf("\n\n----OUTPUT----\n\n");
	printf("Faktor dari %d adalah \n\n",n);

	do
		{
			if(n%i==0)
			{
				printf("%d ",i);
			}
			i++;
		}
	while (i<=n);
}

