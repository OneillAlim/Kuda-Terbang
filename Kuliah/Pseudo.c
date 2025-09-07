#include <stdio.h>

    //Pseudo code untuk menghitung luas persegi panjang case 1
    /* 
    Start
        Set Length = 5
        Set Width = 3
        Area = Length * Width
        Output Area
    End
    */

    //
    //Pseudo code untuk menghitung luas persegi panjang case 2
    /*
    Start
        Input Length
        Input Width
        Area = Length * Width
        Output Area
    End
    */

int main(){
    
    //case 1
    int length=5;
    int width=3;
    int area=0;

    area = length*width;

    printf("Luas Persegi Panjang Case 1 = %d", area);
    printf("\n");

    //case 2
    int Length=0, Width=0, Area=0;

    printf("Input your Length and Width : ");
    scanf("%d %d", &Length, &Width);

    Area = Length*Width;
    
    printf("Your rectangle area in case 2 is %d", Area);

    return 0;
}