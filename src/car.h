#ifndef _CAR_H_
#define _CAR_H_

class CCar{
    public:
        //コンストラクタ(クラス宣言時に呼ばれるやつ)
        CCar();
        //デストラクタ(クラス終了時に呼ばれるやつ)
        ~CCar();
        //移動メソッド
        void move();
        //燃料補充メソッド
        void supply(int fuel);
    private:
        int m_fuel;//燃料
        int m_migration;//移動距離 

};

#endif