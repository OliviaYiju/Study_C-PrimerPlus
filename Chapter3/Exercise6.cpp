/*
주행한 거리를 마일로 , 소비한 휘발유의 양을 갤런으로 물어라
갤런 당 마일 수를 보고하는 프로그램을 작성

또는, 주행 거리를 km로, 소비 휘발유를 리터로 물어라
100km당 리터 수를 보고하는 프로그램 작성

나는 후자로 작성
*/
#include<iostream>
using namespace std;

int main()
{
    float driveKm = 0.0f;
    float liters = 0.0f;
    float litersPerKm = 0.0f;

    cout << "Drive Kilo Meters : ";
    cin >> driveKm;

    cout << "Used liters : ";
    cin >> liters;

    litersPerKm = liters * 100 / driveKm;

    cout << "Than .. " << litersPerKm << endl;

    return 0;

}

