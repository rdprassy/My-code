#include <bits/stdc++.h>
using namespace std;

int findLCS(string x,string y, int m, int n, auto &lookup){
    //base case

    string key= to_string(m)+'|'+to_string(n);
    if (lookup.find(key)== lookup.end()){
    if (m == 0|| n==0){
        return 0;
    }

    if (x[m-1]== y[n-1]){
        lookup[key] = findLCS(x,y,m-1,n-1,lookup)+1;
    }
    else{
        lookup[key] = max(findLCS(x,y,m-1,n,lookup),findLCS(x,y,m,n-1,lookup));
    }
    }
    return lookup[key];



}

int main(){
//    cout << "hello";
    string x = "ABCBDAB";
    string y = "BDCABA";

    int m = x.length();
    int n = y.length();
    unordered_map<string,int> lookup;



    cout << findLCS(x,y,m,n,lookup);

    return 0;

}
