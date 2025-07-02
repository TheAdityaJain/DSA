#include <bits/stdc++.h>
using namespace std;

int changeA(int a){ //pass by value
    a = 20;
    return a;
}

int changeB(int* b){ //pass by reference using ptr
    *b = 20;
    return *b;
}

int changeC(int &c){ //pass by reference using alias
    c = 20;
    return c;
}

int main() {
    int a = 10;
    int b = 10;
    int c = 10;

    cout<<"Value of a is before : "<<a; 
    changeA(a);
    cout<<" after : "<<a<<endl; 

    cout<<"Value of b is before : "<<b; 
    changeB(&b);
    cout<<" after : "<<b<<endl; 

    cout<<"Value of c is before : "<<c; 
    changeC(c);
    cout<<" after : "<<c<<endl; 
    
    return 0;
}