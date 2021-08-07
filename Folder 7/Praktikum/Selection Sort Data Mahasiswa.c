#include<stdio.h>
#include<string.h>

struct data{
	char nama[99],kelas[99],jurusan[99];
	int nim;
}a[99],temp;

void main(){
	int i, n, j;
	printf("Jumlah Mahasiswa : ");scanf("%d",&n);getchar();
	for(i=0;i<n;i++)
	{
		printf("\nMahasiswa ke-%d\n",i+1);
		printf("Nama\t: ");gets(a[i].nama);
		printf("NIM\t: ");scanf("%d",&a[i].nim);getchar();
		printf("Kelas\t: ");gets(a[i].kelas);
		printf("Jurusan\t: ");gets(a[i].jurusan);
	}
	for (i=n-1;i>=1;i--) 
	for (j=0;j<=i;j++)
	{
		if(strcmp(a[j].nama,a[j+1].nama)>0)
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
	}
	printf("\n\n====OUTPUT====\n");
	for(i=0;i<n;i++)
	{
		printf("\nMahasiswa ke-%d\n",i+1);
		printf("Nama\t: %s\n",a[i].nama);
		printf("NIM\t: %d\n",a[i].nim);
		printf("Kelas\t: %s\n",a[i].kelas);
		printf("Jurusan\t: %s\n",a[i].jurusan);
	}
}
