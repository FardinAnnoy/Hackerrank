#include <bits/stdc++.h> 
using namespace std;

int main() { 
int T; 
cin >> T;
 cin.ignore();
 // ignore the newline character left in the input buffer after reading T

while (T--) {
 string sentence;
 getline(cin, sentence); 
string word; 
string ans; 
int mx = 0; 
stringstream ss(sentence);
 map<string, int> mp; 
while (ss >> word) { 
mp[word]++; 
} 
for (auto it = mp.begin();it != mp.end(); it++) {
 if (it->second > mx) { mx = it->second; ans = it->first; 
} 
else if (it->second == mx && it->first < ans) {
 continue;
 } 
} 
cout << ans << " " << mx << endl; 
}

return 0;
 }