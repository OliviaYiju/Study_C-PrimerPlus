/*
초 수를 정수 값 (Long 형 사용) 으로 요청하고, 그에 상당하는 시간으 일, 시, 분, 초로 디스플레이하는 프로그램을 짜라
1일의 시간수, 1시간의 분 수, 1분의 초 수를 기호 상수를 사용하여 표현하라
출력은 책에 ..
*/
#include<iostream>
using namespace std;

int main()
{
    const int DAY_TO_HOUR = 24;
    const int HOUR_TO_MIN = 60;
    const int MIN_TO_SEC = 60;

    long seconds = 0;

    int days = 0;
    int hours = 0;
    int minutes = 0;

    cout << "초 수를 입력하시오 : ";
    cin >> seconds;

    days = seconds / (DAY_TO_HOUR * HOUR_TO_MIN * MIN_TO_SEC);
    hours = (seconds % (DAY_TO_HOUR * HOUR_TO_MIN * MIN_TO_SEC)) / (HOUR_TO_MIN * MIN_TO_SEC);
    minutes = (seconds % (HOUR_TO_MIN * MIN_TO_SEC)) / MIN_TO_SEC;
    seconds = seconds % MIN_TO_SEC;

    cout << seconds << "초 = " << days << "일, " << hours << "시간, " << minutes << "분, " << seconds << "초" << endl;

    return 0;
}