/*  Nama: Abiyyah Putri Rahman
    Kelas: B
    NIM: 2110512070
*/

#include <stdio.h>

void main(){
    int tanggal, bulan, tahun;
    int tgl_1 = 14;
    int bln_1 = 9;
    int thn_1 = 2021;
    int thn_2, bln_2, tgl_2;

    printf("Program menghitung umur \n");
    printf("Masukkan tanggal, bulan, dan tahun lahir: \n");
    scanf("%d %d %d", &tanggal, &bulan, &tahun);

    if(tanggal>31 || bulan>12 || tahun>2021){
        printf("Invalid");
    }
    else{
        if(tgl_1>=tanggal){
            tgl_2=tgl_1-tanggal;
        }
        else{
            tgl_2=(tgl_1+31)-tanggal;
            bln_1=bln_1-1;
            }
    if(bln_1>=bulan){
        bln_2=bln_1-bulan;
    }
    else{
        bln_2=(bln_1+12)-bulan;
        thn_1=thn_1-1;
        }
    if(thn_1>=tahun){
            thn_2=thn_1-tahun;
    }
    else{
        printf("Invalid");
        }
        printf("umur anda pada 14 September 2021 adalah %d tahun %d bulan %d hari", thn_2, bln_2, tgl_2);
    }
}
