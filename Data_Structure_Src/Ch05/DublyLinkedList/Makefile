all: DBLinkedList.o
	        gcc -g DBLinkedList.o DBLinkedListMain.c -o DBLinkedListMain 

DBLinkedList.o: DBLinkedList.c DBLinkedList.h
	        gcc -c DBLinkedList.c DBLinkedList.h

clean : 
					rm -rf DBLinkedList.o DBLinkedList.h.gch DBLinkedListMain
