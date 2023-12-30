/*
이스케이프 시퀀스 사용을 위한 테스트 코드
*/
#include<iostream>

int main()
{
    using namespace std;

    cout<<"\a 암호명 \"화려한외출\" 작전이 방금 개시 되었습니다! \n";
    cout<<"8자리 비밀번호를 입력하십시오:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\a 입력하신 비밀번호는 " << code << "입니다. \n";
    cout << "\a 비밀번호가 맞습니다! 566 계획을 진행 하십시오! \n";

    return 0;
}