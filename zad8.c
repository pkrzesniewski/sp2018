// 8. Napisz program, który prosi użytkownika 
// o wprowadzenie trzech liczb z klawiatury, 
// a następnie wypisze sumę, iloczyn, najmniejszą 
// i największą z wprowadzonych liczb.
// Dialog na terminalu powinien wyglądać tak:
// Wprowadź trzy liczby całkowite: 1 2 3
// Suma wynosi: 6
// Iloczyn wynosi: 6
// Najmniejsza liczba to: 1
// Największa liczba to: 3

#include <stdio.h>

void numbersInput (double* number1, double* number2, double* number3);
void add(double number1, double number2, double number3);
void multipli(double number1, double number2, double number3);
void minMaxNumber(double number1, double number2, double number3);

int main()
{
  double number1, number2, number3;
  printf("Program wypisuje różne matematyczne obliczenia na trzech liczbach \n");
  numbersInput(&number1, &number2, &number3);
  add(number1, number2, number3);
  multipli(number1, number2, number3);
  minMaxNumber(number1, number2, number3);
}

void numbersInput (double* number1, double* number2, double* number3){
  printf("Wprowadz 3 liczby: \n");
  scanf("%lf %lf %lf", number1, number2, number3);
}

void add(double number1, double number2, double number3){
  double result = number1 + number2 + number3 ;
  printf("Suma trzech liczb %.2lf, %.2lf, %.2lf wynosi: %.2lf \n", number1, number2, number3, result);
}

void multipli(double number1, double number2, double number3){
  double result = number1 * number2 * number3 ;
  printf("Wynikiem mnożenia trzech liczb %.2lf, %.2lf, %.2lf jest liczba: %.2lf \n", number1, number2, number3, result);
}

void minMaxNumber(double number1, double number2, double number3){
  double min;
  double max;
  double numbers [3];
  numbers[0]=number1;
  numbers[1]=number2;
  numbers[2]=number3;

  for(int i=0; i< sizeof(numbers)/sizeof(numbers[0]); i++){
    if(i==0){
      min=numbers[i];
      max=numbers[i];
    }
    else if(numbers[i]<=min){
      min = numbers[i];
    }
    else if(numbers[i]>=max)
      max = numbers[i];
  }
  printf("Najmniejszą podaną liczbą jest: %.2lf \nNajwiększą podaną liczbą jest: %.2lf \n", min, max);
}