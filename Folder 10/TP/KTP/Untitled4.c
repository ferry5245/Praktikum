#include<stdio.h>
#include<string.h>

struct KTP{
	char NIK[99],nama[99],ttl[99];
}dat;

FILE *f_asli;
FILE *f_cdgn;

void main()
{
	int i=1;
	char del[99];
	f_asli=fopen("KTP.txt","rb");
	f_cdgn=fopen("KTP(cdgn).dat","wb");
	
	//PROSES PENGHAPUSAN//
	printf("================================\n");
	printf("=====PROGRAM MENGHAPUS DATA=====\n");
	printf("================================\n\n");
	
	printf("Masukkan NIK untuk Dihapus : ");gets(del);
	while(fread(&dat,sizeof(dat),1,f_asli)==1)
	{
		if(strcmp(dat.NIK,del)!=0)
		{
			fwrite(&dat,sizeof(dat),1,f_cdgn);
		}
	}
	
	fclose(f_asli);
	fclose(f_cdgn);
	
	remove("KTP.txt");
	rename("KTP(cdgn).dat","KTP.txt");
	
	//PENAMPILAN FILE//
	f_asli = fopen("KTP.txt","rb");
	printf("\n\t--UPDATED FILE---\n\n");
	while(fread(&dat,sizeof(dat),1,f_asli)==1)
	{
		printf("Data Penduduk %d",i);i++;
		printf("\nNIK\t: %s\n",dat.NIK);
		printf("Nama\t: %s\n",dat.nama);
		printf("TTL\t: %s\n\n",dat.ttl);
	}
	fclose(f_asli);
}
