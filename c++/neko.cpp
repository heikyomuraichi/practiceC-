//neko.cpp
#include <iostream>

#include <string>
using namespace std;

class Neko
{
    string name;
public:
    Neko(string s);
    void naku() const;
};

Neko::Neko(string s):name(s){}

void Neko::naku()const{
    cout<<"にゃあ。俺様は"<<name<<"だ。"<<endl;
}

int main()
{
    string s;
    cout<<"猫を生成します。名前を入力してください。"<<endl;
    cin>>s;
    
    Neko dora(s);  //「ボス」というの名前を持ったdoraが生成される
    cout<<"あなたの名づけた猫がメモリ上に生成されました。"<<endl;
    cout<<"猫が鳴きます。"<<endl;

    dora.naku();
}