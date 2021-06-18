#include <stdio.h>

double areaOfASquare(double num1) {
return num1*num1;
    
}

int main() {
double exampleNum=0;
printf("\n What is the measurement of 1 of the sides in the square");
scanf("%lf",&exampleNum);
printf("%lf",areaOfASquare(exampleNum));


    return 0;
}
 
