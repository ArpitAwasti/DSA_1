#include<bits/stdc++.h>
using namespace std;
int main()
{
    float tc , ac ,p,x;
    cin >> tc >> ac;
    p=100*(ac/tc);
    if(p>=75){
        cout << "eligible for the exam";
    }
    else{
        cout << "not eligible for the exam" << endl;
        cout << "Type 1 is any medical issue and 0 if not: ";
    cin >> x;
    if(x==1){
        cout << "Allowed due to medical issue";
    }
    else{
        cout << "no medical issues found";
    }
    }

    
}
