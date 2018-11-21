#include "bubblesort.h"

int rand_seed = 10;

int rand() {
	rand_seed = rand_seed * 1103515245 + 12345;
	return (unsigned int) (rand_seed / 65536) % 32768;
}

void bubble_sort(int m, int a[]) {
	int x, y, t;
	for (x = 0; x < m - 1; x++)
		for (y = 0; y < m - x - 1; y++)
			if (a[y] > a[y + 1]) {
				t = a[y];
				a[y] = a[y + 1];
				a[y + 1] = t;
			}
}
