// Nama File : CekSeriPositif
// Deskripsi :menampilkan, menghitung dan mengklasifikasi total 3 tahanan bilangan tidak negatif t1, t2, dan t3
// Pembuat   : Reza Hilmi Dafa
// Tgl Pembuatan : Minggu, 13 03 2022 19:00 WIB

#include<stdio.h> //header file

//program utama
int main() {
// kamus
    int t1, t2, t3, tt;
// algoritma
    printf("masukkan nilai t1 : ");
    scanf("%d", &t1);
    printf("masukkan nilai t2 : ");
    scanf("%d", &t2);
    printf("masukkan nilai t3 : ");
    scanf("%d", &t3);

tt = t1 + t2 + t3;

   if (t1 >= 0 && t2 >= 0 && t3 >= 0) {
        printf("total tahanan : %d", tt);
       }else
        printf("Masukkan tahanan tidak boleh negatif");
        return 0;
    
}
