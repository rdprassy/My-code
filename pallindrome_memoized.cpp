#include <bits/stdc++.h>
using namespace std;

findMinDeletions(string s,int i, int j, auto &lookup){
    //base case

    string key = to_string(i)+'|'+to_string(j);

    if (lookup.find(key) == lookup.end()){

if (i>j){
return 0;
}
if (s[i]==s[j]){
lookup[key] = findMinDeletions(s,i+1,j-1, lookup);
}
else{
lookup[key] = 1+ min(findMinDeletions(s,i+1,j,lookup),findMinDeletions(s,i,j-1,lookup));
}
    }

    return lookup[key];

}

int main(){
//    cout << "hello";
      string s = "ACBCDBAA";
      int slen = s.length();
      unordered_map<string,int> lookup;
      cout << findMinDeletions(s,0,slen-1,lookup);

    return 0;

}
