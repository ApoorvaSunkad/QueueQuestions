/*
Due to disadvantage that the space in the array is wasted to solve that issue 
we use the circular queue concept
*/
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
        front = -1;
        rear = -1;
    }

    //empty
    bool isEmpty(){
        if(front==-1){
            return true;
        }
        return false;
    }

    bool isFull(){
        return (rear+1)%size==front;
    }

    //push element into queue

    void Push(int data){
        //empty
        if(isEmpty()){
            front=rear=0;
            arr[0]= data;
            return;
        }
        //full
        else if(isFull()){
            cout << "Queue OverFlow\n";
            return;
        }
        //insert
        else{
            rear = (rear+1)%size;
            arr[rear] = data;
        }
    }

    int Pop(){
        //empty
        if(isEmpty()){
            cout << "Queue underflow\n";
            return -1;
        }

        else if(front==rear){
            front=rear = -1;
        }
        
        int val = arr[front];
        front = (front+1)%size;

        return val;

    }

    
    int Frontele(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[front];
        }
    }
};
int main(){
    
    MyQueue q(5);

    q.Push(11);
    q.Push(12);
    q.Push(13);
    q.Push(14);
    q.Pop();
    q.Push(15);
    //q.Push(16);

    // if(q.isEmpty()){
    //     cout << "Queue is empty " << endl;
    // }else{
    //     cout << "Queue is not empty " << endl;
    // }
    
    // if(q.isFull()){
    //     cout << "Queue is Full " << endl;
    // }else{
    //     cout << "Queue is not Full " << endl;
    // }
    
    cout << "The top ele is: " << q.Frontele() << endl;
    
    q.Pop();
    
    cout << "The top ele is: " << q.Frontele() << endl;
}