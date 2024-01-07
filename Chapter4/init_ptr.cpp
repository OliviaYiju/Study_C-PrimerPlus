#include<iostream>

int main()
{
    using namespace std;

    int higgens = 5;
    int* pt = &higgens;

    cout << "higgens의 값 = " << higgens
    << ", higgens의 주소 = " << &higgens << endl;

    cout << "*pt 값 = " << *pt
    << ", pt 주소 = " << pt << endl;



}