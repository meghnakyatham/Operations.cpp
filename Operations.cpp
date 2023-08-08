#include <iostream>
using namespace std;

int main(){

    cout<<"Menu \n";
    cout<<"1. ADD \n"<<endl<<"2. SUB \n"<<endl<<"3. MULTI \n"<<endl<<"DIV \n"<<endl;

    int option;
    cout<<"Enter your choice: ";
    cin>>option;
    int a, b, c;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;

    switch (option){
        case 1 : c = a+b;
                 break;
        case 2 : c = a-b;
                 break;
        case 3 : c = a * b;
                 break;
        case 4 : c = a/b;
                 break;
    }
    cout<<"Result is : "<<c<<endl;
    return 0;
}
