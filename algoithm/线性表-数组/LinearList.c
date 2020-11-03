#include <stdlib.h>
#include <stdio.h>
#define MAXSIZE 20
typedef int ElementType;

typedef struct
{
    ElementType data[MAXSIZE];
    int length;
} LinearList;



int initList(LinearList *list){
   //list=(struct LinearList*)malloc(sizeof(LinearList));
   if(!list){
       return 0; 
   }
   for(int i=0;i<MAXSIZE;i++){
       list->data[i]=i;
       list->length++;
   }
   return 1;
}
//
int deleteElement(LinearList *list,int i,ElementType *e){
    if(i>=MAXSIZE||i<1){
        return 0; 
    }

    if(!list){
        return 0; 
    }

    if(i>=list->length){
        return 0; 
    }


    int k=i-1;
    e=list->data[k];
    printf("***------>deletedElement=%d\n",e);

    for(k;k<list->length-1;k++){
       list->data[k]=list->data[k+1]; 
    }
    list->length--;
}


int main(){
    LinearList *list;
    list=(struct LinearList*)malloc(sizeof(LinearList));
    int initRet=initList(list);
    printf("initRet:%d \n" ,initRet);    
    if(!initRet){
	return 0;
    }
    for(int i=0;i<MAXSIZE;i++){
        printf("element:%d \n" ,list->data[i]);    
    }
    ElementType *deletedElement;
    deleteElement(list,3,deletedElement);
    printf("------>deletedElement=%d \n",deletedElement);
    printf("---------------------------------------------\n");
    for(int i=0;i<MAXSIZE;i++){
        printf("after delete element:%d \n" ,list->data[i]);    
    }
    
}



