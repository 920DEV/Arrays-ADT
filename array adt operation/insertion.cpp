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

cout<<"Enter the size of the array:";
cin>>arr->size;

 cout<<"Enter the elements of an array:"<<endl;
 
    for (int i = 0; i <arr->size; i++)
    {
        cin>>arr->array[i];
    }
    
};
int insertion(struct Array *arr){
    int index, element;
    cout<<"Enter the index where you want to insert the element:";
    cin>>index;
    cout<<"Enter the element you want to put inside the array:";
    cin>>element;
    for (int i = arr->size; i >index; i--)
    {
            arr->array[i]=arr->array[i-1];
            
       
    }
     arr->size++;
    arr->array[index]=element;

}

int main(){
    struct Array arr;
    input(&arr);

    insertion(&arr);

 cout<<"The element in the array is \n";
        for (int i = 0; i <arr.size; i++)
        {
            cout<<arr.array[i]<<endl;

        }
}