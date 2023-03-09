#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *temp, *head=0,*prevnode,*nextnode;
void insertatfirst(int x)
{
    Node *newnode = new Node();
    newnode->data=x;
    newnode->next= head;
    head=newnode;
}

void insertatlast(int x)
{
    Node *newnode = new Node();
    newnode ->data=x;
    temp=head;
    while(temp->next!=0)
    {
        temp= temp->next;
    }
    temp->next= newnode;
    newnode->next=0;
}
void insertatpos(int pos,int x)
{
    int i=0;
    Node *newnode = new Node();
    newnode->data=x;
    temp=head;

    if(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next= newnode;


}
void deleteatfirst()
{
    temp=head;
    head= temp->next;
    delete temp;
}
void deleteatpos(int pos)
{
    int i=0;
    temp=head;
    if (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next= nextnode->next;
    delete nextnode;
// eta hocche temp node ta current node dekhae so temp next ja ta delete korte hobe,
//akhon new node temp->next hobe and oitar next er value newnode next


}
void deleteatlast()
{
    temp=head;
    while(temp->next!=0)
    {
        prevnode= temp;
        temp=temp->next;
    }
    prevnode->next =0;
    delete temp;


}
void display()
{
    temp= head;
    while(temp!=0)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    insertatfirst(4);
    insertatfirst(9);
    insertatlast(99);
    insertatlast(79);
    insertatpos(2,50);
    cout<<"insertion display"<<endl;
    display();
    deleteatfirst();
   deleteatlast();
   cout<<"after deleting"<<endl;
    display();
    cout<<"final deletion"<<endl;
    deleteatpos(2);
    display();
}
