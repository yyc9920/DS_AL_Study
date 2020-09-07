all: DLinkedList.o
	        gcc -g DLinkedList.o DLinkedListSortMain.c -o DLinkedListSortMain 

DLinkedList.o: DLinkedList.c DLinkedList.h
	        gcc -c DLinkedList.c DLinkedList.h

clean : 
					rm -rf DLinkedList.o DLinkedList.h.gch DLinkedListSortMain
