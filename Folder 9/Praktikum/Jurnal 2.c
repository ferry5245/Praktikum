//Program Pause or Exit
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char input[20];
void main()
{
printf("Pause or Exit\n");
    printf("\nInput : "); gets(input);

    if(strcmp(input,"Pause")== 0) //lengkapi syntax
    {
        printf("\nProgram Ter-Pause || \n");
        system("pause"); main(); // prosedur utama
    }
    else if(strcmp(input, "Exit")==0)
    {
        printf("\nProgram Akan Keluar...");
		system("exit");
    }
    else main();
}

