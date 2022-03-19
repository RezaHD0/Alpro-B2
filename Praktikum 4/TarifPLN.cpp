// Nama File     : TarifPLN
// Deskripsi     :  menghitung tarif listrik yang dikenakan tergantung oleh golongan dan kwh
// Tgl Pembuatan : sabtu, 19 maret 2022
#include <stdio.h>

int main() {
	
	//kamus
	int gol, kwh, tarif;
	//algoritma
	printf("masukkan gol :");
	scanf("%d",&gol);
	printf("masukkan kwh :");
	scanf("%d",&kwh);
	
	if (gol == 1){
        if (kwh < 100) {
            hasil = 100 * 1000;
            printf("tarif :%d", tarif);
        }
        else{     //kwh>=100
            hasil = (kwh * 1000) + 0.1 *(kwh * 1000);
            printf("tarif : %d", tarif);
        }
    }
    else if (gol == 2){
        if (kwh < 100) {
            tarif = 100 * 2000;
            printf("kwh %d", tarif);
        }
        else if(kwh == 1000) {    //kwh>= 100
            tarif = (kwh * 2000) + 0.1*(kwh * 2000);
            printf("tarif : %d", tarif);
        }
        else{    //kwh>= 100
            tarif = (kwh * 2000);
            printf("tarif : %d", tarif);
        }

    }
    else{
        printf("masukan golongan tidak ditemukan");
        
	
			
	return 0; 
}
