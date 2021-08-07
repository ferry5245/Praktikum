//Program Faktorial
#include <stdio.h>

int faktorial(int n);
int x, hasil;

int main()
{
printf("Masukkan Sebuah Bilangan : ");
scanf("%d",&x);
hasil = faktorial(x); //lengkapi pemanggilan fungsinya
printf("Hasil Faktorial: %d", hasil);
return 0;
}

int faktorial(int n)
{
	if (n==1 || n==0)
	{
	return 1;
	} 
else if (n>1) 
	{
	return n*faktorial(n-1); //lengkapi sintaksnya
	}
}
