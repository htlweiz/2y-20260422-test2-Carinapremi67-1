/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

// TODO: your code goes here
double Celsius2Fahrenheit (double temp_celsius){
double Celsius2Fahrenheit = 0;
Celsius2Fahrenheit = 20*9/5+32;
return Celsius2Fahrenheit;

}
int main(void) {
  double temp_celsius = 0;

  scanf("%lf", &temp_celsius);

  printf("%f", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
