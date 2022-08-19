#include<iostream>

using namespace std;
struct Array

{
    int size;
    int *array;

};

// Makin input function to take the input form the user.

void input(struct Array *arr){                          // taking input  for the user.
arr->array=new int[arr->size];                          // Allocating array to the heap,by taking 'array' as address.


 cout<<"Enter the elements of an array:"<<endl;
 
    for (int i = 0; i <arr->size; i++)
    {
        cin>>arr->array[i];
    }
    
};
int binary_search(struct Array arr,int key){                // binary function 
    
 int lower_value=0;
 int higher_value=arr.size-1;
 int mid_val;

 while(lower_value<=higher_value)
 {
    mid_val=(lower_value+higher_value)/2;
    if(key==arr.array[mid_val]){
        return mid_val;
    
    }
    else if(key<mid_val)
    {
        higher_value=mid_val-1;

    }
    else{
        lower_value=mid_val+1;
    }
    
 }   
}

int main(){
    struct Array arr;
    cout<<"Enter the size of the array: ";
    cin>>arr.size;
input(&arr);
    int key;
    cout<<"Enter the element you want to search : ";
    cin>>key;
    
    cout<<"Element present at the index no:"<<binary_search(arr,key);           // function calling.
}