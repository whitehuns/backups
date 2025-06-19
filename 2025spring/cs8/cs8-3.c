#include <stdio.h>

void fillArray(int arr[], int size, int value)
{
  for(int i = 0; i < size; i++){
    arr[i] = value;
  }
  printf("Filled array: ");
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }

}

int main()
{
  int size, fillval;
  printf("Enter array size: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter value to fill: ");
  scanf("%d", &fillval);
  fillArray(&arr[size], size, fillval);
  return 0;
}
