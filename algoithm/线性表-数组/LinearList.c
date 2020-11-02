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
   if(!list){
       return 0; 
   }
   for(int i=0;i<MAXSIZE;i++){
       list->data[i]=i;
       list->length++;
   }
}

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
    for(k;k<list->length-1;k++){
       list->data[k]=list->data[k+1]; 
    }
}


int main(){
    LinearList *list;
    list=(LinearList*)malloc(sizeof(LinearList));
    initList(list);
    for(int i=0;i<MAXSIZE;i++){
        printf("element:%d \n" ,list->data[i]);    
    }
    ElementType *delete;
    deleteElement(list,2,delete);
    for(int i=0;i<MAXSIZE;i++){
        printf("after delete element:%d \n" ,list->data[i]);    
    }
    printf("deleteElement=%d",delete);
}
