#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    unordered_map <int , int> m2;
    for(int i=0;i<n;i++){
        m2[a[i]]++;
    }
    for(auto& p : m2){
        cout<<"Element "<<p.first<<" Frequency "<<p.second<<endl;
    }

 
    return 0;
}