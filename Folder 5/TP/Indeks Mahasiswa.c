//Nilai A :  80 - 100 / Nilai B : 70 - 79 / Nilai C : 60 - 69 / Nilai D : 50 - 59 Nilai / E : 0 – 49 //
#include<stdio.h>
void indeks(int i)
{
	if(i>=80&&i<=100)
	{
		printf("A\n");
	}
	else if(i>=70&&i<80)
	{
		printf("B\n");
	}
	else if(i>=60&&i<70)
	{
		printf("C\n");
	}
	else if(i>=50&&i<60)
	{
		printf("D\n");
	}
	else if(i>=0&&i<50)
	{
		printf("E\n");
	}
	else printf("INVALID\n");
}

void main()
{
	int x;
	printf("=========PENAMPIL INDEKS NILAI MAHASISWA=========\n\n");
	printf("----INPUT----\n");
	printf("Masukkan Nilai : "); scanf("%d", &x);
	printf("\n\n----OUTPUT----\n");
	printf("INDEKS ", x);
	indeks(x);
}
