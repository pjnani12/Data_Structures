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
void dequeue(){ // deletion at head
    Node* tmp=head;
    head=head->next;
    free(tmp);
    tmp=NULL;
    return;
}
void deletion_at_tail(){
    Node* tmp=head;
    Node* last=head;
    if(tmp == NULL){
        return;
    }
    while(tmp->next->next != NULL){
        tmp=tmp->next;
    }
    last=tmp->next;
    tmp->next=NULL;
    free(last);
    last=NULL;
    return;
}
void delete_at_position(int pos){
    Node* tmp=head;
    Node* add_car=head;
    int count=1;
    if(pos==1){
        head=head->next;
        free(tmp);
        tmp=NULL;
        return;
    }
    while(count<=pos-2){
        count++;
        tmp=tmp->next;
    }
    add_car=tmp->next;
    tmp->next=add_car->next;
    free(add_car);
    add_car=NULL;
    return;
}
void delete_by_value(int value){
    Node* tmp=head;
    Node* prev=head;
    if(tmp->data == value){
        head=head->next;
        free(tmp);
        tmp=NULL;
        return;
    }
    while(tmp->data != value){
        prev=tmp;
        tmp=tmp->next;
    }
    prev->next=tmp->next;
    free(tmp);
    tmp=NULL;
    return;
}
int main() {
	//cout<<sizeof(head)<<endl;
	enqueue(10); // insert at tail
	enqueue(20);
	enqueue(30);
	insert_at_head(40);
	inset_at_position(1,50);//position, value
	dequeue();
	deletion_at_tail();
	delete_at_position(1);//position
	insert_at_head(30);
	insert_at_head(20);
	enqueue(90);
	delete_by_value(20);//position
	display();
	return 0;
}
