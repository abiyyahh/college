/*  Nama: Abiyyah Putri Rahman
    Kelas: B
    NIM: 2110512070
*/

#include<stdio.h>

void main(){
    printf("Program menghitung niali faktorial\n");
    int hasil = 1;
    int faktorial;
    int i = 1;
    printf("mau berapa faktorial? ");
    scanf("%d", &faktorial);
    while (i<=faktorial){
        hasil = i*hasil;
        i++;
    }
    if (faktorial == 0){
        hasil=1;
    }
    printf("hasil faktorial dari %d! adalah %d", faktorial, hasil);
}
