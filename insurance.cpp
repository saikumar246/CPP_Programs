
#include<iostream>
using namespace std;

int main()
{
    int n=2;
    char Insurance_type;float price;int year;
    int G=0,S=0; float Insurance;
    for(int i=0;i<=n;i++){
        
        cout << "Enter Insurance Type, Car's year, and price:"<<endl;
        cin >> Insurance_type >> year >> price;
        if(Insurance_type=='g'||Insurance_type=='G'){
            G++;
            Insurance=((price*0.017)-((2021-year)*5))+140;
            cout << "Insurance=" << Insurance <<endl;
        }
        else if(Insurance_type=='S'||Insurance_type=='s'){
            S++;
            Insurance=((price*0.012)-((2021-year)*5))+40;
            cout << "Insurance=" << Insurance <<endl;
        }
        else{
            cout << "unknown Insurance_type, try again\n";
            exit(0);
        }
        
    }
    cout<<"Number of cars with Gold insurance is ="<<G<<" cars"<<endl;
    cout<<"Number of cars with Silver insurance is ="<<S<<" cars"<<endl;
    

    return 0;
}
