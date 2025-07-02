/*
Vectors stores data by dynamic allocation during runtime. It uses heap to store the data in it. 

Whenever, a new data is added the dynamic array of vectors doubles it self, thus accomodating the new data into the vector.
This phenomenon increases the capacity of vector wherease size(i.e the no. of elements stored) may be less than the capacity.

For ex.
Value Pushed      |   Vector 
1                      [1]
2                      [1,2]
3                      [1,2,3,null]
4                      [1,2,3,4]
5                      [1,2,3,4,5,null,null,null]
*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec1;
    vector<int> vec2 = {1,2,3};
    vector<int> vec3(3,0); //(sizeOfVector, value(s)StoredInVector) [0,0,0]
    vector<char> vec4 = {'a','b','c'};
    //accessing elements 
    cout<<vec2[2]<<endl;

    //accessing elements using loop
    for(int i : vec2){ //for each loop
        cout<<i<<endl;
    }

    for(char val : vec4){
        cout<<val<<endl;
    }

    //vector functions

    //1.size - returns size
    cout<<"Size of vector : "<<vec2.size()<<endl;
    cout<<"Capacity of vector : "<<vec2.capacity()<<endl;
    
    //2.push_back - adds element at end
    vec1.push_back(3);
    vec1.push_back(4);

    //3.pop_back - removes element at end
    vec1.pop_back();

    //4.front - returns first element
    cout<< vec1.front() <<endl;

    //5.back - returns last element
    cout<< vec1.back() <<endl;

    //6.at
    cout<< vec2.at(1) <<endl;
    return 0;
}