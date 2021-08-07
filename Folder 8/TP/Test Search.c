#include <stdio.h> 
int a[100]; 
int i,n,cari,idx,low,high, mid; 
main () 
{ 
	printf("Banyak data : "); scanf("%d",&n);
	for (i=0;i<n;i++) 
	{ printf("Data ke-%d : ",i+1); scanf("%d",&a[i]); } 
	printf("Data yang dicari : "); scanf("%d",&cari); //data diurutkan terlebih dahulu 
	//isi bagian ini dengan proses sorting 
	//proses binary search 
	low=0; high=n-1; idx=-1; 
	while ((low<=high) && (idx==-1)) 
	{ mid=(low+high)/2; 
		if (a[mid]==cari) 
		idx=mid; 
		else if (a[mid]<cari) low=mid+1; 
		else high=mid-1; } 
		if (idx!=-1) printf("Data ditemukan pada indeks : %d",idx+1); 
		else printf("Data tidak ditemukan"); 
}
