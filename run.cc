#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    cout << sumArray(a, 5) << endl; // 15
}
