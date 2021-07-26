
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


int main(void){
	int len =getTestDataSize();
    printArray(testData,len,"raw");
    sort(testData,len);
    printArray(testData,len,"after bubble sort");
}




