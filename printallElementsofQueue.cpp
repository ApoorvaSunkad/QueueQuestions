#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}

//If we want to retain elements in queue which means we can use vector to store

//T.C = O(N)
//S.C = O(N)

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    vector<int> v;

    while(!q.empty()){
        cout << q.front() << " ";
        v.push_back(q.front());
        q.pop();
    }

    for(int i = 0; i<v.size();i++){
        q.push(v[i]);
    }
}

//If its said that we should not use any extra space

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int n = q.size();
    while(n--){
        cout << q.front() << " ";
        q.push(q.front()); //always inserts at rear end
        q.pop();
    }
}