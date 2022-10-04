/*  Nama: Abiyyah Putri Rahman
    Kelas: B
    NIM: 2110512070
*/

#include<stdio.h>

void main(){
    int desimal,angka, sisa;
    int basis=1, biner=0;

    printf("Masukkan bilangan desimal = ");
    scanf("%d",&angka);
    desimal = angka;
    while (angka>0){
        sisa = angka%2;
        biner = biner + (sisa*basis);
        angka = angka/2;
        basis = basis*10;
    }
    printf("Bilangan biner dari %d adalah %d", desimal, biner);


}
