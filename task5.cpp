/*Task: Student Grade Calculator
Create a program that calculates the average grade of a student. 
Prompt the user to enter the number of subjects,
and then input the grades for each subject. 
Calculate the average grade and display it to the user.*/

#include<iostream>

using namespace std;

int main(){
    
    cout<<"=================Welcome to student grade calculator================="<<endl;
    
    int subject{};
    cout<<"Enter number of subjects: ";
    cin>>subject;

    double total{};

    for(int z=1; z<=subject; z++){

        double grade;
        cout<<"Enter grade for subject "<<z<<": ";
        cin>>grade;

        total+=grade;
    }

    double average=total/subject;

    cout<<"Average grade: "<<average<<endl;

    return 0;
}