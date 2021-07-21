#ifndef HEWADER_SORT
#define HEWADER_SORT

#include<stdio.h>

typedef int T;

T testData[]={0,9,1,3,0,7,5,6,8,2,4,1,11,25,14};

int getTestDataSize(){
	return sizeof(testData)/sizeof(T);
}

void printArray(T *array,int len,char* tag){
    printf("---------------array len=%d---%s------------------\n",len,tag);
    for(int i=0;i<len;i++){
        printf("i=%d,data=%d \n",i,array[i]);
    }
}

void swap(T *array,int f,int t){
     T temp=array[f];
     array[f]=array[t];
     array[t]=temp;
}


#endif
