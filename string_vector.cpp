#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    vector <string> v={"Apple","Banana","Cherry"};

    for(string& i:v){
       i+="!";
    }

    for(string i:v){
        cout << i << " "<< endl;
    }

    return 0;
}