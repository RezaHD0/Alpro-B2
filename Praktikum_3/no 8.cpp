// Nama File    : CekHari
// Deskripsi    : menampilkan nama-nama hari dari nomor hari
// Pembuat      : Reza Hilmi Dafa
// Tgl Pembuatan: Senin, 07 03 2022 20:21 WIB

#include<stdio.h>//header file

//program utama
int main() {
//kamus
    int a;
//algoritma
    printf("===========Program Menampilkan Hari===========\n");
    printf("input angka 1 sd 7 : ");
    scanf("%d", &a);
        if (a == 1) {
            printf("Hari Senin");
        }else if (a == 2) {
            printf("Hari Selasa");
        }else if (a == 3) {
            printf("Hari Rabu");
        }else if (a == 4) {
            printf("Hari Kamis");
        }else if (a == 5) {
            printf("Hari Jumat");
        }else if (a == 6) {
            printf("Hari Sabtu");
        }else if (a == 7) {
            printf("Hari Minggu");
        }else
            printf("Masukan nomor hari tidak tepat");



}
