/**
 *冒泡排序：
 *核心思想：
 *到length-1结束，两两比较，将最大的交换到后面，直到最后一个位置放置的是该轮比较中最大的一个数
 *特点：
 *稳定性-不稳
 *时间复杂度：最好与最坏的情况都是：O(n^2) 
 *空间复杂度：O(1) 
 */

#include"Tool.c"

int sort(T *data,int len){
    if(data==NULL||len<=1){
	   return -1;
    }
	//先找出前n个数中最大的那个数，并把它放在最后,然后缩小规模重复操作
    for(int i=len-1;i>0;i--){
	  for(int j=0;j<i;j++){
		  if(data[j]>data[j+1]){
       	     swap(data,j,j+1);
	   	  }
	  }
    }

    return 1;
}


int main(void){
	int len =TEST_DATA_LEN;
    printArray(testData,len,"raw");
    sort(testData,len);
    printArray(testData,len,"after bubble sort");
}

