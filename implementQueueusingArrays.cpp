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

    void Push(int data){
        if(front==size){
            cout << "Queue is full " << endl;
        }
        arr[rear] = data;
        rear++;
    }

    int Pop(){
        if(front==rear){
            return -1; // meaning queue is empty
        }

        int val = arr[front];
        arr[front] = -1;
        front++;

        if(front==rear){
            front = 0;
            rear = 0;
        }
        return val;
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        return false;
    }

    int Frontele(){
        if(front==rear){
            return -1;
        }
        return arr[front];
    }

    int Size(){
        return size;
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
        cout << "Queue is not empty "<< endl;
    }
    
    cout << "The top ele is: " << q.Frontele() << endl;
    
    q.Pop();
    
    cout << "The top ele is: " << q.Frontele() << endl;
    
    cout << "Size of queue is: " << q.Size() << endl;
    
    q.Pop();
    
    cout << "The top ele is: " << q.Frontele() << endl;
    
    cout << "Size of queue is: " << q.Size() << endl;
    
}