#include <stdio.h>
#include <stdlib.h>

int main()
{
int index[100];
int i, j, n, tahu;
	
	printf("Bubble Sort Descending\n");
	printf("Banyak data : ");
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
	printf("Data ke-%d : ",i+1);
	scanf("%d",&index[i]);
	}
	
	for (i=n-1;i>=1;i--) //lengkapi syntax (update statement)
	{
		for (j=1;j<=i;j++)
		{
		if (index[j-1] < index[j]) // lengkapi syntax (variable)
			{
			tahu=index[j-1]; //lengkapi syntax
 			index[j-1]=index[j];
			index[j]=tahu;
			}
		}
	}
	
	printf("\nHasil Sorting :\n");
	for (i=0;i<=n-1;i++)
	{
	printf("%d",index[i]);
	printf(" ");
	}
}

