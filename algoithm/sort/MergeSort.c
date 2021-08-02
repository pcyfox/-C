

/**
 *插入排序：
 *核心思想：
 *从第一个书开始（不是第0个）依次向前比较，把较大的数向后挪动
 *特点：
 *稳定性:稳定
 *时间复杂度：最好与最坏的情况都是：O(n^2) 
 *空间复杂度：O(1) 
 */
#include "Tool.c"
#include <stdlib.h>

int sort(T *data,int len){
	for(int i=1;i<len;i++){
		for(int j=i;j>0;j--){
			if(data[j]<data[j-1]){
				swap(data,j,j-1);
			  }
		 }
	}
	return 1;
}


int merge(int *data,int len){
    printArray(data,len,"data");
    //int *temp=(int *)malloc(sizeof(int)*len);
    int temp[len];
	int mid=len>>1;
	int i=0;
	int j=mid+1;
	int k=0;
	while(i<=mid&&j<=len-1){
		if(data[i]<=data[j]){
			temp[k]=data[i];
			i++;
			k++;
		}else{
			temp[k]=data[j];
			j++;
			k++;
		}
	}
	while(i<=mid)temp[k++]=data[i++];
	while(j<=len-1)temp[k++]=data[j++];
    printArray(temp,len,"temp");
	return 1;
}



int main(void){
//	int len =getTestDataSize();
//  printArray(testData,7,"raw");
    int testData[]={1,3,4,6,2,5,7};
    merge(testData,7);
    //printArray(testData,7,"after bubble sort");
}




