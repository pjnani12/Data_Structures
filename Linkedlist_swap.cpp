#include <iostream>
using namespace std;

struct Node{
  int data;
  struct Node* next;
};
struct Node* head=NULL;
void display(){
    struct Node* tmp=new Node();
    tmp=head;
    while(tmp != NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_at_head(int val){
    struct Node* new_node=new Node();
    new_node->data=val;
    new_node->next=head;
    head=new_node;
}
void swap_by_positions(int pos1,int pos2){
    struct Node* a=head;
    struct Node* a_prev=NULL;
    struct Node* b=head;
    struct Node* b_prev=NULL;
    int i=1;
    while(i!=pos1){
        a_prev=a;
        a=a->next;
        i++;
    }
    i=1;
    while(i!=pos2){
        b_prev=b;
        b=b->next;
        i++;
    }
    if(a_prev == NULL){
        head=b;
        b_prev->next=a;
    }
    if(b_prev == NULL){
        head=a;
        a_prev->next=b;
    }
    if(b_prev != NULL&&a_prev !=NULL){
        a_prev->next=b;
        b_prev->next=a;
    }
    
    Node* temp;
    temp=b->next;
    b->next=a->next;
    a->next=temp;
    return;
}
int main() {
	insert_at_head(40);
	insert_at_head(30);
	insert_at_head(20);
	insert_at_head(10);
	insert_at_head(1);
	display();
	swap_by_positions(4,5);//pos1,pos2
	display();
	return 0;
}
