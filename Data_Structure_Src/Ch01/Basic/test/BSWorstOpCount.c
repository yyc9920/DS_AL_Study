#include <stdio.h>

int Search_S_Recursive(int ar[], int len, int target, int cnt){
  int start;
  int sCnt = 1;
  int i;
  int tCnt = cnt+1;

  if (cnt % 2) {
    while (cnt-1) {
      sCnt = sCnt*2;
      cnt /= 2;
    }
  } else {
    while (cnt-1) {
      sCnt = sCnt*2;
      cnt /= 2;
    }
  }

  for (i = 0; i < sCnt; i++) {

  }
}

int Search_S(int ar[], int len, int target) {
  int sum = 0;
  int i;
  int cnt = 0;
  
  for (i = 0; i < len; i++) {
    sum += ar[i];
  }

  if (sum < target) return -1;
  else {
    
  }

  return -1;
}

int main(void) {
  int arr1[500] = {0,};
  int arr2[5000] = {0,};
  int arr3[50000] = {0,};
  int idx;

  //배열 arr1을 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
  idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
   if(idx == -1)
     printf("탐색 실패 \n");
   else
     printf("타겟 저장 인덱스: %d \n", idx);

   idx = BSearch(arr2, sizeof(arr2)/sizeof(int), 2);
   if(idx == -1)
     printf("탐색 실패 \n");
   else
     printf("타겟 저장 인덱스: %d \n", idx);

  idx = BSearch(arr3, sizeof(arr3)/sizeof(int), 1);
   if(idx == -1)
     printf("탐색 실패 \n");
   else
     printf("타겟 저장 인덱스: %d \n", idx);

   return 0;
}
