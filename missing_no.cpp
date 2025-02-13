
#include<iostream>
#include <string>
 #include <vector>
using namespace std;
int findMissingNumber(vector<int> arr1, vector<int> arr2){
int s = 0;
int e = arr2.size();
    while(s < e) {
    int mid = (s+e) / 2;
    if (arr1[mid]==arr2[mid])
    {
         s = mid + 1;
    }else{
        e = mid;
    }
    }
return arr1[s];
}
int main(){
    vector<int> arr1 = {1,3,6,8,11,12,16,20,32};
    vector<int> arr2 = {1,3,6,8,11,12,16,32};
    int res = findMissingNumber(arr1, arr2);
    cout << res << endl;
return 0;
}