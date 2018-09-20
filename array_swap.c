#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
  srand( time(NULL) );//seeds random number generator
  //printf("testing rand \n");
  //int a = rand();
  //printf("%d \n", a);

int arr1[10]; //ray storing 10 ints

  for(int i = 0; i<9; i++){
    arr1[i] = rand();
  }
  arr1[9] = 0; //set last value to 0

printf("Array 1:\n");
  for(int i = 0; i < 10; i++)
      printf("%d: %d \n", i, arr1[i]);


int arr2[10]; //new array with 10 ints

for(int i=0; i <10; i++){
  *(arr2 + i) = *(arr1 + 9 - i);
}

printf("Array 1:\n");
  for(int i = 0; i < 10; i++){
      printf("%d: %d \n", i, arr2[i]);

}



}
