#include <stdio.h>
double celsiusToFahrenheit(double celcius){
    return (celcius * 9.0 / 5.0) + 32.0;
}
double fahrenheitToCelcius(double fahrenheit){
    return (fahrenheit - 32.0) / 1.8;
}
void printFarenheit(double fahrenheit){
    printf("%.2lf f\n",fahrenheit);
}
void printCelcius(double celcius){
    printf("%.2lf c\n",celcius);
}
int main(){
    double temp;
    char corf;
    scanf("%lf %c",&temp, &corf);
    if (corf == 'c' || corf == 'C') {
        double fahrenheit = celsiusToFahrenheit(temp);
        printFarenheit(fahrenheit);
    }
    else {
        double celcius = fahrenheitToCelcius(temp);
        printCelcius(celcius);
    }
    return 0;
}