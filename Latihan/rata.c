#include <stdio.h>

int main(){
    int n=0;
    int arr[100];
    int sum=0;
    int max=0;

    printf("Masukkan berapa angka? ");
    scanf("%d", &n);

    printf("Masukkan %d angka: ", n);

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        if(max<arr[i]){
            max = arr[i];
        }
    }

    int min=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Jumlah = %d\nRata-rata = %.2f\nTerbesar = %d\n Terkecil = %d", sum, (float)sum/n, max, min);

    return 0;
}