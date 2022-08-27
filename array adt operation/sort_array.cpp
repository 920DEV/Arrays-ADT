#include<iostream>

using namespace std;

int sort(int *arr,int n){           // checking wheater the given array is sorted or not.
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<=arr[i+1])
        {
            return true;
        }
        
    }
    false;
}

void insert_sort(int *arr,int n,int element){               // inserting an element in sorted array.

int i=n-1;
    while (i>=0 && arr[i]>=element)
    {
        arr[i+1]=arr[i];
         i--;
        
    }
    arr[i+1]=element;
    n++;
    
    
}
int main(){
    int arr[5]={4,5,6,7,8};
    int n=5;
    cout<<sort(arr,n)<<endl;


    cout<<"after checking the sortings:"<<endl;

    insert_sort(arr,n,5);
    
 cout<<"The element in the array is \n";
        for (int i = 0; i <n-1; i++)
        {
            cout<<arr[i]<<endl;

        }
return 0;
}