/*
거리를 매개 변수로 전달 받아 천문 단위로 환산하여 리턴하는 사용자 정의 함수를 main() 합수가 호출하느 프로그램을 작성하시오
프로그램은 사용자에게 거리를 광년으로 입력할 것을 요구해야 하고 다음과 같은 실행결과를 출력해야 한다

광년 수를 입력하고 Enter 키를 누르시오 : 4.2
4.2 광년은 265608 천문 단우입니다.

1광년 = 63240 천문 단위이다. double 형 변수를 사용하라
*/

#include<iostream>
using namespace std;

int main()
{
    double light = 0; // 이렇게 초기화 하는 것이 맞는가?


    cout << "광년 수를 입력하고 Enter 키를 누르시오 : " ;
    cin >> light;

    cout << light << " 광년은 " << light * 63240 << " 천문 단위이다.";

    return 0;

}