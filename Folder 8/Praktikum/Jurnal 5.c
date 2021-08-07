#include<stdio.h>
#include<string.h>

struct buku{
	char judul[99];
	char genre[99];
	char rak[99];
}a[99];

void main()
{
	int n,i;
	char X[99];
	printf("Masukkan Jumlah Buku : ");scanf("%d",&n);getchar();
	for(i=0;i<n;i++) 
	{
		printf("Buku ke-%d\n",i+1);
		printf("Judul Buku\t: ");gets(a[i].judul);
		printf("Genre Buku\t: ");gets(a[i].genre);
		printf("Nomor Rak\t: ");gets(a[i].rak);
	}
	printf("Judul Buku yang Dicari : ");gets(X);
	i=0;
	while(i<n && strcmp(a[i].judul,X)!=0) i++;
	if(strcmp(a[i].judul,X)==0) 
	{
		printf("Buku %s Merupakan Buku ke-%d",a[i].judul,i+1);
		printf("\nJudul Buku\t: %s",a[i].judul);
		printf("\nGenre Buku\t: %s",a[i].genre);
		printf("\nNomor Rak\t: %s",a[i].rak);
	}
	else printf("Buku Tidak Terdaftar\n\n");
}
