all: DLinkedList.o Point.o
	        gcc -g DLinkedList.o Point.o PointListSortMain.c -o PointListSortMain 

DLinkedList.o: DLinkedList.c DLinkedList.h
	        gcc -c DLinkedList.c DLinkedList.h

Point.o: Point.c Point.h
					gcc -c Point.c Point.h

clean : 
					rm -rf DLinkedList.o DLinkedList.h.gch Point.o Point.gch PointListSortMain
