#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
//Function sec
void printMem(string *arr, int size){
    printf("Each string is worth %lu bytes\n", sizeof(arr[0]));
    for (size_t i = 0; i < size; i++)
    {
        printf("Value: %s at Memory Location: %p\n", arr[i].c_str(), arr + i);
    }
    
}
//Function end
void printMem(int * arr, int size) { // void printMem(int arr[], int size )
    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++) {
        printf("Value :%i at Memory Location: %p\n", arr[i], arr + i);
    }
}

int main(){
    cout<<"Array Section"<<endl;
    int arr[5] = {1, 2, 3, 4, 5};//Create 5 array elements
    printMem(arr, 5);

    arr[4]=500;//Change last value of the array
    printMem(arr, 5);
    cout<<"Last Value of the array is "<<arr[4]<<endl;

    int* firstaddress=&arr[0]; //Address
    int* secondaddress=&arr[1];
    ptrdiff_t arrdiff = secondaddress-firstaddress;
    cout<<"The difference between the first and second address in elementsis "<<arrdiff<<endl;
    cout<<"The difference between the first and second address in bytes is "<<arrdiff*sizeof(int)<<endl;


    //Function sec
    cout<<"\nFunction section main"<<endl;
    string strarr[5] = {"hello", "hola", "nihao", "xinchao"};
    printMem(strarr, 5);
    ptrdiff_t strarrdiff = &strarr[1] - &strarr[0];
    cout<<"The difference between the first and second address in elementsis "<<strarrdiff<<endl;
    cout<<"The difference between the first and second address in bytes is "<<strarrdiff*sizeof(int)<<endl;
    
    //Vector sec
    cout<<"\nVector Scetion"<<endl;
    vector<double> vec={1.0,2.0,3.0,4.0,5.0};
    vec.push_back(6.0);
    vec.push_back(7.0);
    cout<<"The elements in the vector:"<<vec.size()<<endl;
    vec.pop_back();
    cout<<"The element in the vector after pop_back:"<<vec.size()<<endl;
    return 0;
 }