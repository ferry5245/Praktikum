#include<stdio.h>
#include<string.h>
int main()
{
	char kode[3];
	printf("Jadwal Piket Asisten Daskom\n");
	printf("    *Kode Asisten harus huruf kapital\n\n");
	printf("Kode Asisten : "); scanf("%s", &kode);
	
	if(strcmp(kode,"FLY")==0)
		{
			printf("\nPiket FLY adalah hari Senin\n");
		}
	else if(strcmp(kode,"NOO")==0)
		{
			printf("\nPiket NOO adalah hari Selasa\n");
		}
	else if(strcmp(kode,"AMF")==0)
		{
			printf("\nPiket AMF adalah hari Rabu\n");
		}
	else if(strcmp(kode,"HNA")==0)
		{
			printf("\nPiket HNA adalah hari Kamis\n");
		}
	else if(strcmp(kode,"IZZ")==0)
		{
			printf("\nPiket IZZ adalah hari Jumat\n");
		}
	else if(strcmp(kode,"RAQ")==0)
		{
			printf("\nPiket RAQ adalah hari Sabtu\n");
		}
	else printf("\nMaaf, Kode Asisten tidak dikenal\n");
	
	return 0;
}
//	a=FLY; b=NOO; c=AMF; d=HNA; e=IZZ; f=RAQ;//
