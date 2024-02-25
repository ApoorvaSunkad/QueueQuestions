#include<bits/stdc++.h>
using namespace std;

//Linked list - Node creation
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};

//Creation of class Queue
class MyQueue{
    public:
    Node* front;
    Node* rear;

    MyQueue(){
        front=rear=nullptr;
    }

    bool isEmpty(){
        return front==nullptr;
    }

    void push(int x){
        if(isEmpty()){
            cout << "Pushed " << x << " into the queue " << endl;
            front = new Node(x);
            rear = front;
            return;
        }
        else{
            rear->next = new Node(x);
            if(rear->next == nullptr){
                cout << "Queue overflow " << endl;
                return;
            }
            cout << "Pushed " << x << " into the queue " << endl;
            rear = rear->next;
        }
    }

    void pop(){
        if(isEmpty()){
            cout << "Queue underflow"<< endl;
        }
        else{
            cout << "Popped " << front->data << " from the queue " << endl;
            Node* temp = front;
            front = front->next;
            delete(temp);
        }
    }
    int frontEle(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
};

int main(){
    MyQueue q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.pop();
    q.pop();
    
    cout << "Front ele: "<<  q.frontEle();
}