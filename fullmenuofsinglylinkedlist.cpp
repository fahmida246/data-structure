#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int item;
    Node *next;

    Node(int newData)
    {
        item = newData;
        next = NULL;
    }
};

class SLL
{
public:
   // Node *head =NULL;
   // Node *tail =NULL;
   // Node *newdata =NULL;
    Node *head, *tail, *newdata;

    void add(int item)
    {
        newdata = new Node(item);
        if(head==NULL)
        {
            head = newdata;
            tail = newdata;
        }
        else
        {
            tail->next = newdata;
            tail = newdata;
        }
    }


    void display()
    {
        Node *temp= head;
        while(temp!= NULL)
        {
            cout<<temp->item<<"-> ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void addbegin(int item)
    {
        Node *ab = new Node(item);
        if(head == NULL)
        {
            head = ab;
            tail = ab;
        }
        else
        {
            ab->next = head;
            head = ab;


        }
    }
    int sizee()
    {
        int countt = 0;
        Node *temp= head;
        while(temp!= NULL)
        {
            countt++;
            temp=temp->next;
        }
        return countt;
    }
    void addanypos (int items,int position)
    {
        Node *temp =head,*temp1;

        newdata = new Node(items);

        if(position==1)
            addbegin(items);

        else if(position==sizee())
            add(items);
        else
        {
            for(int i=1; i<position; i++)
            {
                temp1 = temp;
                temp = temp->next;
            }
            temp1->next = newdata;
            newdata->next = temp;
        }
    }

    bool contains(int items)
    {
        Node *look = head;

        while (look != NULL){
            if(look->item == items){
               return true;
            }
            look = look->next;
        }
        return false;
    }

    void isEmpty()
    {
        Node *emty = head;
        if( (emty) == NULL )
        {
            cout<< "TRUE"<<endl ;

        }
        else
        {
            cout<< "FALSE"<<endl ;

        }
    }

    int get(int position)
    {
        Node* current = head;

        int count = 0;
        while (current != NULL)
        {
            if (count == position)
                cout<<((current->item)-1)<<endl;
            count++;
            current = current->next;
        }
    }

    int indexof(int items)
    {

        Node* current = head;

        int count = 0;
        while (current != NULL)
        {
            if (current->item == items)

                cout<<(current->next)+1<<endl;
            count++;
            current = current->next;

        }
    }
void removefirst(){
    Node *temp;
    temp=head;
    head= temp->next;
    delete temp;

}
void removelast(){
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
void remove(int n){
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
void searchi(){
    Node *temp;
    temp=head;
    int searchi;
    cout<< "enter search";
    cin>> searchi;
    if (temp->data= searchi){
        cout<<" number found";
    }
    else{
        cout<< "not found";
    }



    void reverse1()
    {
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
    }
    void sortt()
    {

        int i, j, k, tempData;
        Node *current;
        Node *last;

        int size = sizee();
        k = size ;

        for ( i = 0 ; i < size - 1 ; i++, k-- )
        {
            current = head;
            last = head->next;

            for ( j = 1 ; j < k ; j++ )
            {

                if ( current->item > last->item )
                {
                    tempData = current->item;
                    current->item = last->item;
                    last->item = tempData;


                }

                current = current->next;
                last = last->next;
            }
        }
    }


};



int main()
{

    SLL *s1 = new SLL();

    while(1)
    {
        cout<<"1. Add item to end of the List: "<<endl
            <<"2. Add item at the beginning of the list :"<<endl
            <<"3. Display :"<<endl
            <<"4. Add Any Position :"<<endl
            <<"5. Size of the link-List :"<<endl
            <<"6. Find a Item : "<<endl
            <<"7. Is the link-list Empty ? "<<endl
            <<"8. Enter a position & get the value of that position :"<<endl
            <<"9. Remove a item from last : "<<endl
            <<"10.Remove a item from first :"<<endl
            <<"11.Remove a item from Any-Position : "<<endl
            <<"12.Reversing The Items : "<<endl
            <<"13.sorting The Items : "<<endl
            <<"14.Enter a value & get the position "<<endl
            <<"15.Exit !!! "<<endl;
	<<"16. searching<< end1;




        int num,items,position;
        cout<< endl;
        cout<< "Enter your option:"<<endl;
        cin>>num;

        switch(num)
        {
        case 1:
            cout<< "Enter Item:"<<endl;
            cin>>items;
            s1->add(items);
            break;
        case 2:
            cout<< "Enter data: "<<endl;
            cin>>items;
            s1->addbegin(items);
            break;
        case 3:
            cout<< "Display :  "<<endl;
            s1->display();
            break;
        case 4:
            cout<< "Enter data:"<<endl;
            cin>>items;
            cout<< "Enter position:"<<endl;
            cin>>position;
            s1->addanypos (items,position);
            break;

        case 5:
            cout << s1->sizee() << "\n";
            break;

        case 6:
            cout<< "Enter data : "<<endl;
            cin>>items;
            if(s1->contains(items)) cout << "TRUE\n";
            else cout << "FALSE\n";
            break;
        case 7:
            s1->isEmpty();
            break;
        case 8:
            cout<< "Enter position : "<<endl;

            cin>>position;
            s1->get(position);
            break;

        case 9:
            cout<<"Enter your item " ;
            s1->removelast();
            s1->display();
            break;

        case 10:
            cout<<"Enter your item " ;
            s1->removefirst();
            s1->display();
            break;

        case 11:
            cout<<"Enter your item position " ;
            cin>>position;
            s1->remove
            (position);
            break;

        case 12:
            s1->reverse1();
            s1->display();

            break;
        case 13:
            s1->sortt();
            s1->display();
            break;

        case 14:
            cout<< "Enter the value : "<<endl;

            cin>>items;
            s1->indexof(items);
            break;
        case 15:
            break;
	case 16:
            s1->searchi;
            
            break;
        }

    }
}



