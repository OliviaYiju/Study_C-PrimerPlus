/*
휘발유 소비량을 유럽스타일로 묻고 미국 스타일로 변환하라.

유럽 스타일 : 100킬로 당 리터 수
미국 스타일 : 갤런 당 마일 수 

100키로 = 62.14마일
1갤런 = 3.875리터

그러므로, 19(마일 퍼 갤런) = 12.4리터 / 100키로   : mile / gallon = liter / kilo
        27(마일 퍼 갤런) = 8.4 리터 / 100키로
*/

#include<iostream>

using namespace std;

int main()
{
    const float KILO_TO_MILE = 62.14;
    const float LITER_TO_GALLON = 1/3.875;

    float literPerKilo = 0.0f;
    float milePerGallon = 0.0f;

    cout << "100km 당 몇 리터의 휘발유를 썼습니까 ? ";
    cin >> literPerKilo;

    milePerGallon = 1/(literPerKilo / KILO_TO_MILE * LITER_TO_GALLON);

    cout << " Than.. " << milePerGallon << endl;

    return 0;
}