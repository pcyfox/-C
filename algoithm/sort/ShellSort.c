
/**
 *希尔排序：插入排序的升级版
 *核心思想：
 *设定一个起始间隔H，从0开始，每隔H,选出一个数出来组成数组并按照插入排序方旭，
 * 然后再从1开始继续上述过程，当完成一轮操作后，间隔H缩小1，重复上述过程，直到间隔H=1时在排一遍。
 * 间隔大的时候挪动的次数少，间隔小的时候挪动距离短
 *特点：
 *稳定性:不稳定
 *时间复杂度：最好与最坏的情况都是：O(n^2) 
 *空间复杂度：O(1) 
 */
#include "Tool.c"

int sort(T *data,int len){
    for(int h=len>>1;h>0;h/=2){
		printf("sort called with h=%d\n",h);
		for(int i=h;i<len;i++){
			for(int j=i;j>=h+1;j-=h){
				if(data[j]<data[j-h]){
					swap(data,j,j-h);
				  }
			 }
		}
	}

	return 1;
}
/**
 *knuth 序列：h=3*h+1;1<=h<=len 
 */
int sort2(T *data,int len){
   int h=1;
   while(h<=len/3){
	   h=3*h+1;
   } 

   for(int gap=h;gap>0;gap=(gap-1)/3){
		printf("sort called with gap=%d\n",gap);
		for(int i=h;i<len;i++){
			for(int j=i;j>=h+1;j-=h){
				if(data[j]<data[j-h]){
					swap(data,j,j-h);
				  }
			 }
		}
	}

	return 1;
}

int main(void){
	int len =getTestDataSize();
    printArray(testData,len,"raw");
    //sort(testData,len);
    sort2(testData,len);
    printArray(testData,len,"after shwll sort");
}




