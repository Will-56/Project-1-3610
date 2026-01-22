/**
 * main file for the Sieve of Eratosthenes, in this file there is a function for creating a vector
 * that is a list of numbers between 2 and n, n being an user inputted number. There is also a
 * display function for
 */



#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include "class.h"

using namespace std;

//creates list with numbers 2-n
vector<integer> create_list(int n);

//displays whole vector
void display_all(vector<integer> h);

//displays primes and composites seperate
void display(vector<integer> h);


void sieve(vector<integer>& h); 



//main for testing
int main(int argc, char* argv[]){
    int n = stoi(argv[1]);

    vector<integer> list = create_list(n);
    display_all(list);
    sieve(list);
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
void display_all(vector<integer> h){
    for(size_t i = 0; i < h.size(); i++){
        cout << h[i].num() << " ";
    }

    cout << endl << endl;
}

//sieve algorithim
void sieve(vector<integer>& h){
    int p = 2;
    int n = h.size() + 1;
    cout << endl << n << endl << endl;

    //the algorithim goes until p is larger than the square root of n estimated down to nearest whole number
    while(p <= floor(sqrt(n))){

        //incrementing by p, if a number is "marked" that means its composite
        for(int i = p+p; i <= n; i += p){
            h[i-2].mark();
        }

        //sets p equal to the next unmarked number
        for(int i = p+1; i < n; i++){
            if(h[i-2].is_marked() == false){
                p = i;
                break;
            }
        }
    }
}

void display(vector<integer> h){
    cout << "Composite numbers: ";
    for(size_t i = 0; i < h.size(); i++){
     //prints all marked numbers
        if(h[i].is_marked()){
            cout << h[i].num() << " ";
        }
    }
    cout << endl << endl;

    //prints all numbers marked false
    cout << "Prime numbers: ";
    for(size_t i = 0; i < h.size(); i++){
        if(h[i].is_marked() == false){
            cout << h[i].num() << " ";
        }
    }

    cout << endl;
}