#include<bits/stdc++.h>
using namespace std;

void selectionSort(int array[] , int n){
    for(int  i = 0 ; i<n-1 ; i++){
        int min_index = i;
        for(int j = i+1 ; j<n; j++){
            if(array[min_index]>array[j]){
                min_index = j;
            }
        }
        swap(array[i], array[min_index]);
    }
}
void print(int array[] , int n){
    for(int i = 0; i<n ; i++){
        cout<<array[i]<<" ";
    }
}
int main(){
int array[6] = {22 , 12 , 16, 5 , 2, 11};
selectionSort(array , 6);
print(array , 6);
return 0;
}