#include <iostream>
#define n 5
using namespace std;
int stacki[n];
int top=-1;
void push(int x){
    if (top == n-1){
        cout<<"full";
    }
    else{
        top++;
        stacki[top]=x;
    }
}
void pop(){
    if (top== -1){
        cout<<"no value";
    }
    else{
        cout<<"deleted value"<<stacki[top];
        top--;
    }
}
void display(){
    for(int i= top;i>=0;i--){
        cout<<"show"<<stacki[i];
    }
}
int main()
{
    push(1);
    push(33);
    push(9);
    display();
    pop();
    display();


}
