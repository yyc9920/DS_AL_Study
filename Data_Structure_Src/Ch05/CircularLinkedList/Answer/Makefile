all: CLinkedList.o
	        gcc -g CLinkedList.o CLinkedListMain.c -o CLinkedListMain 

CLinkedList.o: CLinkedList.c CLinkedList.h
	        gcc -c CLinkedList.c CLinkedList.h

clean : 
					rm -rf CLinkedList.o CLinkedList.h.gch CLinkedListMain
