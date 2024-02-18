#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(v[i]);
    }
    int q;
    cin>>q;

    while(q--){
        int t;
        cin>>t;

        if(t==0){
        int x;
        cin>>x;

        pq.push(x);
        cout<<pq.top()<<endl;
    }else if(t==1){
        if(pq.empty()){
            cout<<"Empty"<<endl;
        }else{
            cout<<pq.top()<<endl;
        }
    }else if(t==2){
        if(pq.empty()){
            cout<<"Empty"<<endl;
        }else{
            pq.pop();
            if(!pq.empty()){
            cout<<pq.top()<<endl;
            }else{
                            cout<<"Empty"<<endl;

            }
        }
}
}
}