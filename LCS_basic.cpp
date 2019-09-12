#include <bits/stdc++.h>
using namespace std;

int findLCS(string x,string y, int m, int n){
    //base case
    if (m == 0|| n==0){
        return 0;
    }

    if (x[m-1]== y[n-1]){
        return findLCS(x,y,m-1,n-1)+1;
    }
    else{
        return max(findLCS(x,y,m-1,n),findLCS(x,y,m,n-1));
    }



}

int main(){
//    cout << "hello";
      string x = "ABCBDAB";
      string y = "BDCABA";

      int m = x.length();
      int n = y.length();



      cout << findLCS(x,y,m,n);

    return 0;

}
