/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>
#include <math.h>

// TODO: your code goes here
double compute_hypotenuse(double cath_a, double cath_b) {
  double compute_hypotenuse = 0;
  compute_hypotenuse = sqrt((cath_a * cath_a) + (cath_b * cath_b));
  return compute_hypotenuse;
} 
int main(void) {
  double leg_a = 0, leg_b = 0;

  printf("Geben sie eine Länge der Kathete a ein: ");
  scanf("%lf", &leg_a);

  printf("%f", compute_hypotenuse(leg_a, leg_b));

  return 0;
}
