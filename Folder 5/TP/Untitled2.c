#include<stdio.h>
int ep, m, g=10, h;
void hasil(int a){
	ep=m*g*h;	
}
void main(){
	int a;
	printf("=== INPUT ===\n");
	printf("Massa Benda : "); scanf("%d", &m); hasil(a);
	printf("Ketinggian Benda : "); scanf("%d", &h); hasil(a);
	printf("\n=== OUTPUT ===\n");
	printf("Benda tersebut memiliki energi potensial sebesar %d joule\n", ep);
}
