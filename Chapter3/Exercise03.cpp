/*
위도를 도,분,초각 단위로 요청해서 10진수 형식으로 출력해라
1분각 = 60초
1도각 = 60분
모두 기호 상수로 표현
각각의 입력 값을 위해 별개의 변수를 쓸 것
실행 예시는 책에 .. 
*/

#include<iostream>
using namespace std;

int main()
{
    const int SEC_TO_MIN = 60;
    const int MIN_TO_ANGLE = 60;

    float second = 0.0f;
    float minute = 0.0f;
    float angle = 0.0f;

    float location = 0.0f;

    cout << "위도를 도, 분, 초 단위로 입력하시오" << endl;

    cout << "먼저, 도각을 입력하시오 : ";
    cin >> angle;
    cout << "다음, 분각을 입력하시오 : ";
    cin >> minute;
    cout << "끝으로, 초각을 입력하시오 : ";
    cin >> second;

    location = angle + second / SEC_TO_MIN / MIN_TO_ANGLE + minute / MIN_TO_ANGLE;
    cout << angle << "도, " << minute << "분, " << second << "초 = " << location << "도" << endl;

    return 0;

    
}