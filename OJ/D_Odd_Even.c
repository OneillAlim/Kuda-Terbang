#include <stdio.h>

int main(){
    int n=0;
    int a=0;

    scanf("%d", &n);
    
    a = n%2;

    if(a==0) printf("EVEN\n");
    else printf("ODD\n");

    return 0;
}