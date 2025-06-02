#include <iostream>
using namespace std;

int reverse(int num) {
    int result = 0;
    while (num != 0) {
        result = result * 10 + num % 10;
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    cout << "정수를 입력하세요: ";
    cin >> num;
    cout << "역순 결과: " << reverse(num) << endl;
    return 0;
}