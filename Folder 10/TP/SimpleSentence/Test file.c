#include<stdio.h>
char word[99];

int main()
{
	printf("===BASIC SEQUENTIAL PROGRAM====\n\n");
	FILE *f_teks;
	printf("\t---INPUT---\n\n");
	f_teks = fopen("klmt.txt","w");
	printf("Masukkan Kalimat : \n");gets(word);
	fprintf(f_teks,"%s\n",word);
	fclose(f_teks);
	
	f_teks = fopen("klmt.txt","r");
	printf("\n\t---OUTPUT---\n");
	while(fgets(word,sizeof(word),f_teks)!=NULL)
	printf("\n%s",word);
	fclose(f_teks);
	return 0;
}
