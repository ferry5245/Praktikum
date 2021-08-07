#include <stdio.h>
#include <string.h>

int main()
{
	char user[50], pass[50];
	printf("\t===LOGIN STATE===");
	printf("\nMasukkan Username \t: "); gets(user);
	printf("\nMasukkan Password \t: "); gets(pass);
	
	if(strcmp(user, "adminkece")==0 && strcmp(pass, "daskomLAB1")==0) //Lengkapi sintaksnya
	{
		printf("\nLogin Berhasil");
		printf("\nSilahkan Lanjutkan...\n");
	}
	else
	{
	printf("\nUsername atau password salah!\n");
	printf("Silahkan Ulang");
	}	
	return 0;
}
