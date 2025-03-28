#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return (root * root == num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectSquare(num))
        cout << num << " is a perfect square.\n";
    else
        cout << num << " is not a perfect square.\n";

    return 0;
}
