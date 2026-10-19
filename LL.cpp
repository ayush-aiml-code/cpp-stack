#include<iostream>
using namespace std;
struct Lstack
{
    int data;
    Lstack *next;
};

Lstack *top, *temp ,*ttemp;

void init(){
    top=temp=ttemp=NULL;
}

void push(int x){
    temp= new Lstack;
    if(temp==NULL)
        return;
    temp->data=x;
    temp->next=top;
    top=temp;
}

int pop(){
    int x;
    if(top==NULL)
        return -1;
    temp=top;
    x=top->data;
    top=top->next;
    temp->next=NULL;
    delete temp;
    return x;
}

void display(){
    if(top==NULL){
        cout<<"Stack is empty";
        return;
    }


    temp = top;
    cout << "Stack elements are: "<<endl;
    while(temp != NULL){
        cout <<"|"<< temp->data<<"|" << endl;
        temp = temp->next;
    }
    cout<<"|__|"<<endl;
    
}

int main()
{
    init();

    push(10);
    push(20);
    push(30);
    display();
    cout<<endl;
    cout << "Popped element: " << pop() <<endl;
    cout << "Popped element: " << pop() <<endl;

    cout<<endl;
    cout<<"After pop ";
    display();

    return 0;
}
