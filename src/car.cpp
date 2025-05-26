#include "car.h"
#include <iostream>

using namespace std;

//コンストラクタの宣言時にメンバ変数を初期化することができる。今回はm_fuelとm_migrationを初期化
CCar::CCar() : m_fuel(0),m_migration(0) {
    cout << "オブジェクト作成" << endl;
}

CCar::~CCar(){
    cout << "オブジェクト破棄" << endl;
}
void CCar::move(){
    //燃料があるなら移動距離を追加し、燃料を減らす処理
    if(m_fuel >= 0){
        m_migration++;
        m_fuel--;
    }
    cout << "移動距離;" << m_migration << endl;
    cout << "燃料;" << m_fuel << endl;
}

void CCar::supply(int fuel){
    //燃料があるなら移動距離を追加し、燃料を減らす処理
    if(fuel > 0){
        m_fuel += fuel;
    }
    cout << "燃料;" << m_fuel << endl;
}