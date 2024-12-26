/*Task: Fibonacci Series
Implement a program that generates the Fibonacci series 
up to a given number of terms. Prompt the user to enter 
the number of terms and display the series.*/

#include<iostream>

using namespace std;

int main(){

    int n{0}, next{0};
    int first{0}, second{1};

    cout<<"Enter the number of terms you want: ";
    cin>>n;
    cout<<"Fibonacci Series: ";

    for(int z=1; z<=n; z++){

        if(z==1){
            cout<<first<<", ";
            continue;
        }

        if(z==2){
            cout<<second<<", ";
            continue;
        }

        next=first+second;

        first=second;
        second=next;

        cout<<next<<", ";
    }

    return 0;
}