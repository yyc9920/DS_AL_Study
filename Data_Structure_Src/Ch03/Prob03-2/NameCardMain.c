#include <stdio.h>
#include "NameCard.h"
#include "ArrayList.h"

void ShowMenu(void) {
  printf("\n/***** Menu *****/\n");
  printf("1: NameCard 추가\n");
  printf("2: NameCard 정보 보기\n");
  printf("3: 이름 찾기\n");
  printf("4: 전화번호 변경\n");
  printf("5: 정보 삭제\n");
  printf("/****************/\n\n");
  printf("선택 : ");
}

int main(void) {
  List namelist;
  char name[NAME_LEN];
  char phone[PHONE_LEN];
  NameCard* nc;
  int choice = 0;
  int search = 0;

  ListInit(&namelist);
  
  while(1) {
    if(choice == 0) {
      ShowMenu();
      scanf("%d", &choice);
    }

    else if(choice == 1) {
      printf("NameCard에 추가할 이름을 입력하세요: ");
      scanf("%s", name);
      printf("전화번호를 입력하세요: ");
      scanf("%s", phone);

      nc = MakeNameCard(name, phone);
      LInsert(&namelist, nc);
      choice = 0;
    }

    else if(choice == 2) {
      if(LFirst(&namelist, &nc)) {
        ShowNameCardInfo(namelist.arr[namelist.curPosition]);
        while(LNext(&namelist, &nc))
          ShowNameCardInfo(namelist.arr[namelist.curPosition]);
      }
      choice = 0;
    }

    else if(choice == 3) {
      printf("찾고 싶은 이름을 입력하세요: ");
      scanf("%s", name);

      if(LFirst(&namelist, &nc)) {
        if(NameCompare(nc, name) == 0) {
          printf("찾은 이름의 정보\n");
          ShowNameCardInfo(nc);
          search = 1;
        }
          
        while(LNext(&namelist, &nc)) {
          if(NameCompare(nc, name) == 0) {
            printf("찾은 이름의 정보\n");
            ShowNameCardInfo(nc);
            search = 1;
          }
        }
      }
      if(!search)
        printf("찾는 이름의 정보가 존재하지 않습니다!");
      search = 0;
      choice = 0;
    }

    else if(choice == 4) {
      printf("번호를 바꾸고 싶은 이름을 입력하세요: ");
      scanf("%s", name);

      if(LFirst(&namelist, &nc)) {
        if(NameCompare(nc, name) == 0) {
          printf("찾은 이름의 정보\n");
          ShowNameCardInfo(nc);
          printf("바꿀 번호를 입력하세요: ");
          scanf("%s", phone);
          ChangePhoneNum(nc, phone);
          search = 1;
        }
          
        while(LNext(&namelist, &nc)) {
          if(NameCompare(nc, name) == 0) {
            printf("찾은 이름의 정보\n");
            ShowNameCardInfo(nc);
            printf("바꿀 번호를 입력하세요: ");
            scanf("%s", phone);
            ChangePhoneNum(nc, phone);
            search = 1;
          }
        }
      }
      if(!search)
        printf("찾는 이름의 정보가 존재하지 않습니다!");
      search = 0;
      choice = 0;
    }

    else if(choice == 5) {
      printf("삭제하고 싶은 이름을 입력하세요: ");
      scanf("%s", name);

      if(LFirst(&namelist, &nc)) {
        if(NameCompare(nc, name) == 0) {
          printf("찾은 이름의 정보\n");
          ShowNameCardInfo(nc);
          printf("정말 삭제하시겠습니까?(y-1/n-0)");
          scanf("%d", &choice);
          if(choice == 1) {
            printf("다음을 리스트에서 삭제\n");
            ShowNameCardInfo(LRemove(&namelist));
          }
          search = 1;
        }
          
        while(LNext(&namelist, &nc)) {
          if(NameCompare(nc, name) == 0) {
            printf("찾은 이름의 정보\n");
            ShowNameCardInfo(nc);
            printf("정말 삭제하시겠습니까?(y-1/n-0)");
            scanf("%d", &choice);
            if(choice == 1) {
              printf("다음을 리스트에서 삭제\n");
              ShowNameCardInfo(LRemove(&namelist));
            }
            search = 1;
          }
        }
      }
      if(!search)
        printf("찾는 이름의 정보가 존재하지 않습니다!");
      search = 0;
      choice = 0;
    }
  }
}
