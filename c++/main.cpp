#include<iostream>
using namespace std;

int main(){
    int n;
    int nums[202];

    // 標準入力
    cin >> n;

    for (int i = 0; i < n ; ++i ) {
        cin >> nums[i];
    }
    int cnt = 0;
    while (true) {
        bool existOdd = false;
        
        for (int i = 0; i < n ; ++i ) {
             
             if (nums[i] % 2 != 0) existOdd = true;
        }

        if (existOdd) break;

        for (int i = 0; i < n ; ++i ) {
             
             nums[i] /= 2;
        }

        ++cnt;

    }

    
    cout << cnt << endl;

    return 0;

}