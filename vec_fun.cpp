#include<iostream>
#include<vector> 
 using namespace std;


void print_vector(vector<int>&v){
    for(auto& i : v){
        cout<<i<<" ";
    }
    cout<<endl;
}
void increment_vec(vector<int> &v){
    for(auto& i : v){
        i+=2;
    }
    for(auto& i : v){
        cout<<i<<" ";
    }
    cout<<endl;
}

  int main(){

   vector<int> a;

   // Take Input From User

   int n;
   cout<<"Enter length of vector : ";
   cin>>n;
   cout<<"Enter elements of vector "<<endl;
   for(int i=0; i<n; i++){
     int d;
     cin>>d;
     a.push_back(d);
   }
   
   print_vector(a);
   increment_vec(a);
   print_vector(a);

    return 0;
}
