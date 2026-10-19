#include<iostream>
using namespace std;
#define max 5
struct stack
{
    int data[max];
    int top;
};

stack s1 , *p;

void init(){
    p=&s1;
    p->top=-1;
}

int full(){
    if(p->top==max-1)
        return 1;
    else
        return 0;
}

void push(int x){
    if(full())
        return;
    p->top++;
    p->data[p->top]=x;
}

int Empty(){
    if(p->top==-1)
        return 1;
    else
        return 0;
}

int pop(){
    int x;
    if(Empty())
        return -1;
    x=p->data[p->top];
    p->top--;
    return x;
}

void display() {
    if (Empty()) {
        cout << "Stack is empty";
        return;
    }

    cout << "Stack elements: "<<endl;
    for (int i = p->top; i >=0; i--) {
        cout <<"|"<< p->data[i] <<"|"<<endl;
    }
    cout<<"|__|"<<endl;
    cout << endl;
}

int main(){
    init();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    cout << "Popped elements: "<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<endl;
    cout<<"After Popped ";
    display();
}