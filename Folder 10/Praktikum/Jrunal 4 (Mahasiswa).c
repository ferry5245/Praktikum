#include<stdio.h>

struct data{
	char nama[99],nim[99],kelas[99];
}d;

void main()
{
	int n,i;
	FILE *f_data;
	printf("====DATA MAHASISWA====\n");
	f_data=fopen("Data.txt","wb");
	printf("Masukkan Jumlah Mahasiswa : ");scanf("%d",&n);getchar();
	printf("\n\t---INPUT---\n");
	for(i=0;i<n;i++)
	{
		printf("\nMahasiswa ke-%d\n",i+1);
		printf("Nama\t: ");gets(d.nama);
		printf("NIM\t: ");gets(d.nim);
		printf("Kelas\t: ");gets(d.kelas);
		fwrite(&d,sizeof(d),1,f_data);
	}
	
	f_data=fopen("Data.txt","rb");
	printf("\n\t---OUTPUT---\n");
	while(fread(&d,sizeof(d),1,f_data)==1)
	{
		i=0;
		printf("\nMahasiswa ke-%d\n",i+1);
		printf("Nama\t: %s\n",d.nama);
		printf("NIM\t: %s\n",d.nim);
		printf("Kelas\t: %s\n",d.kelas);
	}
	fclose(f_data);
}
