#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,s=0;
    cin >> n;
    while(n>0){
        r = n%10;
        n = n/10;
        s = s+r;
        cout << r << " " << endl;

    }
    cout << "sum = " << s;
}
