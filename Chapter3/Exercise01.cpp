/*
키를 정수형 센티미터로 묻고, 그 값을 미터와 센티미터 단위로 변환하는 간단한 프로그램을 작성하라.
입력해야 할 곳을 사용자에게 지시하기 위해 밑줄 문자를 사용하고 환산인수로 const 기호 상수를 사용하라.
*/

#include<iostream>
using namespace std;

int main()
{
    const float CM_TO_M = 100.0f;
    int height = 0; 

    cout << "What is your height ? : ___\b\b\b";
    cin >> height;

    cout << "Your height in meters is " << height/CM_TO_M << endl; 

    return 0;
}