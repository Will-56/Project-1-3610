#include <iostream>
#include <vector>

using namespace std;

//creates list with numbers 2-n
vector<int> create_list(int n);



int main(){
    int n = 10;

    vector<int> list = create_list(n);

    for(size_t i = 0; i < list.size(); i++){
        cout << list[i] << endl;
    }

};

vector<int> create_list(int n){
    vector<int> list;
    for(int i = 2; i <= n; i++){
        list.push_back(i);
    }
    return list;
}