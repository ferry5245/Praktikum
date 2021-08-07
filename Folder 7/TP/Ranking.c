#include<stdio.h>
#include<string.h>

struct data{
	char nama[99];
	int nilai;
}a[99],z;

int main()
{
	int i,j,n;
	printf("Masukkan Jumlah Data : "); scanf("%d",&n);getchar();
	printf("\n");
	
	for(i=0;i<=n-1;i++)
	{
		printf("Data ke-%d\n",i+1);
		printf("Nama\t: ");gets(a[i].nama);
		printf("Nilai\t: ");scanf("%d",&a[i].nilai);getchar();
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	for(j=1;j<=i;j++)
	{
		if(a[j-1].nilai>a[j].nilai)
		{
			z=a[j-1];
			a[j-1]=a[j];
			a[j]=z;
		}
	}
	printf("\n\n====OUTPUT====\n\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d. %s\n",i+1,a[i].nama);
	}
}
