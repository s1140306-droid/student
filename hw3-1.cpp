#include <iostream>
#include <string>
using namespace std;

int main() {
    // 宣告變數
    string name;
    int num1, num2;

    // 請使用者輸入名字
    cout << "請輸入你的名字: ";
    cin >> name;

    // 顯示問候語
    cout << "你好, " << name << "!" << endl;

    // 請使用者輸入兩個數字
    cout << "請輸入兩個數字, 用空白隔開: ";
    cin >> num1 >> num2;

    // 顯示用戶輸入的數字
    cout << "你輸入的是: " << num1 << " 和 " << num2 << endl;

    return 0;
}
