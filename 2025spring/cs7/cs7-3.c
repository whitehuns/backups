#include <stdio.h>

int main()
{
  int size;
  printf("Enter size of the array: ");
  scanf("%d", &size);
  int array[size];
  printf("Enter %d elements in array: ", size);
  for(int i = 0; i < size; i++){
    scanf("%d", &array[i]);
  }
  int odd = 0;
  int even = 0;
  for (int j = 0; j < size; j++){
    if (array[j] % 2 == 0){
      even++;
    }
    else{
      odd++;
    }
  }
  printf("Total even elements: %d\nTotal odd elements: %d\n", even, odd);
  return 0;
}
