#include<iostream>
#include<map>

using namespace std;

void print_map(map<int , string>m){
    for(auto& i:m){
        cout<<"Key "<<i.first<<" and value is "<<i.second<<endl;
    }
}

int main(){
    cout<<"Map of int and string type"<<endl;
    map <int , string> m;

    m[4]="Four";
    m[1]="One";
    m[3]="Three";
    m[2]="Two";

    print_map(m);

return 0;
}