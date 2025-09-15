#include <stdio.h>
#define MAX_SIZE 100

int main()
{
  int size;
  int even = 0;
  int odd = 0;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d elements in array: ", size);
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  for(int j = 0; j <size; j++){
    if (arr[j] % 2 == 0){
      even++;
    }
    else if(arr[j] % 2 == 1){
      odd++;
    }
  } 
  printf("Total even elements: %d\n", even);
  printf("Total odd elements : %d\n", odd);
  return 0;
}
