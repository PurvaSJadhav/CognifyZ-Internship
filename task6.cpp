/*Task: Array Sorting
Write a program that sorts an array of integers in ascending 
or descending order. Prompt the user to input the array
elements and choose the sorting order. Display the sorted array.
*/

#include<iostream>

using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void bubblesort(int array[], int n, bool ascending) {
    for (int z = 0; z < n - 1; ++z) {
        for (int w = 0; w < n - z - 1; ++w) {
            if ((ascending && array[w] > array[w + 1]) || (!ascending && array[w] < array[w + 1])) {
                swap(array[w], array[w + 1]);
            }
        }
    }
}

int main(){

    int num;
    cout << "Enter the number of elements in the array: ";
    cin >> num;

    int array[num];
    cout << "Enter the elements of the array: ";
    
    for (int z = 0; z < num; z++) {
        cin >> array[z];
    }

    char order;
    cout << "Enter 'a' for ascending order or 'd' for descending order: ";
    cin >> order;

    bool ascending = (order == 'a' || order == 'A');

    bubblesort(array, num, ascending);

    cout << "Sorted array: ";
    for (int a = 0; a < num; a++) {
        cout << array[a] << " ";
    }
    cout << endl;

    return 0;
}