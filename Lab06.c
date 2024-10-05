#include <stdio.h>
int main(){
    float a1, a2, a3, b1, b2, b3, c1, c2, c3;
    scanf("%f %f %f", &a1, &a2, &a3);
    scanf("%f %f %f", &b1, &b2, &b3);
    scanf("%f %f %f", &c1, &c2, &c3);
    if (a2 == 0.0 && a3 == 0.0 && b1 == 0.0 && b3 == 0.0 && 
    c1 == 0.0 && c2 == 0.0){
        printf("This is a scalar matrix");
    }
    else {
        printf("This is not a scalar matrix");
    }
    return 0;   
}