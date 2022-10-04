/*
    Nama: Abiyyah Putri Rahman
    Kelas: B
    NIM: 2110512070
*/

#include <stdio.h>

int Pangkat(int a, int b) {
    if (b==0){
        return 1;
    }
    else{
        return a * Pangkat(a, b-1);
    }
}
void main()
{
    int a, b;
    printf("Program Menghitung PerPangkatan\n");
    printf("=================================\n");
    printf("Masukkan bilangan yang akan dihitung : ");
    scanf("%d", &a);
    printf("masukkan Pangkat : ");
    scanf("%d", &b);
    printf("%d pangkat %d adalah %d", a,b, Pangkat(a,b));
}
