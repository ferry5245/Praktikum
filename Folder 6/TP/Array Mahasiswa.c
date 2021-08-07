#include<stdio.h>

struct{
	char nama[100],nim[100],jurusan[100];
}a[100];
int main()
{
	int i,n;
	printf("------DATA MAHASISWA-------\n\n");
	printf("====INPUT====\n\n");
	printf("Masukkan Jumlah Mahasiswa : "); scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\nMahasiswa ke-%d\n",i+1);
		printf("Nama\t: "); fflush(stdin); gets(a[i].nama);
		printf("NIM\t: "); fflush(stdin); gets(a[i].nim);
		printf("Jurusan\t: "); fflush(stdin); gets(a[i].jurusan);
	}
	printf("\n====OUTPUT====\n\n");
	for(i=0;i<n;i++)
	{
		printf("\nMahasiswa ke-%d\n",i+1);
		printf("Nama\t: %s\n",a[i].nama);
		printf("NIM\t: %s\n",a[i].nim);
		printf("Jurusan\t: %s\n",a[i].jurusan);
	}
	return 0;
}
