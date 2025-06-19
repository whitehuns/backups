#include <stdio.h>
#define MAX_SIZE 100

int main()
{
  int size;
  int position;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d elements in array: ", size);
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  printf("Enter the element position to delete: ");
  scanf("%d", &position);
  position = position - 1;
  for(int j = position; j < size; j++){
    arr[j] = arr[j+1];
}
  size = size - 1;
  printf("Elements of array after delete are: ");
  for(int k = 0; k < size; k++){
    printf("%d ", arr[k]);
  }
  return 0;
}
