#include <stdio.h>
#define pi 3.14;
int main(void) {
  double r,P;
  scanf("%lf",&r);
  if(r<=0){
    printf("Niepoprawne dane\n");
    return 0;
  }
  P = r*r*pi;
  printf("Pole koła wynosi: %f\n",P);

  return 0;
}