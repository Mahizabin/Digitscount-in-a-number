#include<iostream>
using namespace std;
int main(){
long long num;
    int count = 0;
    cout<<"Enter the number to be checked for its number of digits: "<<endl;
    cin>>num;
    do
    {
        count++;
        num /= 10;
    }while(num != 0);
    cout<<"Total number of digits in are "<<count<<endl;
    return 0;
}