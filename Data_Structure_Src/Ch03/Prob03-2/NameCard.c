#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

NameCard * MakeNameCard(char * name, char * phone) {
  NameCard * nc;
  nc = (NameCard*)malloc(sizeof(NameCard));

  strcpy(nc->name, name);
  strcpy(nc->phone, phone);

  return nc;
}

void ShowNameCardInfo(NameCard *pcard) {
  printf("이름 : %s\n전화번호 : %s\n", pcard->name, pcard->phone);
}

int NameCompare(NameCard *pcard, char *name) {
   return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard *pcard, char *phone) {
  strcpy(pcard->phone, phone);
}
