#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    struct nodo*next;
    int num;

}Node;

Node *createNode(int val, Node *nodo){
    Node *succ=(Node*)malloc(sizeof(Node));

    if(nodo!=NULL) nodo->next=succ;
    succ->num=val;
    succ->next=NULL;
    return succ;

}

int main() {
    int array[]={1,2,3,4,5,6};

    Node *head=NULL;
    Node *cur=NULL;

    for(int i=0;i < 6; i++){
        cur = createNode(val,cur);
        if(head == NULL) head = cur;
    }

    cur=head;
    while(cur!=NULL){
        printf("%d\n" cur->num);
        cur=cur->next;
    }

    system("PAUSE");
    return 0;
}
