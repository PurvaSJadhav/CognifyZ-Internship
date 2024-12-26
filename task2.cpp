/*Task: Calculator program
write a program that takes two numbers and an operator as input (+,-,*,/,%) 
and performs the corresponding arithmetic operation. display the result on the console.*/

#include<iostream>

using namespace std;

int main(){

    cout<<endl;
    cout<<"=====================Welcome====================="<<endl;
    cout<<endl;
    cout<<"Which operation you want to do?"<<endl;
    cout<<"1. Addition \n2. Substraction \n3. Multiplication \n4. Division \n5. Modulus"<<endl;
    cout<<endl;

    int a{}, b{};
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    int choice{};
    cout<<"Enter your choice (1-5): ";
    cin>>choice;
    cout<<endl;

    switch(choice){
        case 1:
            cout<<a<<" + "<<b<<" = "<<a+b;
            break;
        case 2:
            cout<<a<<" - "<<b<<" = "<<a-b;
            break;
        case 3:
            cout<<a<<" * "<<b<<" = "<<a*b;
            break;
        case 4:
            cout<<a<<" / "<<b<<" = "<<a/b;
            break;
        case 5:
            cout<<a<<" % "<<b<<" = "<<a%b;
            break;
        default :
            cout<<"Enter valid choice ranging from 1 to 5";
    }

    return 0;
}