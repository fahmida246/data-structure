#include <iostream>
#define n 5
using namespace std;

int queuei[n];
int rear = -1;
int fronti =-1;
void enqueue(int x){
    if (rear == n-1){
        cout<< "que is full";
    }
    else if(rear== -1 && fronti== -1){
        rear=fronti=0;
        queuei[rear]=x;
    }
    else{
        rear++;
        queuei[rear]=x;
    }
}
void dequeue(){
    if (rear ==-1 and fronti== -1){
        cout<<"no value";
    }
    else if (rear== fronti){
        rear = fronti = -1;
    }
    else{
        cout<<queuei[fronti];
        fronti++;
    }
}
void display(){
    for(int i = fronti;i<rear+1;i++){
        cout<<"sho"<<queuei[i]<<endl;
    }
}

int main()
{
    enqueue(1);
    enqueue(20);
    enqueue(99);
    display();
    dequeue();
    display();

    return 0;
}
