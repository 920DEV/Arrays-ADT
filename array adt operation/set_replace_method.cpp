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

int set(struct Array arr){
    int index;
    cout<<"Enter the index where you want to replace the element:";
    cin>>index;
    
    int element;
    cout<<"Enter the element you want to replace:";
    cin>>element;

    if(index>0 && index<=arr.size){
        arr.array[index]=element;
    }
    return element;
}

void display(struct Array arr){
        cout<<"The elements are:";
        for (int i = 0; i <arr.size; i++)
        {
            cout<<arr.array[i]<<endl;

        }
        
};

int main(){
    struct Array arr;

    input(&arr);

    set(arr);

    display(arr);
    
}
