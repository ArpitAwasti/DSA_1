
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%100==0 && n%400==0){
        cout << " This is leap century year ";
    }
    else if (n%4==0 && n%100!=0 )
        cout << "This is leap year";
    else{
        cout << "Not a leap year";
    }
}
