#include<stdio.h>
#include"SinglyLinkedList.h"


struct singlyNode* findMiddleNodeBruteForce(struct singlyNode** head){
    struct singlyNode* temp=*head;
    struct singlyNode* temp1=NULL;
    struct singlyNode* midNode=NULL;
    int n=1;
    int m=1;
    
    while(temp->next!=NULL){
        m=1;
        temp1=temp->next;
        while(temp1->next!=NULL){
            m++;
            temp1=temp1->next;
        }
        printf("n:%d  m:%d\n",n,m);
        if((n-1==m)||(n==m)){   
                midNode=temp;
                break;
            }
        n++;
        temp=temp->next;
    }
    
    return midNode;
}