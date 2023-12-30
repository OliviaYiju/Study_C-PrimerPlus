/*
거리에 대해 마일 단위로 입력을 요구하고, 그것을 킬로미터 단위로 환산하는 프로그램을 작성하시오
1마일은 1.60934 km 이고, 1km 는 1마일 / 1.60934이다. 
*/

#include<iostream>
using namespace std;

float mileDistance = 0.0f;
float kmDistance = 0.0f;

int main(void)
{
    cout << "Enter distance with Miles : " << endl;
    cin >> mileDistance;

    kmDistance = mileDistance/1.60934;

    cout << "Distance with km is : " << kmDistance << endl;

    return 0;
}