// Napisz program, który wypisuje kolejne potęgi
// liczby 2 nie przekraczające 2010.

#include <stdio.h>
#include <math.h>

void wypisz_potegi(in upto);

int main()
{
  

  printf("Program wypisuje kolejne potęgi liczby 2, nie przekraczając liczby 2010.\n");
  while (result < max_result)
}
void wypisz_potegi(int upto) {
  int power = 0;
  int result = 1;


  while (result < upto)
    {
    result = pow(2, power);
    if (result > upto)
      break;      
    printf("2^%d = %d\n", 2, result);
    power++;
  }
}