// Online C compiler to run C program online
#include <stdio.h>
int areaOfSquare(int side) {
    return side*side;
}
int main() {
    int side = 0;
    printf("What is one of the sides in the square");
    scanf("%d",&side);
    printf("The area of the square is %d",areaOfSquare(side));
    return 0;
}
