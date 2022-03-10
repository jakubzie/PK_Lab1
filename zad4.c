#include <stdio.h>

int main(){
  double n[3],max;
  for (int i=0;i<3;i++){
    scanf("%lf",&n[i]);
  }
  max = n[0];
  for (int i=1;i<3;i++){
    if(n[i]>max){
      max = n[i];
    }
  }  
  printf("Najwieksza jest liczba: %lf\n",max);
}