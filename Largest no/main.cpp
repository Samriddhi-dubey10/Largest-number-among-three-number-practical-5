#include <iostream>

using namespace std;

int main()
{
int a,b,c;
cout<<"enter three no"<<"\n ";
cin>>a>>b>>c;
if(a>b && a>c){
    cout<<" greatest is"<<a<<"\n";
}
 if(b>a && b>c){
    cout<<"greatest is"<<b<<"\n";
}
if(c>a && c>b){
    cout<<" greatest is"<<c<<"\n";
}

    return 0;
}
