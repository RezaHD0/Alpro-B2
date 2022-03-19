// Nama File     : Tunjanak
// Deskripsi     :  menghitung besarnya tunjangan anak yang diberikan, dan kemudian menampilkan besarnya tunjangan anak tersebut
// Pembuat       : 24060121130044-Reza Hilmi Dafa
// Tgl Pembuatan : sabtu, 19 maret 2022
#include <stdio.h>

 int main () {
 	//kamus
  	int JA, GajiP,T;
  	//algoritma
  	printf("Jumlah anak :");
  	scanf("%d",&JA);
  	printf("Gaji Pokok :");
  	scanf("%d",&GajiP);
  	
  	if (JA < 3) {
	 T = JA * (0.1 * GajiP);
	 printf("Tunjangannya yaitu :%d",T); }
	 else if (JA >= 3) {
	 T = 3 * (0.1 * GajiP);
	 printf("Tunjangannya yaitu :%d",T);  }
	 else if (JA) == char {
	 	printf("salah cuk");
	 }
	 else 
	 	printf("masukkan tidak valid");
	return 0;
  }
