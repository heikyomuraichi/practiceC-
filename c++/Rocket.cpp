#include<iostream>
using namespace std;
// Rocket
class Rocket{
    int fuel;
    int speed;

public:
    Rocket(int);
    void acceleration();
};

Rocket::Rocket(int x):fuel(x),speed(0){}

void Rocket::acceleration(){
    if(fuel>=2){
        speed+=2;
        fuel-=2;
        cout<<"現在の燃料は"<<fuel<<"です。"<<endl;
        cout<<"現在の速度は"<<speed<<"です。"<<endl;

    }else{
        cout<<"燃料切れです。加速できません。漂流です。"<<endl;
    }
}

int main(){
    cout << "ロケットをメモリ上につくります。燃料（整数）を入力してください。"<<endl;
    int n;
    cin>>n;

    // Create a rocket by passing ”n” to the constructor
    Rocket rocket(n);

    cout<<"加速します"<<endl;
    rocket.acceleration();
    cout<<"また加速します。"<<endl;
    rocket.acceleration();
    cout<<"またまた、加速してみます。"<<endl;
    rocket.acceleration();
    cout<<"ロケットの冒険は終わりました"<<endl;

}