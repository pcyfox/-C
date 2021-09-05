

/**
 *归并排序：
 *核心思想：
 *
 *特点：
 *稳定性:稳定
 *时间复杂度：
 *空间复杂度：O(n) 
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




void merge2(int *data,int l,int m,int r){
    printf("-----------merge--------------\n");
    printf("l=%d,m=%d,r=%d\n",l,m,r);
	int len =r-l+1;
	int mid=m;
	int i=l;
	int j=m+1;
	int k=i;
	while(i<=mid&&j<=r){
		if(data[i]<=data[j]){
			data[k++]=data[i++];
		}else{
			data[k++]=data[j++];
		}
	}
	while(i<=mid)data[k++]=data[i++];
    while(j<=r)data[k++]=data[j++];
}


void merge(int *data,int l,int m,int r){
   int h=sizeof(data)/2;
  

   while(){}



}






int main(void){
    int testData[]={1,3,4,6,8,5,7,2};
    printArray(testData,8,"raw");

    merge(testData,0,3,7);
    printArray(testData,8,"after sort");
}




