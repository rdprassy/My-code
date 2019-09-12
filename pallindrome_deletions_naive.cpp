
#include <bits/stdc++.h>
using namespace std;

findMinDeletions(string s,int i, int j){
//base case
if (i>j){
return 0;
}
if (s[i]==s[j]){
return findMinDeletions(s,i+1,j-1);
}
else{
return 1+ min(findMinDeletions(s,i+1,j),findMinDeletions(s,i,j-1));
}
}

int main(){
//    cout << "hello";
    string s = "ACBCDBAA";
    int slen = s.length();
    cout << findMinDeletions(s,0,slen-1);

    return 0;

}
