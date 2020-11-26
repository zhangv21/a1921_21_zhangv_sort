#include "Sort.h"

int main(){
	int a[N],i;
	srand(time(0));
	for(i=0;i<N;i++)
		a[i]=rand()%100;
	printf("初始数据为:");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	BubbleSort(a,N);
	printf("从前往后排序后数据:");
	for(i=0;i<N;i++)
		printf("%d ",a[i]); 
	printf("\n");
	InsertSort(a,N);
	printf("直接插入排序后数据:"); 
       	for(i=0;i<N;i++)
		printf("%d ",a[i]); 
	printf("\n");
	SelectSort(a,N);                                                                                             
       	printf("直接选择排序后数据:");
	for(i=0;i<N;i++)
		printf("%d ",a[i]); 
	printf("\n");
	QuickSort(a,N);                                                                                            
       	printf("快速排序后数据:");
	//MergeSort(a,N);
	//printf("排序后数据:");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
}
