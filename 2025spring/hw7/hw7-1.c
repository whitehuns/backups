#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
  int size;
  int arr[MAX_SIZE];
  printf("Enter size of array: ");
  scanf("%d", &size);
  printf("Enter %d elements of array: ", size);
  for (int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  printf("\nElements in array are: ");
  for (int j = 0; j < size; j++){
    printf("%d, ", arr[j]);
  }
  return 0;
}
