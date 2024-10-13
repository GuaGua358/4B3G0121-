#include <iostream>  
using namespace std;  

int main() {
    double num1, num2;  // 宣告變數num1和num2，用來儲存輸入的兩個數字
    char op;            // 宣告變數op，用來儲存輸入的運算符號（+ - * /）
    // 提示輸入一個運算式
    cout << "請輸入一個四則運算式 (例如 2 + 3): ";
    // 接收輸入的兩個數字和一個運算符號
    cin >> num1 >> op >> num2;
    // 檢查cin是否成功接收到輸入
    if (!cin) {
        cout << "錯誤: 輸入格式無效" << endl;
        return 1;  // 程式錯誤結束
    }
    // 根據輸入的運算符號來執行對應的運算
    switch (op) {
    case '+':  // 如果是加法運算
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;  // 計算完加法結果後結束此分支
    case '-':  // 如果是減法運算
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;  // 計算完減法結果後結束此分支
    case '*':  // 如果是乘法運算
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;  // 計算完乘法結果後結束此分支
    case '/':  // 如果是除法運算
        if (num2 != 0) {  // 確認除數不為零
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;}
        else {  // 如果除數為零，輸出錯誤訊息
            cout << "錯誤: 除數不能為零" << endl;}
        break;  // 計算完除法結果後結束此分支
    default:  // 如果輸入的運算符號不是上述的四則運算符號
        cout << "錯誤: 無效的運算符號" << endl;  // 輸出錯誤訊息
    }
    return 0;  // 程式結束，返回0表示成功執行
}
