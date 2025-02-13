#include<iostream>
#include<vector> 
 using namespace std; 

 int main(){
    vector <vector<int>> vec={
       {1,2,3},
       {4,5,6},
       {7,8,9}
    };

    vector <int> v={1,2,3,4,5};

    vec.push_back({10,11,12});
    v.push_back(6);

    for(const auto& row : vec){
        for(int val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
   
    for(const auto& row: v){
        cout<<row<<" ";
    }
    return 0;
 }