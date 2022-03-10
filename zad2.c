#include <stdio.h>

main(){
  double a,b,P;
  printf("Wprowadz dlugosc boku a: ");
  scanf("%lf",&a);
  printf("Wprowadz dlugosc boku b: ");
  scanf("%lf",&b);
  if(a<=0 || b<=0){
    printf("Boki nie moga byc niedodatnie, niepoprawne dane");
    return 0;
  }
  P = a*b;
  printf("Pole prostokata wynosi: %f\n",P);
  if(a==b){
    printf("Ten prostokat jest kwadratem\n");
  }
  else{
    printf("Ten prostokat nie jest kwadratem\n");
  }
}