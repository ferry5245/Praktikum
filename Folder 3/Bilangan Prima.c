#include<stdio.h>

int main()
{
	int bil;
	printf("Program Penentu Bilangan Prima atau Bukan\n");
	printf("Masukkan Bilangan : \n"); scanf("%d",&bil);
	
	if (bil==1)
	{
		printf("Bilangan %d Bukan Bilangan Prima",bil);
	}
	else if(bil==2 || bil==3 || bil==5 || bil==7)
	{
		printf("Bilangan %d Merupakan Bilangan Prima", bil);
	}
	else if (bil%2==0 || bil%3==0 || bil%5==0 || bil%7==0 )
	{
		printf("Bilangan %d Bukan Bilangan Prima", bil);
	}
	else printf("Bilangan %d Merupakan Bilangan Prima", bil);
	return 0;
}

