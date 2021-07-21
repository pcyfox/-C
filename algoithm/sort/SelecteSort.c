/**
 *选择排序：
 *核心思想：
 *从第一个位置开始，扫描剩余数组找到其中最小的数的位置并记录，然后与器始位交换
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
    for(int i=0;i<len-1;i++){
       int minPosition=i;	
	   for(int j=i+1;j<len;j++){
	      if(data[j]<data[minPosition]){
			 minPosition=j;
          }
	   }
       swap(data,minPosition,i);
    }
    return 1;
}

int sort2(T *data,int len){
    if(data==NULL||len<=1){
	   return -1;
    }
    for(int i=0;i<len/2;i++){
       int minPosition=i;	
       int maxPosition=len-i-1;	

	   for(int j=i+1;j<len;j++){
	      if(data[j]<data[minPosition]){
			 minPosition=j;
          }

	      if(data[j]>data[maxPosition]){
			 maxPosition=j;
          }
	   }

	   printf("at %d,  min=%d,max=%d \n",i,data[minPosition],data[maxPosition]);
       swap(data,minPosition,i);
	   swap(data,maxPosition,len-i-1);

    }
    return 1;
}


int main(void){
	int len=getTestDataSize();
    printArray(testData,len,"raw");
//    sort(testData,len);
    sort2(testData,len);
    printArray(testData,len,"after sort");
}

