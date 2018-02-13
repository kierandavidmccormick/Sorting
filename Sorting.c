#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "Sorting.h"

int main(){
	int array[LENGTH];
	setArray(LENGTH, array);
	printArray(array, LENGTH);
	long unsigned int o = clock();
	sort(array, LENGTH);
	long unsigned int f = clock() - o;
	printArray(array, LENGTH);
	checkSorted(array, LENGTH);
	printf("Time taken: %8lu clock cycles\n", f);
	return 0;
}

void bubbleSort(int array[], int length){
	debug0("=> bubbleSortStart");
	int prev = array[0];
	while (!isSorted(array, length)){
		debug0("** bubbleSortIteration1");
		for (int i = 1; i < length; i++){
			if (prev > array[i]){
				swap(array, i, i-1);
			}
			prev = array[i];
			debug2("** bubbleSortIteration2", "i", i, "prev", prev);
		}
	}
	debug0("<= bubbleSortEnd");
}

void selectionSort(int array[], int length){
	debug0("=> selectionSortStart");
	for (int j = 0, pos = 0; j < length; j++, pos = j){
		for (int i = j, lowest = array[j]; i < length; i++){
			if (lowest > array[i]){
				lowest = array[i];
				pos = i;
			}
			debug4("** selectionSortIteration1", "i", i, "j", j, "pos", pos, "lowest", lowest);
		}
		swap(array, j, pos);
		debug2("** selectionSortIteration2", "i", i, "j", j)
		printArray(array, length);
		if(DEBUG){printArray(array, length)}
	}
	debug0("<= selectionSortEnd");
}

void shellSort(int array[], int length){
	int gaps[] = {7985, 3549, 1577, 701, 301, 132, 57, 23, 10, 4, 1};
	int gapsPos = 0;
	for (; length < gaps[gapsPos]; gapsPos++){
		//printf("gapsPos, %3d\n", gaps[gapsPos]);
		;
	}
	//printf("gapsPos, %3d\n", gaps[gapsPos]);
	for (; gapsPos < 11; gapsPos++){
		int gap = gaps[gapsPos];
		for (int shift = 0; ((shift < gap) && (shift + gap <= length)); shift++){
			printf("gapsPos: %2d, gap: %2d, shift: %2d\n", gapsPos, gap, shift);
			int prev = array[shift];
			while (!shellSortIsSorted(array, length, shift, gap)){

			}
		}
	}
}

bool shellSortIsSorted(int array[], int length, int shift, int gap){
	printf("=> isShellSortedStart\n");
	int prev = array[shift];
	for (int i = shift + 1; i < length; i += gap){
		if (prev > array[i]){
			return false;
		}
		prev = array[i];
		printf("** isShellSortedIteration (%2d), (%2d)\n", i, prev);
	}
	printf("<= isShellSortedEnd\n");
	return true;
}

void shellSortBubbleSort(int array[], int length, int shift, int gap){
	printf("=> shellSortBu`bbleSortStart\n");
	for (int i = shift + gap; i < length; i += gap){
		int prev = array[shift];
		if (prev > array[i]){
			swap(array, i, i - gap);
		}
		prev = array[i];
		printf("** shellSortBubbleSortIteration, %2d, %2d\n", i, prev);
	}
	printf("<= shellSortBubbleSortEnd\n");
}






	