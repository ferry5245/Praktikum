#include<stdio.h>
#include<string.h>

struct{
	char ru[99],rp[99],lu[99],lp[99];
}a;

int n=3;

void output(int n)
{
	if(n==0) 
	{
		if(strcmp(a.ru,a.lu)==0&&strcmp(a.rp,a.lp)==0) printf("Login Sukses!\n");
		else if(strcmp(a.ru,a.lu)!=0||strcmp(a.rp,a.lp)!=0) printf("\nLogin Gagal\n");
	}
	else if(n>0)
	{
		if(strcmp(a.ru,a.lu)==0&&strcmp(a.rp,a.lp)==0) printf("Login Sukses!\n");
		else if(strcmp(a.ru,a.lu)!=0||strcmp(a.rp,a.lp)!=0) 
		{
			printf("\nALogin Gagal Kesempatan %d\n\n",n);
			printf("Username\t: ");gets(a.lu);
			printf("Password\t: ");gets(a.lp);
			output(n-1);
		}
	}
}

void main()
{
	printf("====REGISTER====\n\n");
	printf("Username\t: ");gets(a.ru);
	printf("Password\t: ");gets(a.rp);
	
	printf("\n====LOGIN====\n\n");
	printf("Username\t: ");gets(a.lu);
	printf("Password\t: ");gets(a.lp);
	output(n);
}
