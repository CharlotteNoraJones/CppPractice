#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter total number of elements: ";
    cin >> num;
    int* ptr;

    ptr = new int[num];

    cout << "Enter the elements\n";
    for (int i = 0; i < num; i++) {
        cout << "Element: ";
        cin >> ptr[i];
    }

    cout << "\nThe elements you have entered\n";
    for (int i = 0; i < num; i++) {
        cout << "Element: " << ptr[i] << "\n";
    }
    delete[] ptr;

    return 0;
}