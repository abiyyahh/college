/*  Nama : Abiyyah Putri Rahman
    NIM  : 2110512070
    Kelas: B
*/

#include <stdio.h>

void main(){
    printf("program menghitung harga jual motor\n");
    int harga, jenis_bayar;
    printf("Masukkan harga motor = ");
    scanf("%d", &harga);
    printf("Bagaimana cara bayarnya?\n");
    printf("Ketik '1' untuk tunai \nketik '2' untuk kredit\n");
    scanf("%d", &jenis_bayar);
    if (jenis_bayar == 1){
        printf("harga jual motornya adalah = %d", harga * 95/100);
    }
    else {
        printf("harga jual motornya adalah = %d", harga * 120/100);
    }
}
