#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> a[i];

    int largest = a[0];
    for (int i = 1; i < n; ++i)
        if (a[i] > largest) largest = a[i];

    cout << "Largest number = " << largest << endl;
    return 0;
}
