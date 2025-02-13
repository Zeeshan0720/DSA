
#include<iostream>
#include <string>
 #include <vector> 
 using namespace std;
int main(){
vector<int> arr = {4,6,8,10,12,3,5,7,9,11};
int s = 0;
int e = arr.size();
int mid = (s+e)/2;
    cout << "First Odd Number is :"<<arr[mid] << endl;
    cout << "Last Even Number is :"<<arr[mid-1] << endl;

cout << "Last odd Number is :" << arr[e-1] << endl;
 cout << "first even Number is :" << arr[0] << endl;
return 0;

}