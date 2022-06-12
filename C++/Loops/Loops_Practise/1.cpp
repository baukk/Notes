// Write a program to calculate the total expenses. Quantity and price per item are input by the user and discount of 10% is offered if the expense is more than 5000.

#include<iostream>
using namespace std;

int main(){
    int q,p,t;
    cout<<"Enter quantity"<<endl;
    cin>>q;
    cout<<"Enter price"<<endl;
    cin>>p;
    t=p*q;
    if(t>5000)
        t=t-(t*0.1);
    cout<<"Total Expense is:"<<t;

}
