// missing number.

#include <stdio.h>
#define MAX_SIZE 100

int findMissingNumber ( int arr[], int n){
  int total = ( n + 1) * (n + 2) / 2;
  for ( int i = 0; i < n; ++i){
    total -=arr[i];
  }
  return total;
}

int main(){
  int arr[MAX_SIZE],n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array: ");
  for ( int i = 0; i < n; ++i){
    scanf("%d", &arr[i]);
  }
  //find the missing the number.
  int missingnumber = findMissingNumber(arr, n);
  printf("the missing number is: %d\n", missingnumber);

  return 0;
  
}
