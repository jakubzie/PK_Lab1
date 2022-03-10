#include <stdio.h>

main(){
  int a;
  printf("Wprowadz liczbe: ");
  scanf("%d",&a);
  if(a%2==0){
    printf("Liczba jest parzysta\n");
  }
  else{
    printf("Liczba jest nieparzysta\n");
  }
}