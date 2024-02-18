#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string sentence;
        getline(cin,sentence);
        string word;
        string ans;
        int maxcounttrack=0;

        stringstream ss(sentence);
        map<string,int>mp;
        while(ss>>word){
            mp[word]++;
            //frequency testing
            if(mp[word]>maxcounttrack){
                maxcounttrack=mp[word];
                sentence=word;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>maxcounttrack) {
                maxcounttrack = it->second;
                ans=it->first;
            }
            else if(it->second==maxcounttrack){
                ans=it->first;
                break;
        }
        }

        cout<<sentence<<" "<<maxcounttrack<<endl;
    }
 }
