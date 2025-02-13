#include<iostream>
#include <string>
#include <vector>
using namespace std;

int firstOccurance (vector<int> arr , int k) {
    int s=0 ;
    int e = arr.size()-1;
    int res = -1;
    while(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == k){
        e = mid - 1;
        res = mid;
}       
    else if(arr[mid] < k){
        s = mid + 1;
}
    else{
        e = mid - 1;
    }
}
return res;
}
int lastOccurance (vector<int> arr , int k) {
int s=0 ;
int e = arr.size()-1;
int res = -1;
while(s <= e){
int mid = (s+e)/2;
if(arr[mid] == k){
s = mid + 1;
res = mid;
}else if(arr[mid] < k){
s = mid + 1;
}else{
e = mid - 1;
}
}
return res;
}
int countOccur(vector<int> arr , int k){
int res = lastOccurance(arr,k) - firstOccurance(arr , k);
return res + 1;}


int main(){
    vector<int> arr = {2,4,4,4,5,5,6,6,6,6,9};
// int fOccur = firstOccurance(arr , 6);
// int fOccur = lastOccurance(arr , 6);
int fOccur = countOccur(arr , 6);
cout << fOccur << endl;
return 0;}