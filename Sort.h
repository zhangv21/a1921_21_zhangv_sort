#ifndef Sort_h
#define Sort_h
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 20

void BubbleSort(int a[],int n);
void InsertSort(int a[],int n);
void SelectSort(int a[],int n);
int Partition(int a[],int low,int high);
int Partition2(int a[],int low,int high);
void Qsort(int a[],int low,int high); 
void QuickSort(int a[],int n);


#endif
