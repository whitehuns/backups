#include <stdio.h>
#define MAX_SIZE 100

int main()
{
  int arr[MAX_SIZE];
  int size;
  int sum = 0;
  printf("Enter size of array: ");
  scanf("%d", &size);
  printf("Enter %d elements in the array: ", size);
  for (int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  for (int j = 0; j < size; j++){
    sum = sum + arr[j];
  }
  printf("Sum of all elements of array : %d\n", sum);

  return 0;
}
