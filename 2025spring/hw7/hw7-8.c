#include <stdio.h>

int main()
{
  int size;
  int sum = 0;
  printf("Input size of array: ");
  scanf("%d", &size);
  int arr[size];
  int *ptr = &arr[0];
  printf("Input %d numbers of element in the array: \n", size);
  for(int i = 0; i < size; i++){
    printf("element - %d ", i);
    scanf("%d", ptr + i);
    sum = sum + arr[i];
  }
  printf("Sum of array: %d\n", sum);
  return 0;
}
