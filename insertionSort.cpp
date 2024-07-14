#include<bits/stdc++.h>
using namespace std;
void insertionSort(int array[] , int n){
    for(int i = 1; i<n ; i++){
        int key = array[i];
        int j = i-1;
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j--;
        }
    array[j+1]= key;
    }
}
void print(int array[] , int n){
     for(int i = 0; i<n ; i++){
        cout<<array[i]<<" ";
    }
}
int main(){
int array[6] = {22 , 12 , 16, 5 , 2, 11};
insertionSort(array , 6);
print(array , 6);
return 0;
}