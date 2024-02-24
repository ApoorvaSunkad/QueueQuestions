#include<bits/stdc++.h>
using namespace std;

class MyQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    MyQueue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    //empty
    bool isEmpty(){
        if(front==-1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if(rear==size-1){
            return true;
        }
        return false;
    }

    //push element into queue

    void push(int data){
        //empty
        if(isEmpty()){
            front=rear=0;
            arr[0]= data;
            return;
        }
        //full
        if(isFull()){
            cout << "Queue OverFlow\n";
            return;
        }
        //insert
        arr[rear] = data;
        rear++;
    }

    int pop(){
        //empty
        if(isEmpty()){
            cout << "Queue underflow\n"
            return -1;
        }

        if(front==rear){
            front=rear = -1;
        }
        int val = arr[front];
        front++;

        return val;

    }

    
    int Frontele(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
};
int main(){
    
    MyQueue q(5);

    q.Push(11);
    q.Push(12);
    q.Push(13);
    q.Push(14);
    q.Push(15);
    q.Push(16);

    if(q.isEmpty()){
        cout << "Queue is empty " << endl;
    }else{
        cout << "Queue is not empty " << endl;
    }
    
    if(q.isFull()){
        cout << "Queue is Full " << endl;
    }else{
        cout << "Queue is not Full " << endl;
    }
    
    cout << "The top ele is: " << q.Frontele() << endl;
    
    q.Pop();
    
    cout << "The top ele is: " << q.Frontele() << endl;
}