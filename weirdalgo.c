#include <stdio.h>

int main(){
  int n;
  printf("enter the number: ");
  scanf("%d", &n);

  if ( n <= 0){
    printf("Error! Enter a possitive integer");
    return 1;
  }

  while(n != 1){
    printf("%d -> ", n);
    if ( n % 2 == 0){
      n /= 2;
    }
    else{
      n= 3*n+1;
    }
    printf("%d\n ", n);
  }
  return 0;
}
