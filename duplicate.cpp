#include<iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
int arraySum (vector<int> arr){
int sum = 0;
    for(int n : arr){
        sum += n;
    }
        return sum;
    }
    int arraySum (set<int> arr){
    int sum = 0;
    for(int n : arr){
    sum += n;
    }
return sum;
}
int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,1,3,2,5};
    set<int> unique;
        for(int n : arr2){
            unique.insert(n);
        }
    int sum1 = arraySum(arr1);
    int sum2 = arraySum(unique);
    int miss = sum1 - sum2;
        cout << miss << endl;
return 0;
}