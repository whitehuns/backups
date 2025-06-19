#include <stdio.h>
#define MAX_SIZE 100

int main()
{
  int size;
  int insert, position, temp;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d elements in array: ", size);
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  printf("Enter element to insert: ");
  scanf("%d", &insert);
  printf("Enter the element position: ");
  scanf("%d", &position);
  size = size + 1;
  position = position - 1;   //since array index starts from 0
  for (int j = size - 1; j > position; j--){
    arr[j] = arr[j-1];
  }
  arr[position] = insert;
  printf("Array elements after insertion: ");
  for (int k = 0; k < size; k++){
    printf("%d ", arr[k]);
  }
  return 0;
}
