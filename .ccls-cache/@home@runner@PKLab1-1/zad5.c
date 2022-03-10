#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(){
  double a,b,c,delta,x0,x1,x2;
  printf("Wprowadz po spacji wspolczynniki rownania kwadratowego: \n");
  scanf("%lf" "%lf" "%lf", &a, &b, &c);
  delta = pow(b,2)-4*a*c;
  if(delta<0){
    double complex z1,z2,pd;
    printf("%lf",delta);
    pd = pow(b*b-4*a*c,0.5);
    z1 = (-b+pd)/(2*a);
    z2 = (-b-pd)/(2*a);
    printf("Delta ujemna. Pierwiastki urojone rownania: z1= %lf %lf, z2= %lf %lf", creal(z1), cimag(z1), creal(z2), cimag(z2));
  }
  else if(delta>0){
    x1 = (-b+pow(delta,0.5))/(2*a);
    x2 = (-b-pow(delta,0.5))/(2*a);
    printf("Delta wieksza od 0. Pierwiastki rownania kwadratowego: x1= %lf, x2= %lf", x1, x2);
  }
  else{
    x0=(-b)/(2*a);
    printf("Delta rowna 0. Pierwiastek rownania: x0= %lf",x0);
  }
}