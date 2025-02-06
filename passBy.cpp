#include <iostream>
using namespace std;

void toggle1(bool led){
    if (led==true)
    {
        led=false;
    }
    else
    {
        led=true;
    }
    
}
void toggle2(bool* led){
    if (*led==true)
    {
        *led=false;
    }
    else
    {
        *led=true;
    }
    
}
int main(){
    bool led1 = false;
    bool led2 = false;

    cout<<"Boolean value\t False is equiv to 0 and True is equiv to 1"<<endl;
    cout<<"Before toggle\t led1: "<<led1<<" led2: "<<led2<<endl;
    cout<<"\nAfter toggle"<<endl;
    toggle1(led1);
    toggle2(&led2);
    cout<<"Toggle 1: "<<led1<<endl;
    cout<<"Toggle 2: "<<led2<<endl;
}