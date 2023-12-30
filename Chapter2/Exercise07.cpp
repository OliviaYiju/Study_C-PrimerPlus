/*
시간 값과 분 값의 입력을 사용자에게 요청하는 프로그램을 작성하라. main() 함수는 이 두 값을 void 함수에 전달한다. 
그 void 형 함수는 다음과 같은 실행 예가 보여주는 형식으로 두 값을 표시한다.

시간 값을 입력하시오 : 9
분 값을 입력하시오 : 28
시각 : 9:28 

*/

#include<iostream>
using namespace std;

int hour;
int minute;


void PrintTime(int h, int m)
{
    cout << "시각 : " << hour << ":" << minute << endl;
}
int main()
{
    cout << "시간 값을 입력하시오 : ";
    cin >> hour;

    cout << "분 값을 입력하시오 : ";
    cin >> minute;

    PrintTime(hour, minute);

    return 0;
}

