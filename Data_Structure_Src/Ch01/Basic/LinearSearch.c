#include <stdio.h>

// 순차 탐색 알고리즘이 적용된 함수
int LSearch(int ar[], int len, int target) {
  int i;
  int opCount = 0;
  for(i = 0; i<len; i++){
    if(ar[i] == target) 
      return i;   // 찾은 대상의 인덱스 값 반환
    opCount += 1;
  }
  printf("비교연산횟수: %d \n", opCount);
  return -1;  //찾지 못했음을 의미하는 값 반화
}

int main(void){
  int arr1[500] = {0,};
  int arr2[5000] = {0,};
  int arr3[50000] = {0,};
  int idx;

  idx = LSearch(arr1, sizeof(arr1)/sizeof(int), 4);
  if(idx == -1)
    printf("탐색 실패 \n");
  else
    printf("타겟 저장 인덱스: %d \n", idx);

  idx = LSearch(arr2, sizeof(arr2)/sizeof(int), 7);
  if(idx == -1)
    printf("탐색 실패 \n");
  else
    printf("타겟 저장 인덱스: %d \n", idx);

  idx = LSearch(arr3, sizeof(arr3)/sizeof(int), 7);
  if(idx == -1)
    printf("탐색 실패 \n");
  else
    printf("타겟 저장 인덱스: %d \n", idx);

  return 0;
}
