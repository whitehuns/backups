#include <stdio.h>

int main()
{
  int size;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int array[size];
  printf("Enter 5 elements in the array: ");
  for(int i = 0; i < size; i++){
    scanf(" %d", &array[i]);
  }

  int sum = 0;
  for(int j = 0; j < size; j++){
    sum = sum + array[j];
  }

  printf("Sum of all elements of array = %d\n", sum);
  return 0;
}
