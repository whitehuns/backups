#include <stdio.h>
#define max_size 100

void swapArray(int*, int*, int*, int*);

int main()
{
    int source[max_size];
    int destin[max_size];
    int *pSource = source;
    int *pDestin = destin;
    int source_size, destin_size;
    printf("Enter size of the source array: ");
    scanf("%d", &source_size);
    printf("Enter %d elements in the source array: ", source_size);
    for(int i = 0; i < source_size; i++){
        scanf("%d", source + i);
    }
    printf("Enter size of the destination array: ");
    scanf("%d", &destin_size);
    printf("Enter %d elements in the destination array: ", destin_size);
    for(int i = 0; i < destin_size; i++){
        scanf("%d", destin + i);
    }
    printf("\n\n");
    printf("Source array before swapping: ");
    for(int i = 0; i < source_size; i++){
        printf("%d, ", source[i]);
    }
    printf("\n");
    printf("Destination array before swapping: ");
    for(int i = 0; i < destin_size; i++){
        printf("%d, ", destin[i]);
    }
    printf("\n");

    swapArray(pSource, pDestin, &source_size, &destin_size);

    printf("Source array after swapping: ");
    for(int i = 0; i < source_size; i++){
        printf("%d, ", source[i]);
    }
    printf("\n");
    printf("Destination array after swapping: ");
    for(int i = 0; i < destin_size; i++){
        printf("%d, ", destin[i]);
    }
    return 0;

}

void swapArray(int *p1, int *p2, int *sizep1, int *sizep2){
    int temp[max_size];
    //굳이 미리 맥시멈 미니멈 정할 필요 X. 일단 크기 달라도 스왑한다음에 그 후에 사이즈 알맞게 자르면(조절하면) 됨
    // 사이즈 포인터를 넣어야 이 함수뿐만 아니라 실제 메인 함수의 변수값이 바뀜
    for(int i = 0; i < *sizep1; i++){
        temp[i] = *(p1 + i);
    }
    for(int i = 0; i < *sizep2; i++){
        *(p1 + i) = *(p2 + i);
    }
    for(int i = 0; i < *sizep1; i++){
        *(p2 + i) = *(temp + i);
    }
    int temp1;
    temp1 = *sizep1;
    *sizep1 = *sizep2;
    *sizep2 = temp1;
}