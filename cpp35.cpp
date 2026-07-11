// Bubble Sort 
/*//Bubble sort for Interview
Bubble sort is a simple sorting algorithm where

key points: 
1) Bubble sort compares adjacent element
2) Swaps if Wrong Order
3) Largest element moves to each pass
4) Time Complexcity: O(n^2)
Bubble Sort

Pass 1: [5,3,8,4,2]

5>3 = swap ---> [3,5,8,4,2]
5>8 = swapping failed [3,5,8,4,2] 5 is not greater than 8
8>4 = swap ---> [3,5,4,8,2]
8>2 = swap ---> [3,5,4,2,8] largest is goes to end 

Pass 2: [3,5,4,2,8]

5>4 = swap---> [3,4,5,2,8]
5>2 = swap---> [3,4,2,5,8] largest is goes to the end 

pass 3: [3,4,2,5,8]

4>2 = swap--->[3,2,4,5,8] largest is goes to the end

pass 4: [3,2,4,5,8]

3>2 = swap---> [2,3,4,5,8] largest is goes to the end

so after the sorting our final array is [2,3,4,5,8]
*/

#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,3,8,4,2}; //Array Declaration
    int n=5;
    
    for(int i=0; i<n-1; i++){ // Outer Loop ----> n-1 times --> after each pass one element is already sorted
        for(int j=0; j<n-i-1;j++){ // Inner Loop ---> compare adjacent element 
            if(arr[j]>arr[j+1]){  // if left element is greater then swap it

                // Swapping technique use here 
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout << "Sorted Array: ";
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}
