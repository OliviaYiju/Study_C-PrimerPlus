/*
세계 인구와 한국의 현재 인구수를 요구하는 프로그램.
작성 정보를 long long 변수에 저장하라.
전 세계 인구에서 한국 인구수가 차지하는 비중을 나타내라. 
결과물은 책에..
*/
#include<iostream>
using namespace std;

int main()
{
    long long worldP = 0LL;
    long long koreaP = 0LL;
    float proportion = 0.0f;

    cout << "World Population : ";
    cin >> worldP;

    cout << "Kores Population : ";
    cin >> koreaP;

    proportion = (float)koreaP / (float)worldP; 

    cout << "Proportion is " << proportion << "%" << endl;

    return 0;
}