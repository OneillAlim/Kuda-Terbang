#include <stdio.h>

int main(){
    int arr[100];
    int n=0;

    printf("mau masukkan berapa angka?\n");
    scanf("%d", &n);

    printf("masukkan %d angka :\n", n);

    for(int i=0;i<n;i++){
        printf("Numero [%d] : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("angka yang kamu masukkan diawal :\n");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    printf("\nangka yang kamu masukkan kalo dibalik :\n");
    for(int i=n-1;i>=0;i--){
        printf("%d ", arr[i]);
    }
    return 0;
}