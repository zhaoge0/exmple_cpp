
#include<iostream>
using namespace std;
int main()
{
int s(0),n,i(1);
    cout<<"enter the n :";
    cin>>n;
    do{
        s+=i*n;
        n--;
        ++i;
    }while(n>=0);
        cout<<"s = 1 + (1+2) + ... + (1 + 2 + ... +n ) = "<<s<<endl;
    return 0;
}
