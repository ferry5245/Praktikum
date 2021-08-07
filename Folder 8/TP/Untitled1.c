#include<stdio.h>

//Prosedur Bubble Sort//
void sorting(int a[],int n)
{
	int i,j,tem;
	for(i=n-1;i>=1;i--)
	for(j=1;j<=i;j++)
	{
		if(a[j-1]>a[j])
		{
			tem=a[j-1];
			a[j-1]=a[j];
			a[j]=tem;
		}
	}
	//Output Pengurutan//
	printf("Hasil Pengurutan : ");
	for(i=0;i<=n-1;i++)
		{
			printf("%d ",a[i]);
		}
}

//Prosedur Binary Search//
void searching(int a[],int n,int X)
{
	int low,mid,high,idx;
	low=0;
	high=n-1;
	idx=-1;
	while((low<=high)&&(idx==-1))
	{
		mid=(low+high)/2;
		if(a[mid]==X) idx=mid;
		else if(a[mid]<X) low=mid+1;
		else high=mid-1;
	}
	//Output Pencarian//
	if(idx!=-1)
	{
		printf("\n\nData %d Terdapat pada Indeks ke-%d.\n",X,idx);
	}
	else printf("\n\nData Tidak Ditemukan.\n");
}

//Prosedur Sequential Search//
void sequential(int a[],int n,int X)
{
	int i;
	while((i<n)&&(a[i]!=X)) i++;
	if(a[i]==X) printf("Data %d Terdapat pada Indeks ke-%d\n\n",X,i);
	else printf("Data Tidak Ditemukan\n\n");
}

//Program Utama//
void main()
{
	int n=9,mode,i,j;
	int a[]=18,24,36,39,42,54,60,65,79;
	int X;
	printf("==============================================\n");
	printf("===== BINARY & SEQUENTIAL SEARCH PROGRAM =====\n");
	printf("==============================================\n\n");
	
	printf("\n\t----INPUT----\n\n");
	printf("Masukkan Jumlah Data : ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Masukkan Nilai Ke-%d : ",i+1);scanf("%d",&a[i]);
	}
	printf("\nData yang Dicari : ");scanf("%d",&X);
	printf("\nPilihan Pencarian : \n[1] Binary Search\n[2] Sequential Search\n\n");
	printf("Masukkan Mode Pencarian : ");scanf("%d",&mode);
	switch(mode)
	{
		case 1: 
		printf("\n\t----OUTPUT----\n\n");
		sorting(a,n);
		searching(a,n,X);
		getchar();break;
		case 2:
		i=0; 
		printf("\n\t----OUTPUT----\n\n");
		sequential(a,n,X);
		getchar();break;
		default : printf("\nMode Pencarian Tidak Ditemukan");
	}
}
