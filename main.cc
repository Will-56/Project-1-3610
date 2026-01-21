/**
 * main file for the Sieve of Eratosthenes, in this file there is a function for creating a vector
 * that is a list of numbers between 2 and n, n being an user inputted number. There is also a
 * display function for
 */



#include <iostream>
#include <vector>
#include "class.h"

using namespace std;

//creates list with numbers 2-n
vector<integer> create_list(int n);
void display(vector<integer> h);



//main for testing
int main(){
    int n = 10;

    vector<integer> list = create_list(n);
    display(list);

};


//implementation of create list
vector<integer> create_list(int n){
    vector<integer> list;
    for(int i = 2; i <= n; i++){
        integer temp;
        temp.set_num(i);
        list.push_back(temp);
    }
    return list;
}


//display function implementation
void display(vector<integer> h){
    for(size_t i = 0; i < h.size(); i++){
        cout << h[i].num() << endl;
    }
}
