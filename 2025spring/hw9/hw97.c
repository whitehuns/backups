#include <stdio.h>

int factorial(int num);

int main()
{
  int row, size;
  printf("Enter number of rows: ");
  scanf("%d", &row);
  size = row * (row + 1) / 2;
  int pascal[row][row];
  pascal[0][0] = 1;
  for(int i = 1; i < row; i++){
    for(int j = 0; j < i + 1; j++){
      pascal[i][j] = factorial(i) / (factorial(i - j) * factorial(j));  
    }
  }
  for(int i = 0; i < row; i++){
    for(int j = 2 *(row-i-1); j >= 1; j--){
      printf(" ");
    }
    for(int k = 0; k <= i; k++){
      printf("%d   ", pascal[i][k]);     
    }
    printf("\n");
  }
  return 0;
}


int factorial(int num){
  if (num == 1 || num == 0){
    return 1;
  }
  return num * factorial(num - 1);
}

