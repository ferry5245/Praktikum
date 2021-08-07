#include<stdio.h>
#include<string.h>

struct data{
	char nama[99],nim[99],kelas[99];
}d;

void main()
{
	int n,i;
	char x[99];
	FILE *f_asli;
	FILE *f_cdgn;
	printf("====DATA MAHASISWA====\n");
	f_asli=fopen("Data.txt","rb");
	f_cdgn=fopen("Data(cdgn).txt","wb");
	printf("Nama yang akan Dihapus : ");gets(x);
	while(fread(&d,sizeof(d),1,f_asli)==1)
	{
		if(strcmp(d.nama,x)!=0)
		{
			fwrite(&d,sizeof(d),1,f_cdgn);
		}
	}
	fclose(f_asli);
	fclose(f_cdgn);
	
	remove("Data.txt");
	rename("Data(cdgn).txt","Data.txt");
	
	f_asli=fopen("Data.txt","rb");
	printf("\n\t---OUTPUT---\n");
	while(fread(&d,sizeof(d),1,f_asli)==1)
	{
		i=0;
		printf("\nMahasiswa ke-%d\n",i+1);
		printf("Nama\t: %s\n",d.nama);
		printf("NIM\t: %s\n",d.nim);
		printf("Kelas\t: %s\n",d.kelas);
	}
	fclose(f_asli);
}
