#include <stdio.h>

#include <stdlib.h>

// deklarasi prosedur

void faktor_bilangan(int angka);

// program

int main()

{

	int angka;

	printf("Masukkan angka yang akan difaktorkan : "); scanf("%d",&angka);
	
	printf("Faktor dari %d yaitu ",angka); faktor_bilangan(angka);
	
	puts("");
	
	return 0;
	
}

// prosedur

void faktor_bilangan(int angka)

{

	int x;
	
	for(x=1;x<=angka;x++)
	{
	if(angka%x==0)
		{
			printf("%d ",x);
		}
	}
}
