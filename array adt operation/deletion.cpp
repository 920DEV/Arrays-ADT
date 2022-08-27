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

int delt(struct Array *arr,int index){
    int index_holder=0;
for (int i = index; i < arr->size; i++)
{
    if (index>=0 && index<arr->size)
    {
        /* code */
         index_holder=index;
    arr->array[index]=arr->array[index+1];
    }
                             // this will reduce the size of the array as we have delte on of the element from it.
    
}
arr->size--;

}

int main(){
    struct Array arr;
    input(&arr);
    int index;
    cout<<"Enter the index from which you wants to delete the element: ";
    cin>>index;
    
    delt(&arr,index);

 printf("The element in the array is \n");
        for (int i = 0; i <arr.size; i++)
        {
            cout<<arr.array[i]<<endl;

        }
}