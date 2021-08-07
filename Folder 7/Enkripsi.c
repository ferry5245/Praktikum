#include<stdio.h>
#include<string.h>
#include<ctype.h>

void enkripsi(char * data, int translasi);

int main ()
{
    char str [100];
    int x;

    printf ("Masukkan sebuah string : ");
    scanf ("%s", str);

    printf ("Besar pergeseran karakter : ");
    scanf ("%d", &x);

    printf ("Hasil enkripsi : ");
   
    enkripsi (str, x);

    printf ("\n");
   
    return 0;
}

// Pendeklarasian fungsi

void enkripsi(char * data, int translasi)
{
    
     do
     {
 *data = tolower (*data);
   char hasil = *data + translasi;
   if (hasil  >= 123)
     { hasil -= 26; }
     putchar (hasil);
      data++;
     }
     while (*data !='\0');
}
