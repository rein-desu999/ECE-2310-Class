#include <iostream>
#include <vector>

using namespace std;
/*
    *@brief prints the elements in the vector and their memory locations
    *@param vec - the vector to be printed
*/
void printMemVec(const vector<int> & vec){
    printf("Vector - Each int is worth %lu bytes\n", sizeof(vec[0]));
    for(int i=0; i< vec.size();i++){
        printf("Value:%d Memory Location: %p\n", vec[i], &vec[i]);
    }

}
/*
    *@brief increments the elements in the vector by 10
    *@param vec - the vector to be incremented
*/
void incVecBy10(vector<int> & vec){
    for(int i=0; i < vec.size();i++){
       vec[i] += 10;
    }

}
int main(){
    const int SIZE = 5;
    vector<int> vec;
    //use a loop to populate vec with values 100 to 104
    for(int i=0;i<SIZE;i++){
        vec.push_back(100+i);
    }
    printf("Before Increment-----------------\n");
    printMemVec(vec);
    incVecBy10(vec);
    printf("After Increment-----------------\n");
    printMemVec(vec);\
    //remove the last element from the vector
    vec.pop_back();
    printf("After Pop-----------------\n");
    printMemVec(vec);
    vec.push_back(101);
    vec.push_back(102);
    printf("After Push-----------------\n");
    printMemVec(vec);
    return 0;
}
