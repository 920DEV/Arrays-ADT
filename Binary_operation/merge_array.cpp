#include<iostream>

using namespace std;

int *merge(int *arr1,int *arr2, int size){
    int *arr3;
    int size3=2*size;
    int i=0,j=0,k=0;
    arr3=new int[size3];

    while (i<size3 && j<size3)           // condition of mergin as it merges the element in an ascending order.
    {
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
            
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    for ( ; i < size3; i++)  // this loop will start form wherever the i is in the above loop. 
    {   
        arr3[k++]=arr1[i];
        /* code */
    }
    for ( ; j < size3; j++)
    {
        arr3[k++]=arr2[j];
    }


    
    return arr3;
    
    
}
int display(int *arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main(){
int size;
cout<<"Enter size:";
cin>>size;
int arr1[size];
int arr2[size];
int *arr3;
    cout<<"Enter the elements of the 1st array: ";      // elements taken by the user.

    for (int i = 0; i < size; i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter the elements of the 2nd array:";

    for (int j = 0; j < size; j++)
    {
        cin>>arr2[j];
    }

    cout<<"Elements of the first array are:"<<endl;

    for ( int i = 0; i < size; i++)
    {
        cout<<arr1[i]<<endl;
    }
cout<<"Elements of the second array are:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr2[i]<<endl;
    };

   arr3= merge(arr1, arr2, size);
        cout<<"The elements in the c are after mergin and sorting :"<<endl;
display(arr3,2*size);
}
