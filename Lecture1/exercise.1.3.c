#include <stdio.h>

/* print Fahrenheit-Celsius table for farh = 0, 20,...., 300; floating-point version */
main()
{
  float fahr, Celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("far | cel\n");
  while (fahr <= upper){
      Celsius = (5.0/9.0) * (fahr-32.0);
      printf("%3.0f %6.1f\n", fahr, Celsius);
      fahr = fahr + step;
  }
}