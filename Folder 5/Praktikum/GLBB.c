#include<stdio.h>

float jarak(float vo,float a, float t)
{
	float x;
	x=(vo*t)+(0.5*a*t*t);
	
	return(x);
}

int main()
{
	float a,b,c,d;
	printf("Masukkan Vo = "); scanf("%f",&a);
	printf("Masukkan a  = "); scanf("%f",&b);
	printf("Masukkan t  = "); scanf("%f",&c);
	d=jarak(a,b,c);
	printf("Maka Jarak Tempuh Benda adalah %.2f meter\n\n",d);
	return 0;
}
