//Pointer
/*
Pointer contains the address of a variable, and that return a specific value.
    Basically, a variable name directly points to the value of the variable, pointer indirectly points to the value of the variable.
    Declaration of pointer: int *p; //p is a pointer to an integer
    countPtr is a pointer to an int
    When * appears in an expression, it is an operator -- it dereferences the pointer (see example below).
    => Pointer can be declared to point to objects of any type

    Pointer should be initiallize to nullptr
    A value of nullptr is a pointer value that indicates that the pointer is not pointing to any object.
    nullptr is a keyword in C++11 that can be used in place of 0 or NULL to represent a null pointer.   

    given int y{5}
    int* yPtr{nullptr};
    yPtr = &y; // yPtr now holds the address of y

    Ex:
    #include <iostream>
    using namespace std;

    int main(){
        int a{7};
        int* aPtr{&a}; //or like int* aPtr = &a;
        cout << "Adress of a = " << &a << "\n The value of aPtr is = "<< aPtr << endl;
        cout << "The value of a is = " << a << "\n The value of *aPtr is = " << *aPtr << endl;
    }

    //OUTPUTS
    Adress of a = 0x7ffebc7b3b7c
    The value of aPtr is = 0x7ffebc7b3b7c
    The value of a is = 7   
    The value of *aPtr is = 7
*/



//Pass by Vlaue vs Pass by Reference
/*
    & is the address of operator

    Pass arguments to arguments;
    - pass by value: the value of the argument is copied into the parameter             (EX: int x{5}; int y{7}; x = y;)
    - pass by reference: the address of the argument is copied into the parameter       (EX: int x{5}; int y{7}; x = &y;)
    - pass by pointer: the address of the argument is copied into the parameter         (EX: int x{5}; int y{7}; x = &y;)

    **Pass by reference is more efficient than pass by value because it does not require copying the argument.

    EX:
    int foo(int x){
        x++;
        return x;
    }
    int main(){
        inty=5;
        cout << foo(y) << endl;
        cout << y << endl;
    }

    //OUTPUTS
    6 //foo(y) returns 6
    5 //y is still 5


    EX:
    #include <iostream>
    using namespace std;
    int cubByValue(int);

    int main(){
        int number{5};
        cout << "The original value of number is " << number << endl;
        number = cubByValue(number);
        cout << "The new value of number is " << number << endl;
    }

    int cubByValue(int n){
        return n*n*n;
    }
    
    //OUTPUTS
    The original value of number is 5
    The new value of number is 125


    EX:
    #include <iostream>
    using namespace std;

    void cubByReference(int*);
    int main(){
        int number{5};
        cout << "The original value of number is " << number << endl;
        cubByReference(&number);
        cout << "The new value of number is " << number << endl;
    }

    void cubeByReference(int* n){
        *n = *n * *n * *n;
    }

    //OUTPUTS
    The original value of number is 5
    The new value of number is 125

*/  



//Array and Vector
/*
    Array: a fixed-size collection of elements of the same type]
    The value of a built in array name is the address of the first element of the array
        - So arrayName is implicitly converted to a pointer to &arrayName[0]
    You dont need to take the address (&) of an array name to pass it to a function
    For built-in arrays, the called functiobn can modify the elements of the array

    Ex: int arr[100,200,300,400,500];
    arr[3] = 400;
    size of arr = 5;

    Trade-offs:
    Search via 0(n);        no matter how many elements are in the array, the time to search is the same
    Change size 0(1);       no
    
    You can declare built in array parameter in a function
    int sumElements( const int values[], const size_t numberofElements){
        int sum{0};
        for(size_t i{0}; i < numberofElements; i++){
            sum += values[i];
        }
        return sum;
    }
    can also be wrote as
    int sumElements( const int* values, const size_t numberofElements){
        int sum{0};
        for(size_t i{0}; i < numberofElements; i++){
            sum += values[i];
        }
        return sum;
    }

    **The compiler does not differentiate between an array and a pointer to the first element of the array

    Built in array limitations: 
        - Fixed size
        - No bounds checking
        - No copy or assignment
        - No comparison
*/