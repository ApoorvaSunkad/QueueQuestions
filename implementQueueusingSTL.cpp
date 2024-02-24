#include<bits/stdc++.h>
using namespace std;

int main(){

    //Creation of queue
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);

    cout << "size of queue is: " << q.size() << endl;
    q.pop(); //deleting from queue, 11 is popped (because FIFO)
    
    cout << "size of queue is: " << q.size() << endl; //size of queue
    
    cout << "Is empty " << q.empty() << endl; //0 -> to check if queue is empty or not
    
    
    cout << "first element is: " << q.front() << endl; //first element of queue

    cout << "last element is: " << q.back() << endl; //last element of queue
}