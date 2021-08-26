#include <iostream>
#include <map>
#include "set"
#include "string"

using namespace std;

int main(){
    string result = "";
    map<char, int> map;
    ::map<char, int>::iterator it;
    map['A'] = 0;
    map['B'] = 1; 
    map['C'] = 2;
    set<int> set;

    for(int i = 0; i < 3; i++) {
        int value;
        cin>>value;
        set.insert(value);
    }

    string order = "";
    cin>>order;

    int i = 0; 
    int as [3];

    for(int index : set){
        as[i] = index;
        i++;
    }

    for(int i = 0; i < 3; i++){
        char value = order[i];
        int xy = as[map[value]];
        result += to_string(xy) + " "; 
    }

    cout<<result<<endl;
    return 0; 
}