#include<stdio.h>

struct{
	char nama[99];
	char alamat[99];
	char gejala[99];	
}a[99];
int main()
{
	int i,n;
	printf("Masukkan Jumlah Pasien : "); scanf("%d", &n);getchar();
	printf("\n====INPUT PASIEN====\n\n");
	for (i=0;i<n;i++)
	{
		printf("----Pasien %d----\n\n", i+1);
		printf("Nama Pasien\t: "); gets(a[i].nama);
		printf("Alamat Pasien\t: ");gets(a[i].alamat);
		printf("Gejala Pasien\t: ");gets(a[i].gejala);
	}
	printf("\n\n====OUTPUT PASIEN====\n\n");
	for(i=0;i<n;i++)
	{
		printf("----Pasien %d----\n\n", i+1);
		printf("Nama Pasien\t: %s\n",a[i].nama);
		printf("Nama Alamat\t: %s\n",a[i].alamat);
		printf("Nama Gejala\t: %s\n",a[i].gejala);
	}
	return 0;
}
