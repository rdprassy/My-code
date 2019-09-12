


#include <bits/stdc++.h>
using namespace std;

int findLCS(string x,string y, int m, int n){
    //base case

    int lookup[m+1][n+1];
    for (int i =0;i<m;i++)
        lookup[i][0] =0;

    for (int i =0;i<m;i++)
        lookup[0][i] =0;

    for( int i =1; i<=m;i++){
        for (int j=1; j<=n;j++){
            if (x[i-1]== y[j-1]){
                lookup[i][j]= 1+ lookup[i-1][j-1];
            }
            else{
                lookup[i][j]= max(lookup[i-1][j],lookup[i][j-1]);
            }

        }
    }

    return lookup[m][n];



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
