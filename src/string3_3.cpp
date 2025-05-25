//Stringクラスのメンバ関数の使い方
# include <iostream>
# include <string> 

int main(){
    std::string s;
    s = "This is a";
    s.append("pen");//append()で文字列を後ろに追加
    std::cout << s << std::endl;
    std::cout << "文字列の長さ" << s.length() << std::endl;//length()で文字列の長さを表示
    printf("char*:%s\n",s.c_str());//c_strで文字列をC言語のconst_char型に変換している
    return 0;
}