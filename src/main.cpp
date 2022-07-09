#include <iostream>
#include <cmath>
#include <string>

using namespace std;




int main() {
    int num1;
    int num2;
    int num3;

    cout << "MENCARI NILAI LEBIH BESAR DARI 3 ANGKA YANG DIMASUKAN" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter number third: ";
    cin >> num3;

    if (num1 > num2 &&  num1 > num3) {
        cout << "lebih besar adalah: " << num1 << endl;
    } else if (num2 > num3 && num2 > num1) {
        cout << "lebih besar adalah: " << num2 << endl;
    } else {
        cout << "lebih besar adalah: " << num3 << endl;
    }


}

