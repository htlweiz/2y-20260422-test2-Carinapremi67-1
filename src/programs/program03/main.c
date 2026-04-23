/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

// TODO: your code goes here
double Celsius2Fahrenheit (double temp_celsius){
double Celsius2Fahrenheit = 0;
Celsius2Fahrenheit = temp_celsius*9/5+32;
return Celsius2Fahrenheit;

}
int main(void) {
  double temp_celsius = 0;

  printf("Geben sie eine Temperatur ein: ");
  scanf("%lf", &temp_celsius);

  printf("%f", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
