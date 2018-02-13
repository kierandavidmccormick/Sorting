#define LENGTH 10
#define MAXNUM 99
#define MINNUM 0
#define debug0(x); if(DEBUG){printf(x "\n");}
#define debug1(x, y, z); if(DEBUG){printf(x ", " y ": %2d\n", z);}
#define debug2(x, y, z, w, v); if(DEBUG){printf(x ", " y ": %2d, " w ": %2d\n", z, v);}
#define debug3(x, y, z, w, v, u, t); if(DEBUG){printf(x ", " y ": %2d, " w ": %2d, " u ": %2d\n", z, v, t);}
#define debug4(x, y, z, w, v, u, t, s, r); if(DEBUG){printf(x ", " y ": %2d, " w ": %2d, " u ": %2d, " s ": %2d\n", z, v, t, r);}
#define debug5(x, y, z, w, v, u, t, s, r, q, p); if(DEBUG){printf(x ", " y ": %2d, " w ": %2d, " u ": %2d, " s ": %2d, " q ": %2d\n", z, v, t, r, p);}
#define debug6(x, y, z, w, v, u, t, s, r, q, p, o, n); if(DEBUG){printf(x ", " y ": %2d, " w ": %2d, " u ": %2d, " s ": %2d, " q ": %2d, " o ": %2d\n", z, v, t, r, p, n);}
#define debug7(x, y, z, w, v, u, t, s, r, q, p, o, n, m, l); if(DEBUG){printf(x ", " y ": %2d, " w ": %2d, " u ": %2d, " s ": %2d, " q ": %2d, " o ": %2d, " m ": %2d\n", z, v, t, r, p, n, l);}
#define debug8(x, y, z, w, v, u, t, s, r, q, p, o, n, m, l, k, j); if(DEBUG){printf(x ", " y ": %2d, " w ": %2d, " u ": %2d, " s ": %2d, " q ": %2d, " o ": %2d, " m ": %2d, " k ": %2d\n", z, v, t, r, p, n, l, j);}
#define debug9(x, y, z, w, v, u, t, s, r, q, p, o, n, m, l, k, j, i, h); if(DEBUG){printf(x ", " y ": %2d, " w ": %2d, " u ": %2d, " s ": %2d, " q ": %2d, " o ": %2d, " m ": %2d, " k ": %2d, " i ": %2d\n", z, v, t, r, p, n, l, j, h);}
#define debug10(x, y, z, w, v, u, t, s, r, q, p, o, n, m, l, k, j, i, h, g, f); if(DEBUG){printf(x ", " y ": %2d, " w ": %2d, " u ": %2d, " s ": %2d, " q ": %2d, " o ": %2d, " m ": %2d, " k ": %2d, " i ": %2d, " g ": %2d\n", z, v, t, r, p, n, l, j, h, f);}
#define DEBUG false

void setArray(int length, int array[]);
int gRand(int max, int min);
void printArray(int array[], int length);
void sort(int array[], int length);
bool isSorted(int array[], int length);
void swap(int array[], int a, int b);
void checkSorted(int array[], int length);

void bubbleSort(int array[], int length);
void selectionSort(int array[], int length);
void shellSort(int array[], int length);
	bool shellSortIsSorted(int array[], int length, int shift, int gap);