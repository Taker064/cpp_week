//文字列の操作ライブラリ
#include <iostream>
#include <string> //文字列を扱うためのライブラリ

using namespace std;

int main(){
    string s,t;
    t = "入力された文字は ";
    cout << "文字列を入力:";
    cin >> s;
    cout << t + s << "です" << endl;
    return 0;
}