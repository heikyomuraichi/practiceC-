// dog.cpp
#include<iostream>

#include<string>
using namespace std;

class Dog{
    private:
        string name;
    
    public:
        Dog(string s){
            name = s;
        }

        void naku(){
            cout<<"ワン。俺様は"<<name<<"だ。"<<endl;
        }
};

int main(){
    Dog dog("ポチ");
    
    cout<<"あなたの名付けた犬がメモリ上に生成されました。"<<endl;
    cout<<"犬が鳴きます"<<endl;

    dog.naku();
}
