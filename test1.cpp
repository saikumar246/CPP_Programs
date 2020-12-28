#include<iostream>
using namespace std;
int main(){
int n=10,d=60;
float m=0.6241;
cout<<"-----------------------------------------------------"<<endl;
cout<<"Distance in Km/hr\t\t"<<"Distance in miles/hr"<<endl;
cout<<"-----------------------------------------------------"<<endl;
for(int i=0;i<n;i++){
    cout<<d<<"km/hr           \t\t"<<d*m<<"miles/hr           \n"<<endl;
    d+=5;
}
cout<<"-----------------------------------------------------"<<endl;
    return 0;
}