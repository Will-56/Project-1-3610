#include <iostream>
#include <vector>
#include "class.h"

using namespace std;

//creates list with numbers 2-n
vector<integer> create_list(int n);




int main(){
    int n = 10;

    vector<integer> list = create_list(n);

    for(size_t i = 0; i < list.size(); i++){
        cout << list[i].num() << endl;
    }

};

vector<integer> create_list(int n){
    vector<integer> list;
    for(int i = 2; i <= n; i++){
        integer temp;
        temp.set_num(i);
        list.push_back(temp);
    }
    return list;
}

