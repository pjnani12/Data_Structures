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
        cout<<tmp->data<<endl;
        tmp=tmp->next;
    }
}
void insert_at_head(int value){
    struct Node* new_node = new Node();
    new_node->data=value;
    new_node->next=head;
    head=new_node;
}
void inset_at_position(int pos,int value){
    struct Node* new_node = new Node();
    struct Node* tmp=new Node();
    struct Node* add_car=new Node();
    tmp=head;
    int count=1;
    new_node->data=value;
    if(pos==1){
        new_node->next=head;
        head=new_node;
        return;
    }
    while(count<pos-1){
        count++;
        tmp=tmp->next;
    }
    add_car=tmp->next;
    tmp->next=new_node;
    new_node->next=add_car;
    return;
}
void enqueue(int value){
    struct Node* new_node = new Node();
    struct Node* tmp=new Node();
    tmp=head;
    new_node->data=value;
    new_node->next=NULL;
    if(head == NULL){
        head=new_node;
        return;
    }
    while(tmp->next != NULL){
        tmp=tmp->next;
    }
    tmp->next=new_node;
    return;
}
int main() {
	//cout<<sizeof(head)<<endl;
	enqueue(10); // insert at tail
	enqueue(20);
	enqueue(30);
	insert_at_head(40);
	inset_at_position(1,50);//position, value
	display();
	return 0;
}
