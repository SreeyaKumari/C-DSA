#include<iostream>
using namespace std;
int Sum(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum; 
}
int Product(int arr[], int n){
    int product = 1;
    for(int i=1; i<n; i++){
        product *= arr[i];
    }
    return product;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "sum of the array= " << Sum(arr, 5);
    cout << "\n";
    cout << "product of the array= " << Product(arr, 5);
    return 0;
}