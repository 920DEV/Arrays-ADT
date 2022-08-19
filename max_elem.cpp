#include<iostream>

using namespace std;
struct Array

{
    int size;
    int *array;

};

void input(struct Array *arr){                          // taking input  for the user.



arr->array=new int[arr->size];                          // Allocating array to the heap,by taking 'array' as address.

cout<<"Enter the size of the array:";
cin>>arr->size;

 cout<<"Enter the elements of an array:"<<endl;
 
    for (int i = 0; i <arr->size; i++)
    {
        cin>>arr->array[i];
    }
    
};

int max(struct Array arr){
    int max=0;
    for (int i = 1; i < arr.size; i++)
    {
        if(max<arr.array[i]){
             max = arr.array[i];
        }
    }
    return max;
    
}

int main(){
    struct Array arr;

    input(&arr);

    cout<<"maximum element in the array:"<<max(arr)<<endl;
}