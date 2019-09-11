#include<iostream>
#include<string>
using namespace std;

int main(){    
    
    // 変数の定義
    string a;

    // 標準入力
    cin >> a;

    int counter = 0;

    if (a[0] == '1') counter++;
    if (a[1] == '1') counter++;
    if (a[2] == '1') counter++;

    cout << counter << endl;

}