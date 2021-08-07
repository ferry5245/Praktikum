#include<stdio.h>
#include<string.h>

struct KTP{
	char NIK[99],nama[99],ttl[99];
}dat;

void main()
{
	int i,n;
	printf("============================\n");
	printf("=====PROGRAM INPUT DATA=====\n");
	printf("============================\n");
	//FILE WRITING//
	FILE *f_data;
	printf("\t---INPUT---\n\n");
	f_data = fopen("KTP.txt","wb");
	printf("Jumlah Penduduk : ");scanf("%d",&n);getchar();
	for(i=0;i<n;i++)
	{
		printf("\nData Penduduk %d\n",i+1);
		printf("NIK\t: ");gets(dat.NIK);
		printf("Nama\t: ");gets(dat.nama);
		printf("TTL\t: ");gets(dat.ttl);
		fwrite(&dat,sizeof(dat),1,f_data);
	}
	fclose(f_data);
	//FILE READING//
	f_data = fopen("KTP.txt","rb");i=1;
	printf("\n\t---OUTPUT---\n\n");
	while(fread(&dat,sizeof(dat),1,f_data)==1)
	{
		printf("Data Penduduk %d",i);i++;
		printf("\nNIK\t: %s\n",dat.NIK);
		printf("Nama\t: %s\n",dat.nama);
		printf("TTL\t: %s\n\n",dat.ttl);
	}
	fclose(f_data);
}
