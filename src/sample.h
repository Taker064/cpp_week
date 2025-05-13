#ifndef _SAMPLE_H_//二重インクルード防止
#define _SAMPLE_H_

//C++におけるクラス関数の定義

class CSample{
    public://公開情報.他のファイルから干渉できる
        void set(int num);
        int get();
    private://非公開情報.このファイル及び実装ファイル(sample.cpp)でしか干渉できない
        int m_num;

};

#endif 