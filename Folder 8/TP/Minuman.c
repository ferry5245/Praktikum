#include<stdio.h>
#include<string.h>

void main()
{
	char D[99][99],X[99];
	int n,i;
	printf("====PROGRAM PENCARIAN MINUMAN====\n\n");
	printf("\t----INPUT----\n\n");
	printf("Masukkan Jumlah Minuman : ");scanf("%d",&n);getchar();
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Minuman pada Gelas ke-%d : ",i+1); gets(D[i]);
	}
	printf("\n*Perhatikan huruf kapital dan penulisan kata\n");
	printf("Minuman yang Dicari : ");gets(X);
	i=0;
	while((i<n)&&(strcmp(X,D[i])!=0)) i++;
	printf("\n\t----OUTPUT----\n\n");
	if(strcmp(D[i],X)==0) printf("Minuman %s Terdapat pada Gelas ke-%d\n",X,i+1);
	else printf("Maaf Minuman Tidak Tersedia.\n");
}
