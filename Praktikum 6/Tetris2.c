/*Nama File 	: Tetris2
Deskripsi 		: Diberikan sebuah integer N > 0 yang dimasukan melalui keyboard, maka  tampilkanlah dilayar susunan karakter �*�
Pembuat   		: 24060121130044 - Reza Hilmi Dafa
Tgl Pembuatan	: Sabtu, 02 April 2022*/

#include <stdio.h>
int main()
{
 //kamus
   int N, i, j;
 //Algoritma
   system("color 2");
   printf("Ketiklah nilai N yang ingin dimasukkan = ");
   scanf("%d", &N);
   if (N > 0)
   {
    for(i = 1; i <= N; i++)
    {
     for(j = 1; j <= i; j++)
     {
      printf("* ");
     }
      printf("\n");
    }
     for(i = N; i >= 1; i--)
     {
      for(j = 2; j <= i; j++)
      {
       printf("* ");
      }
       printf("\n");
 	 }
   }
   else
   {
    printf("Pastikan bilangan integer melebihi 0 !");
   }
 return 0;
}
