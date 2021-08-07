#include<stdio.h>

int main()
{
	int a,b,i,n,Sn;
	printf("Masukkan Nilai Awal : "); scanf("%d", &a);
	printf("Masukkan Beda Nilai : "); scanf("%d", &b);
	printf("Panjang Deret : "); scanf("%d", &n);
	
	printf("====HASIL====\n");
	i=1;
	while(i<=n)
	{
		printf("%d ",a);
		i++;
		Sn=a+Sn;
		a=a+b;
	}
	printf("\nJumlah Deret adalah %d",Sn-1);
	return 0;
}
