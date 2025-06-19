#include <stdio.h>
#define MAX_SIZE 100

int main()
{
  int size;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d elements in array: ", size);
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < size - 1; i++){
    int min_idx = i;
    for (int j = i + 1; j < size; j++){
      if(arr[j] < arr[min_idx]){
        min_idx = j;
      }
    }
    if (min_idx != i){
      int temp = arr[i];
      arr[i] = arr[min_idx];
      arr[min_idx] = temp;
    }
  }
  printf("Elements of array in ascending order: ");
  for(int k = 0; k < size; k++){
    printf("%d ", arr[k]);
  }
  return 0;
}
