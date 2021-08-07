//Binary Search
#include<stdio.h>
main(){
	int a[10]={10,1,9,2,8,3,7,4,6,5};
	int i,j,idx,temp,cari,max,min,mid;
	//Proses sorting
	for(i=0;i<10-1;i++){
		for(j=0;j<10-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	//Proses searching
	printf("Angka yang dicari : "); scanf("%d",&cari);
	idx=0;
	i=0;
	min=0; //Tentukan nilai untuk min
	max=9; //Tentukan nilai untuk max
	while(min<=max && idx==0){
		mid=(min+max)/2; //Tentukan rumus untuk mencari mid
		if(a[mid]==cari){
			idx=mid;
		} else if(a[mid]>cari){
			max=mid-1; //Tentukan variabelnya
		} else min=mid+1;
		
		i++;
	}
	if(idx!=0){ //Lengkapi operasi boolean-nya
		printf("Angka ditemukan pada indeks ke-%d",idx);
	} else printf("Angka tidak ditemukkan");
}
