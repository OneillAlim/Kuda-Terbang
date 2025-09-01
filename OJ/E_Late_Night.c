#include <stdio.h>

int main(){
    int a=0, b=0;
    scanf("%d %d", &a, &b);
    for(int i=a;i<a+b;i++){
        printf("%d\n", i);
    }
    return 0;
}