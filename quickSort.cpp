#include<bits/stdc++.h>
using namespace std;
int partition(int array[] , int s , int e){
    int pivot = array[s];

    int count = 0;
    for(int i = s; i<=e ; i++){
        if(array[i]<pivot){
            count++;
        }
    }

    int pivotIndex = s+count;
    swap(array[pivotIndex] , array[s]);

    int i = s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(array[i]<=pivot){
            i++;
        }
        while(array[j]>pivot){
            j--;    
        }
        if(array[i]>pivot && array[j]<pivot){
            swap(array[i] , array[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void  quickSort(int array[] , int s , int e){
    if(s>=e){
        return;
    }
    int p = partition(array , s , e);

    quickSort(array , s , p-1);
    quickSort(array , p+1 , e);
}
void print(int array[] , int n){
    for(int i = 0 ; i<n ;  i++){
        cout<<array[i]<<" ";
    }
}
int main(){
int array[6] = {22 , 112 , 16, 5 , 2, 11};
quickSort(array , 0 , 5);
print(array , 6);
return 0;
}