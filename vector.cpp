#include<iostream>
#include<vector> 
 using namespace std;

  void Print(vector<int>v){
    int Size = v.size();
    cout<<"Vector is  : "<<endl;
    // Print Vector
     for(int i=0; i<Size; i++){
        cout<<v[i]<<" "<<endl; 
    }
  }


  int main(){

   vector<int> a;

   // Take Input From User

   int n;
   cout<<"Enter length of vector";
   cin>>n;
   cout<<"Enter elements of vector";
   for(int i=0; i<n; i++){
     int d;
     cin>>d;
     a.push_back(d);
   }
   

    Print(a);
    a.clear();
    return 0;
}
