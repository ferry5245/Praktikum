#include<stdio.h>

int main()
{
	int nim;//1104202092, 1 TT, 2 elektro, 3 komputer 4 itu TF 20 itu tahun//
	printf("Masukkan NIM di Bawah\n");
	printf("NIM : "); scanf("%d", &nim);
	nim/1000000;
	
	if(nim/1000000%10==4)
	{
		printf("Anda merupakan jurusan Teknik Fisika\n");
	}
	else if
	(nim/1000000%10==3)
	{
		printf("Anda merupakan jurusan Teknik Komputer\n");
	}
	else if(nim/1000000%10==2)
	{
		printf("Anda merupakan jurusan Teknik Elektro\n");
	}
	else if (nim/1000000%10==1)
	{
		printf("Anda merupakan jurusan Teknik Telekomunikasi\n");
	}
	else printf("Jurusan tidak Dikenal\n");
	return 0;
}


