#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int sum_of_pair(vector<int>v,int tar){
int n=v.size();
int count=0;
unordered_map<int ,int>m;
for(int i=0;i<n;i++){
    int c=tar-v[i];
    if(m.find(c)!=m.end()){
        count+=m[c];
    }
    m[v[i]]++;
}
return count;

}
int main(){
int n,tar;
vector<int>v;
cout<<"Enter length of array : ";
cin>>n;
cout<<endl<<"Enter the array elements"<<endl;
for(int i=0;i<n;i++){
    int val;
    cin>>val;
    v.push_back(val);
}
cout<<"Enter Target value : ";
cin>>tar;
int result=sum_of_pair(v,tar);

cout<<result;
    return 0;
}