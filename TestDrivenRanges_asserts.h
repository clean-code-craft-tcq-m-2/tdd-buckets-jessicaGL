#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void sortarray(int arr[], int n);
void defineranges(int arr[], int n);
void Output(int StartofRange[], int EndofRange[], int CountinRange[], int size);
bool ArraySorted_test(int input[], int inputsorted[], int n);
int RangeCount_Test(int input[], int n, int low, int up);
char *Rangeformat_Test(int low, int up,int count);
