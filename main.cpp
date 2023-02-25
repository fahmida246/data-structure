#include <iostream>

using namespace std;
struct Node{
int data;
Node *next;};
Node *head=0,*tail=0;
void insertatfirst(int x){
    Node *newnode=new Node();
    newnode->data=x;
    if(head==NULL){
        head=newnode=tail;
    }
    else{
    newnode->next=head;
    head=newnode;
    }

}
void insertatlast(int x){
    Node *newnode=new Node();
    newnode->data=x;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        newnode->next=0;
        tail->next=newnode;
        tail=newnode;
    }
}
void insertatposition(int n,int x){
    Node *newnode=new Node();
    newnode->data=x;
    if(n==1){
        newnode->next=head;
        head=newnode;
    }
    else{
        Node *temp=head;
        for(int i=1;i<n-1;i++){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=temp->next;


    }

}
void removeatfirst(){
    Node*temp=head;
    head=temp->next;
    delete temp;
}

void removeatlast(){
     Node *temp,*prenode;
    temp=head;
    while(temp->next!=0)
    {
    prenode=temp;
    temp= temp->next;
    delete temp;
}
if(temp==head)
{
    head=0;
    delete head;
}
else
{
    prenode-> next=0;
    delete temp;
}
}
void removeatposition(int n){
    Node *nextnode,*temp;
    int i=1;
    temp=head;

    while(i<n-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next= nextnode->next;
    delete nextnode;
}
void reverse(){
        Node *prevnode,*currentnode,*nextnode;
        prevnode=0;
        currentnode=nextnode=head;
        while(nextnode!=0)
        {
            nextnode=nextnode->next;
            currentnode->next=prevnode;
            prevnode=currentnode;
            currentnode=nextnode;
        }
        head=prevnode;

}void display()
    {
        Node *temp= head;
        while(temp!= NULL)
        {
            cout<<temp->data<<"-> ";
            temp = temp->next;
        }
        cout<<endl;
    }


int main()
{
    insertatfirst(3);
    insertatlast(6);
    insertatposition(2,4);
    display();

    return 0;
}
