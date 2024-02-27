/*
Given an integer K and a queue of integers, we need to reverse the order of 
the first K elements of the queue, leaving the other elements in the same 
relative order.

Only following standard operations are allowed on queue.

enqueue(x) : Add an item x to rear of queue
dequeue() : Remove an item from front of queue
size() : Returns number of elements in queue.
front() : Finds front item.
Note: The above operations represent the general processings. In-built 
functions of the respective languages can be used to solve the problem.

Example 1:

Input:
5 3
1 2 3 4 5
Output: 
3 2 1 4 5
Explanation: 
After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.
Example 2:

Input:
4 4
4 3 2 1
Output: 
1 2 3 4
Explanation: 
After reversing the given
input from the 4th position the resultant
output will be 1 2 3 4.
Your Task:
Complete the provided function modifyQueue() that takes queue and K as parameters 
and returns a modified queue. The printing is done automatically by the driver code.

Expected Time Complexity : O(N)
Expected Auxiliary Space : O(K)

Constraints:
1 <= K <= N <= 105


*/

//T.C = 2O(K) + 2O(N)
//S.C = O(K)
queue<int> modifyQueue(queue<int> q, int k) {

    stack<int> st;
    vector<int> v;
    
    while(k>0){
        st.push(q.front());
        q.pop();
        k--;
    }
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    for(int i = 0; i<v.size();i++){
        q.push(v[i]);
    }
    
    return q;
}


//Optimsied solution
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    stack<int> st;
    
    
    while(k>0){
        st.push(q.front());
        q.pop();
        k--;
    }
    int n = q.size();
    
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    
    while(n--){
        q.push(q.front());
        q.pop();
    }
    return q;
}