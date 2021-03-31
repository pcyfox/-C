/**
 *选择排序：
 *核心思想：
 *从0个位置开始，到length-1结束，找到剩余素组中最小值得位置，并将它与开始位置的数交换
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
       		  swap(data,minPosition,j);
         }
	  }
    }
    return 1;
}


int main(void){
	int len=11;
    T data[]={0,9,1,3,0,7,5,6,8,2,4};
    printArray(data,len,"raw");
    sort(data,len);
    printArray(data,len,"after sort");
}

