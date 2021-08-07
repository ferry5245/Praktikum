#include<stdio.h>
#include<string.h>

void main()
{
	char nama[99][99],x[99];
	int i,n;
	printf("====PROGRAM PENCARI NAMA MAHASISWA====\n");
	printf("\n\t----INPUT----\n");
	printf("\nMasukkan Jumlah Mahasiswa : "); scanf("%d",&n);getchar();
	for(i=0;i<n;i++)
	{
		printf("Nama Mahasiswa ke-%d : ",i+1); gets(nama[i]);
	}
	printf("\nNama yang ingin dicari : "); gets(x);
	i=0;
	while(i<n && strcmp(nama[i],x)!=0) i++;
	printf("\n\t----OUTPUT----\n\n");
	if(strcmp(nama[i],x)==0) printf("\n%s berada di Indeks ke %d\n\n",nama[i],i);
	else printf("Nama Tidak Ditemukan\n\n");
}
