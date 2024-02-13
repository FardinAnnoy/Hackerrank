#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int>A(N);
        set<int>s;
        for(int i=0;i<N;i++){
            cin>>A[i];
            s.insert(A[i]);
        }
        for(auto it=s.begin();it!=s.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}