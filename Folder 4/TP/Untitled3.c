#include<stdio.h>

struct
{
	char nama[99],kelas[35],nim[35],ipk[10];
} data;
int main()
{
	int x,i;
	printf("======DATA MAHASISWA=======\n\n");
	printf("Masukkan Jumlah Mahasiswa : "); scanf("%d",&x);getchar();

	for(i=1;i<=x;++i)
	{
		printf("===INPUT %d====\n\n",i);
		printf("Nama : "); gets(data.nama); 
		printf("Kelas : "); gets(data.kelas);
		printf("NIM : "); gets(data.nim);
		printf("IPK : "); gets(data.ipk);
		
		printf("\n\n====OUTPUT %d====\n\n",i);
		printf("Nama : %s \n", data.nama);
		printf("Kelas : %s \n", data.kelas);
		printf("NIM : %s \n",data.nim);
		printf("IPK : %s \n\n", data.ipk);
	}

	
	return 0;
}
