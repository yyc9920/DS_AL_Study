#include <stdio.h>
#include "ArrayList.h"

int main(void) {
  int data;
  int sum = 0;
  List list;

  //리스트 초기화
  ListInit(&list);

  //정수 1~9까지 리스트에 저장
  for(int i = 0; i < 9; i++)
    LInsert(&list, i+1);

  //리스트에 저장된 값을 순차적으로 참조하여 그 합을 계산하여 출력
  if(LFirst(&list, &data)) {
    printf("%d ", data);
    sum += data;
    while(LNext(&list, &data)) {
      printf("%d ", data);
      sum += data;
    }
  }

  printf("\n\n합 : %d", sum);

  if(LFirst(&list, &data)) {
    if(data % 2 == 0 | data % 3 == 0)
      LRemove(&list);
    while(LNext(&list, &data))
      if(data % 2 == 0 | data % 3 == 0)
        LRemove(&list);
  }

  printf("\n\n*** 2의 배수와 3의 배수 삭제 ***\n\n");

  if(LFirst(&list, &data)) {
    printf("%d ", data);
    while(LNext(&list, &data))
      printf("%d ", data);
  }
  printf("\n");
  return 0;
}
