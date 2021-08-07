#include<stdio.h>
int input(int a,int y);
int output(int b,int z); 

struct data{
	char nama[99];
	char nim[99];
	char nilai[99];
}data[99];

int main()
{
	int n,i=0,in,out;
	printf("====PROGRAM DATA MAHASISWA====\n\n");
	printf("Masukkan Jumlah Data : ");scanf("%d",&n);getchar();
	printf("\n\t---INPUT---\n");
	in=input(n,i);
	printf("\n\t---OUTPUT---\n");
	out=output(n,i);
	return 0;
}

int input(int a,int y)
{
	if(a==0) return 1;
	else if(a>0)
	{
		printf("\nMahasiswa ke-%d\n",y+1);
		printf("Nama\t: ");gets(data[y].nama);
		printf("NIM\t: ");gets(data[y].nim);
		printf("Nilai\t: ");gets(data[y].nilai);
	}
	return input(a-1,y+1);
}

int output(int b,int z)
{
	if (b==0) return 1;
	else if(b>0)
	{
		printf("\nMahasiswa ke-%d\n",z+1);
		printf("Nama\t: %s \n",data[z].nama);
		printf("NIM\t: %s \n",data[z].nim);
		printf("Nilai\t: %s \n",data[z].nilai);
	}
	return output(b-1,z+1);
}
