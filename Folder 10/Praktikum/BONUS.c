#include<stdio.h>

void write();
void add();
void read();

int n,i,k;
FILE *f_data;
struct data{
	char nama[99],nim[99],kelas[99];
}d[99];

void main()
{
	printf("\n\nMenu Pilihan : \n 1 : Writing\n 2 : Addition\n 3 : Reading\n\n");
	printf("Kode Input : ");scanf("%d",&k);getchar();
	switch(k)
	{
		
		case 1:
		{
			write();
		}break;
		case 2:
		{
			add();
		}break;
		case 3:
		{
			read();
		}break;
		case 99:
			remove("Data.txt");
			system("cls");main();
		default : printf("\nMenu Tidak Tersedia\n\n");
	}
}

void write()
{
	f_data=fopen("Data.txt","wb");
	printf("\n\t---INPUT---\n");
	printf("\nMasukkan Jumlah Mahasiswa : ");scanf("%d",&n);getchar();
	for(i=0;i<n;i++)
	{
		printf("\nMahasiswa ke-%d\n",i+1);
		printf("Nama\t: ");gets(d[i].nama);
		printf("NIM\t: ");gets(d[i].nim);
		printf("Kelas\t: ");gets(d[i].kelas);
		fwrite(&d[i],sizeof(d),1,f_data);
	}
	fclose(f_data);
	getchar();
	system("cls");
	main();
}

void add()
{
	f_data=fopen("Data.txt","ab");
	printf("\n\t---INPUT---\n");
	printf("\nMasukkan Jumlah Tambahan : ");scanf("%d",&n);getchar();
	
		printf("\n\nMahasiswa ke-%d\n",i+1);
		printf("Nama\t: ");gets(d[i].nama);
		printf("NIM\t: ");gets(d[i].nim);
		printf("Kelas\t: ");gets(d[i].kelas);
		fwrite(&d[i],sizeof(d),1,f_data);
	
	fclose(f_data);
	getchar();
	system("cls");
	main();
}

void read()
{
	i=0;
	f_data=fopen("Data.txt","rb");
	printf("\n\t---OUTPUT---\n");
	while(fread(&d[i],sizeof(d),1,f_data)==1)
	{
		printf("\nMahasiswa ke-%d\n",i+1);
		printf("Nama\t: %s\n",d[i].nama);
		printf("NIM\t: %s\n",d[i].nim);
		printf("Kelas\t: %s\n",d[i].kelas);
		i++;
	}
	fclose(f_data);	
	getchar();
	system("cls");
	main();
}
