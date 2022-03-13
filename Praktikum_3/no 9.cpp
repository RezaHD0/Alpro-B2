// Nama File    : CekBulan
// Deskripsi    : menampilkan nama-nama bulan dari nomor bulan
// Pembuat      : Reza Hilmi Dafa
// Tgl Pembuatan: Selasa, 08 03 2022 21:39 WIB

#include<stdio.h>//header file

//program utama
int main() {
//kamus
    int a;
//algoritma
    printf("===========Program Menampilkan Bulan===========\n");
    printf("input angka 1 sd 12 : ");
    scanf("%d", &a);

    switch (a) {
    case 1  :
        printf("Bulan Januari");
        break;
    case 2 :
        printf("Bulan Februari");
        break;
    case 3 :
        printf("Bulan Maret");
        break;
    case 4 :
        printf("Bulan April");
        break;
    case 5 :
        printf("Bulan Mei");
        break;
    case 6 :
        printf("Bulan Juni");
        break;
    case 7 :
        printf("Bulan Juli");
        break;
    case 8 :
        printf("Bulan Agustus");
        break;
    case 9 :
        printf("Bulan September");
        break;
    case 10 :
        printf("Bulan Oktober");
        break;
    case 11 :
        printf("Bulan November");
        break;
    case 12 :
        printf("Bulan Desember");
        break;
    default:
        printf("Masukan nomor bulan tidak tepat");

        }
        return 0;
}
