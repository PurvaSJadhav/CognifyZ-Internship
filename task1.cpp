//Task: String Reversal
// Write a program that takes a string as input and reverses it. Display the reversed string on the console.

#include<iostream>
#include<string>

using namespace std;

int main(){

    string given;

    cout<<"Enter the string for reversal: ";
    getline(cin, given);

    string solution;

    for(int z=given.length()-1; z>=0; z--){
        solution+=given[z];
    }

    cout<<"reversal of the given string: "<<solution<<endl;

    return 0;
}