#include <stdio.h>
#define MAX_SIZE 1000
int maximum(int[]);

int main()
{
  int arr[MAX_SIZE];
  int size;
  int max, secmax;
  printf("Enter size of the array (1-1000): ");
  scanf("%d", &size);
  printf("Enter elements in the array: ");
  for (int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  max = (arr[0]>arr[1])?arr[0]:arr[1];
  secmax = (arr[0]>arr[1])?arr[1]:arr[0];
  for(int j = 2; j < size; j++){
    if (arr[j] > max){
      secmax = max;
      max = arr[j];
    }

    else if (arr[j] > secmax && arr[j] < max){
      secmax = arr[j];
    }
  }
  printf("First largest: %d\n", max);
  printf("Second largest: %d\n", secmax);

  return 0;
}


