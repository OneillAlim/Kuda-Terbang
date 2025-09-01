#include <stdio.h>
#include <string.h>

int main(){
    char nama[50];
    int umur=0;

    //soal1
    printf("Masukkan nama kamu : ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0;

    printf("Masukkan umur kamu : ");
    scanf("%d", &umur);

    printf("Halo, %s! Umur kamu %d tahun.", nama, umur);

    printf("\n");
    //soal2
    int angka=0;
    int jenis=0;

    printf("Masukkan angka : ");
    scanf("%d", &angka);

    jenis = angka % 2;

    if(jenis==0) printf("Bilangan genap");
    else printf("Bilangan ganjil");
    
    printf("\n");

    //soal 3

    for(int i=1;i<11;i++){
        if(i%2==0) printf("%d ", i);
        
    }
    return 0;
}