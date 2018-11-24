// Napisz program, który wypisuje kolejne potęgi
// liczby 2 nie przekraczające 2010.

#include <stdio.h>
#include <math.h>

int main()
{
  int power = 0;
  int number = 2;
  int result;
  printf("Program wypisuje kolejne potęgi liczby 2, nie przekraczając liczby 2010 \n");
  while (result < 2010)
  {
    result = pow(number, power);
    if (result > 2010)
      break;
    printf("2^%d = %d \n", power, result);
    power++;
  }
}