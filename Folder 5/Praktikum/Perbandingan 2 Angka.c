//Program membandingkan 2 angka
#include <stdio.h>
#include <stdlib.h>

void bil(int a, int b) //Tentukan tipe data untuk fungsinya
{
	if(a>b)
	printf("Bilangan %d lebih besar daripada bilangan %d", a,b); //Tentukan variabelnya
	else if(a<b)
	printf("Bilangan %d lebih kecil daripada bilangan %d", a,b);
	else 
	printf("Bilangan %d senilai dengan bilangan %d", a,b);
}

int main()
{
	int x,y;
	printf("Masukkan bilangan pertama : "); scanf("%d", &x);
	printf("Masukkan bilangan kedua : "); scanf("%d", &y);
	bil(x,y); //Tentukan fungsi dan parameter aktualnya
	
	return 0;
}

