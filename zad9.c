// 9. Napisać program, który wypisze tabelkę wartości 
// pierwiastka kwadratowego. Program ma pytać o
//     wartość poczatkową
//     wartość końcową
//     krok dla argumentu
// i wypisywać tabelkę w podanym zakresie. Liczby 
// powinny być wypisywane z dokładnością czterech 
// miejsc po przecinku. Na przykład, jeżeli 
// podamy 1 jako wartość poczatkową, 2 jako końcową 
// i 0.5 jako krok, powinismy dostać:
// 1.0000  1.0000
// 1.5000  1.2247
// 2.0000  1.4142

#include <stdio.h>
#include <math.h>

void parametersImput(double* start, double* step, double* end);
void tableMaker(double start, double step, double end);

int main()
{
  double start, step, end;
  printf("Program wypisuje tabelkę pierwiastków kwadratowych ze wskazanym krokiem do uzyskania wartości końcowej \n");
  parametersImput(&start, &step, &end);
  tableMaker(start, step, end);

}

void parametersImput(double* start, double* step, double* end){
  printf("Wprowadz wartość początkową, krok dla argumentu, oraz wartość końcową: \n");
  scanf("%lf %lf %lf", start, step, end);
}

void tableMaker(double start, double step, double end){
  if(start<0 || end<0)
    printf("Nie ma pierwiastka z liczby ujemnej.. \n");
  else if(step>end)
    printf("Przekroczono zasięg obliczeń.. \n");
  else if(step<0 && end<start){
    while(end<=start){
      double sqrtResult = sqrt(start);
      printf("%.4lf   %.4lf \n", start, sqrtResult);
      start += step;
    }
  }
  else if (step>0 && start<end){
    while(start<=end){
      double sqrtResult = sqrt(start);
      printf("%.4lf   %.4lf \n", start, sqrtResult);
      start += step;
    }
  }
}