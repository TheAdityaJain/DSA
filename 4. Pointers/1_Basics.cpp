#include <bits/stdc++.h>
using namespace std;

int main() {
    //'Address of' operator & which is used to access address of variable
    int a = 10;
    char c = '5';
    cout<<"Addr of c : "<<(void*)&c<<endl;

    //int b = &a; This will give error because 'int' data type cannot store address value of variable.
    //int* b = a; This will give error because 'int*' data type cannot store constant values.

    int x = 10;
    int *y = &x; //Strictly stores address of variables only 
    int **z = &y; //Strictly stores address of pointers only 

    cout<<"Value of x : "<<x<<" | "<<"Addr of x : "<<&x<<endl;
    cout<<"Value of y : "<<y<<" | "<<"Addr of y : "<<&y<<" | "<<"Value of *y : "<<*y<<endl;
    cout<<"Value of z : "<<z<<" | "<<"Addr of z : "<<&z<<" | "<<"Value of *z : "<<*z<<" | "<<"Value of **z : "<<**z<<endl;

    // x++;
    y++;
    
    cout<<"==================="<<endl;
    cout<<"Value of x : "<<x<<" | "<<"Addr of x : "<<&x<<endl;
    cout<<"Value of y : "<<y<<" | "<<"Addr of y : "<<&y<<" | "<<"Value of *y : "<<*y<<endl;
    cout<<"Value of x : "<<x<<" | "<<"Addr of x : "<<&x<<endl;

    return 0;
}