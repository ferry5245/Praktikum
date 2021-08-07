#include<stdio.h>

int main()
{
	int n,i,a[99],X;
	printf("====PROGRAM SEQUENTIAL SEARCH====\n\n");
	printf("\t---INPUT---\n\n");
	printf("Masukkan Jumlah Data : ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Masukkan Data ke-%d : ",i+1); scanf("%d",&a[i]);
	}
	printf("\nData yang Dicari : "); scanf("%d",&X);
	i=0;
	while((i<n)&&(a[i]!=X)) i++;
	printf("\n\t---OUTPUT---\n\n");
	if(a[i]==X) printf("Data %d Terdapat pada Data ke-%d\n\n",X,i+1);
	else printf("Data Tidak Ditemukan\n\n");
	return 0;
}
