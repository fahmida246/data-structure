#include <iostream>

using namespace std;
struct Node{
int data;
Node *next;
};
Node *temp, *head=0,*prevnode;
int i=1;
void insertatfirst(int x){
  Node *newnode = new Node();
  newnode->data=x;
  newnode->next= head;
  head=newnode;
  }

void insertatlast(int x){
    Node *newnode = new Node();
    newnode ->data=x;
    temp=head;
    while(temp->next!=0){
        temp= temp->next;
    }
    temp->next= newnode;
    newnode->next=0;
}
void insertatpos(int x,int pos){
    Node *newnode = new Node();
    newnode->data=x;
    temp=head;

        if(i<pos){
            temp=temp->next;
            i++;
        }
    newnode->next = temp->next;
    temp->next= newnode;


}
void deleteatfirst(){
    temp=head;
    head= temp->next;
    delete temp;


}
void deleteatpos(int pos){
    temp=head;



}
void deleteatlast(){
    temp=head;
    while(temp->next!=0){
        prevnode= temp;
        temp=temp->next;
    }
    prevnode->next =0;
    delete temp;


}
void display(){
    temp= head;
    while(temp!=0){
            cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    insertatfirst(4);
    insertatfirst(9);
    insertatlast(99);
    deleteatfirst();
    deleteatlast();
    display();
}
