#include<iostream>

using namespace std;
struct Array

{
    int size;
    int *array;

};
void input(struct Array *arr){                          // taking input  for the user.
arr->array=new int[arr->size];                          // Allocating array to the heap,by taking 'array' as address.


 cout<<"Enter the elements of an array:"<<endl;
 
    for (int i = 0; i <arr->size; i++)
    {
        cin>>arr->array[i];
        cout<<"\n";
    }
    
};


int append(struct Array *arr){      // Append will add extra element at the end of the array,
int elem;                           // "elem" is the element we wants to add .

cout<<"Enter the element you want to append: "<<endl;
cin>>elem;    


              // increasing the size of the array;
return arr->array[arr->size++]=elem;   // incrementing the size of the array and assigning to the elem.
   
};

void insert(struct Array *arr){         // Insertion of an element.
     int index, elem;

    cout<<"At what index you wants to Insert the element. :"<<endl;
    cin>>index;
    cout<<"Element you wants to insert :";
    cin>>elem;

    if (index>=0 && index <= arr->size){

        for (int i = arr->size; i > index; i--)
        {
            arr->array[i]=arr->array[i-1];

        }
        arr->array[index]=elem;
        arr->size++;
        
    }
    else{
        cout<<"Index Number entered by you doesn't exits in this array. Please try again";
    }
    
}

int dlt(struct Array *arr){              // for deleting an element in an array.
int index,x;
cout<<"At what index You want to delete the element:";
cin>>index;
x=arr->array[index] ;             // assigning the element we want to delete to x.
if (index>=0 && index<= arr->size)
{
for (int i = index; i <= arr->size-1; i++)
{
    arr->array[i]=arr->array[i+1];

}
arr->size--;

return x;
}
};

// int swap(struct Array *arr,int x){            // using transposition to replace the recently search index. to lower index. so it will consume less time another time.
// int temp;
//  for (int i = 0; i < arr->size; i++){
//         if (x==arr->array[i])
//         {
//             temp=arr->array[i];
//                 arr->array[i]=arr->array[i-1];
//                 arr->array[i-1]=temp;

//         } 
            
//     }

//      cout<<"The index value of searched element has changed"<<endl;
  
// }

int linear_srch(struct Array *arr,int x){            // Note: for doing linear search all the elements must be unique.

for (int i=0; i < arr->size;i++){
    if(x==arr->array[i]){
        cout<<"The element  is present in the array"<<endl;

    return i;
    } 
    return -1;

}
}



void display(struct Array arr){
        printf("The element in the array is \n");
        for (int i = 0; i <arr.size; i++)
        {
            cout<<arr.array[i]<<endl;

        }
        
};


int main(){
    
    struct Array arr;
    
    cout<<"Enter the size of the array: ";
    cin>>arr.size;

   input(&arr);

    
  
while (true)
{
    /* code */
    // options provide to users.
  cout<<"Enter the Option you want to perform in an array: "<<endl;
    cout<<"1-> Linear Search.\n 2-> Binary search\n 3-> Append or add an element.\n 4-> Insert an Element \n 5-> Delete an element \n 6-> Display Array.\n 7-> For exit "<<endl;
    int option;
   cin>>option;

    switch (option)
    {
    case 1:
    int x;
cout<<"Enter the Element you want to search :";
cin>>x;
linear_srch(&arr,x);
    


    break;
    case 3:
    append(&arr);
    break;

    case 4:
    insert(&arr);
    break;

    case 5:
    dlt(&arr);
break;
    case 6:
    display(arr);

break;

default:
    cout<<"You have entered incorrect option , or opt for the exit form the program.";
        break;
    }

 if (option == 7){
    break;
 }
}
return 0;
}
