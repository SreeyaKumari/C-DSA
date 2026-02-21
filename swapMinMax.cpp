#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {3,4,5,6,7};
    int n = 5;
    int minimum= INT_MAX;
    int minindex = -1;
    for(int i=0; i<n; i++){
        if(arr[i] < minimum){
            minimum = arr[i];
            minindex = i;
        }
    } 
    cout << "minimum= " << minimum;
    cout << "\n";


    int maximum = INT_MIN;
    int maxindex = -1;
    for(int i=0; i<n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
            maxindex = i;
        }
    }
    cout << "maximum= " << maximum;
    cout << "\n";

    //swapping 
    int temp = arr[minindex];
    arr[minindex] = arr[maxindex];
    arr[maxindex] = temp;
    
    //printing the new array
    cout << "Array after swapping the min and max: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } 
    return 0;
}