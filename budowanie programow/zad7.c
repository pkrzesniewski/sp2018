// 7. Napisz program, który wczyta liczbę rzeczywistą
// i wypisze jej odwrotność oraz jej pierwiastek kwadratowy.
// Program nie powinien obliczać odwrotności liczby 0 oraz
// pierwiastka z liczby ujemnej. W takiej sytuacji zamiast
// obliczeń program powinien wypisać odpowiedni komunikat.

#include <stdio.h>
#include <math.h>

void numberInput (double* number);
void numberReverseResult (double number);
void numberSqrtResult (double number);

int main()
{
  double number;
  printf ("Program wypisuje odwrotność oraz pierwiastek kwadratowy liczby podanej w konsoli \n ");
  numberInput (&number);
  if(number<0){
    printf("Nie ma pierwiastka kwadratowego z liczby ujemnej.. \n");
    numberReverseResult(number);
  }else if(number==0){
    printf("0 nie ma liczby odwrotnej do 0.. \n");
    numberSqrtResult (number);
  }else{
    numberReverseResult(number);
    numberSqrtResult(number);
  }
}

void numberInput (double* number){
  printf("Podaj liczbę rzeczywistą: \n");
  scanf("%lf", number);
}

void numberReverseResult (double number){
  double revereResult = 1/number;
  printf("Odwrotnością liczby %.2lf jest liczba: %lf \n", number, revereResult);
}

void numberSqrtResult (double number){
  double sqrtResult = sqrt(number);
  printf("Pierwiastkiem liczby %.2lf jest liczba: %lf \n", number, sqrtResult);
}
