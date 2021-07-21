/**
 *冒泡排序：
 *核心思想：
 *长度为n的数组，先找出前n个数中最大的那个数，并把它放在最后,然后缩小规模重复操作
 *特点：
 *稳定性-不稳
 *时间复杂度：最好与最坏的情况都是：O(n^2) 
 *空间复杂度：O(1) 
 */

#include"Tool.c"

//两两比较，找到最大的数交换到后面
void bringMaxToTrail(T *data,int len){
	  for(int j=0;j<len;j++){
		  if(data[j]>data[j+1]){
       	     swap(data,j,j+1);
	   	  }
	  }

	printf("-----bing at %d\n",len);
    printArray(data,len,"after bring max");
}

int sort(T *data,int len){
    if(data==NULL||len<=1){
	   return -1;
    }
    for(int i=len-1;i>0;i--){
	  bringMaxToTrail(data,i);
    }
    return 1;
}


int main(void){
	int len =getTestDataSize();
    printArray(testData,len,"raw");
    sort(testData,len);
    printArray(testData,len,"after bubble sort");
}

