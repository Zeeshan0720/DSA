#include<iostream>
#include<map>

using namespace std;

int main(){
    cout<<"Map of int and string type"<<endl;
    map <int , string> m;
    m[4]="Four";
    m[1]="One";
    m[3]="Three";
    m[2]="Two";

    cout<<"Key 2 has value of "<<m[2]<<endl;

    for(auto& p:m){
        cout<<"key is "<<p.first<<" and value is "<<p.second<<endl;
    }
    cout<<endl;
    cout<<"Map of int and int type"<<endl;
    map <int , int> m2;
    m2[4]=4;
    m2[1]=1;
    m2[3]=3;
    m2[2]=2;

    cout<<"Key 2 has value of "<<m2[2]<<endl;

    for(auto& c:m2){
        cout<<"key is "<<c.first<<" and value is "<<c.second<<endl;
    }

    cout<<endl;
    cout<<"Map of string and int type"<<endl;
    map <string , int> m3;
    m3["One"]=1;
    m3["Four"]=4;
    m3["Three"]=3;
    m3["Two"]=2;

    cout<<"Key 2 has value of "<<m3["Two"]<<endl;

    for(auto& c:m3){
        cout<<"key is "<<c.first<<" and value is "<<c.second<<endl;
    }

    cout<<endl;
    cout<<"Map of string and char type"<<endl;
    map <string , char> m4;
    m4["Three"]='3';
    m4["Four"]='F';
    m4["One"]='O';
    m4["Two"]='2';

    cout<<"Key 2 has value of "<<m4["Two"]<<endl;

    for(auto& c:m4){
        cout<<"key is "<<c.first<<" and value is "<<c.second<<endl;
    }


    cout<<endl;
    cout<<"Map of int and string by user input "<<endl;
    map <int,string > m5;
   int n,key;
   string value;
   cout<<"Enter the number of elemnts in map"<<endl;
   cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the key in map"<<endl;
        cin>>key;
        cout<<"Enter the value in map"<<endl;
        cin>>value;
        m5[key]=value;
    }

    cout<<"Key 2 has value of "<<m5[2]<<endl;

    for(auto& c:m5){
        cout<<"key is "<<c.first<<" and value is "<<c.second<<endl;
    }

    return 0;
}