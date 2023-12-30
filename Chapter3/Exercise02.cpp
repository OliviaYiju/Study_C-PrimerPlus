/*
키를 피트, 인치 단위로 묻고 / 체중을 파운드 단위로 물어라.
세 개의 변수를 사용해서 정보 저장하라

BMI를 보고하도록 해라. 이를 위해서는
1. 키를 인치 단위의 키로 변환하라 (1피트 = 12인치)
2. 그 키에 0.0254를 곱해서 미터 단위로 변환
3. 파운드 체증 / 2.2 해서 kg 단위의 질량으로 변환
4. 이를 미터 단위의 키의 제곱으로 나눠서 계산.

여러 가지 환산 인수를 나타내기 위해 기호 상수를 사용하라.
*/
#include<iostream>
using namespace std;

int main()
{
    const int FEET_TO_INCH = 12;
    const float INCH_TO_METERS = 0.0254;
    const float POUND_TO_KG = 2.2;

    int feet = 0;
    int inch = 0;
    int pound = 0;
    float bmi = 0.0f;

    cout << "Your height in feet and inch is : __\b\b";
    cin >> feet;
    cout << "Feet, and ___\b\b\b";
    cin >> inch;
    cout << "inch" << endl << "And Your weight in pound is : __\b\b";
    cin >> pound;

    bmi = (inch + (feet * FEET_TO_INCH)) * INCH_TO_METERS / ((pound / POUND_TO_KG) * (pound / POUND_TO_KG));

    cout << "Your BMI is " << bmi << endl; 

    return 0;

}