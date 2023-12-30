/*
사용자에게 본인의 이름을 입력하도록 요구하는 프로그램을 작성하시오. 또한 그 프로그램은 화면에 사용자의 나이를 원수로 나타내도록 합니다.
Enter your age: 29
이때 당신의 나이를 월수로 나타낼 경우 348입니다.
*/

#include<iostream>
using namespace std;

int main()
{
    int age; 
    cout << "Enter your age : ";
    cin >> age;
    cout << "Your age in months is " << age * 12 << endl;

    return 0;
}