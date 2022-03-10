#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(){
  double a,b,c,delta,x0,x1,x2;
  printf("Wprowadz po spacji wspolczynniki rownania kwadratowego: \n");
  scanf("%lf" "%lf" "%lf", &a, &b, &c);
    if(a==0){
    printf("a nie moze byc rowne 0!");
    return(0);
  }
  delta = pow(b,2)-4*a*c;
  if(delta<0){
    delta = delta*(-1);
    double z1= sqrt(delta);
    printf("Delta ujemna. Pierwiastki urojone: z1 = %lfi, z2 = %lfi", (-b-z1)/2, (-b+z1)/2);
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