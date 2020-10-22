
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
   int data;
   struct Node *next;
}Node;


//创建循环链表
Node *create(int num){
    Node *p=NULL, *head;
    //创建头节点
    head=(struct Node *)malloc(sizeof(Node));
    p=head;

    int i=0;
    Node *createNode;
    if(num>0){
	  while(i<num){
	      i++; 
              createNode=(struct Node *)malloc(sizeof(Node));
	      createNode->data=i;
	      //当创建第一个节点时，游标节点与头节点是同一个对象，
	      //将游标连接到新创建的节点，等价于将头节点链接到这个新节点，
	      //然后自己点移动到这个新的节点上（离开头节点）
	      p->next=createNode;
	      p=createNode;
	  }

      p->next=head->next; 
      free(head);
      return p->next;
    }else{
	 return NULL;
    }
};

int main(){
  Node *head=create(41);
  printf("head->data=%d\n",head->data);
  Node *p=head;
  while(p->next!=head){
      p=p->next;
      printf("p->data=%d\n",p->data);
  }
   return 0;
}


