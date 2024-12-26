/*Task: File Copy
Write a program that copies the contents of one file to another. 
Prompt the user to input the names of the source and destination files. 
Read the contents of the source file and write them to the destination file. */

#include<iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string sourfname, destfname;
    cout << "Enter the name of the source file: ";
    cin >> sourfname;
    cout << "Enter the name of the destination file: ";
    cin >> destfname;

    ifstream sourceFile(sourfname);
    ofstream destinationFile(destfname);

    if (!sourceFile) {
        cerr << "Unable to open source file." << endl;
        return 1;
    }

    if (!destinationFile) {
        cerr << "Unable to create or open destination file." << endl;
        return 1;
    }

    char ch;
    while (sourceFile.get(ch)) {
        destinationFile.put(ch);
    }

    sourceFile.close();
    destinationFile.close();

    cout << "File copied successfully." << endl;

    return 0;
}