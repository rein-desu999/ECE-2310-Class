#include <iostream>
#include <vector>
using namespace std;

/** 
    *@brief prints the elements in the array and theri memory locations
    *@param arr - the array to be printed
    *@param size - the size of the array
*/

void printMemArr(const int * arr, int size){
    printf("Array - Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i=0; i<size;i++){
        printf("Value:%i Memory Location: %p\n", arr[i], arr+i);
    }
}
void incArrBy10(int * arr,int size){
    for(int i=0; i < size;i++){
        arr[i] += 10;
    }
}
int main(){
    const int SIZE = 5;
    int arr[SIZE];
    for(int i=0;i<SIZE;i++){
        arr[i] = 100+ i;
    }
    printf("Before-----------------\n");
    printMemArr(arr,SIZE);
    incArrBy10(arr,SIZE);
    printf("After-----------------\n");
    printMemArr(arr,SIZE);

    int* firstaddress = &arr[0];
    int* secondaddress = &arr[SIZE-1];
    ptrdiff_t element_diff = secondaddress - firstaddress;
    size_t byte_diff = element_diff * sizeof(int);
    cout<<"The difference between the first and second address in elements is: %ld\n"<<element_diff<<endl;
    cout<<"The difference between the first and second address in bytes is: %ld\n"<<byte_diff<<endl;
    return 0;
}