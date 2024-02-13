#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int>&a,pair<string,int>&b){
    if(a.first==b.first){
    return a.second>b.second;
  }
    return a.first<b.first;
};
int main(){
    int N;
    cin>>N;
    vector<pair<string,int>>v(N);
    for(int i=0;i<N;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
     for(int i=0;i<N;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
}
}