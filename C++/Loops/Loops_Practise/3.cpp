// Write a program to calculate the sum of first 10 natural number.

#include<iostream>
using namespace std;

int main(){
    int n=1;
    int sum=0;
    for (int i=0;i<10;i++){
        sum+=n;
        n++;
    }
    cout<<sum;
}