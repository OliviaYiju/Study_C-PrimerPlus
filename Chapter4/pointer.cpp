#include<iostream>

int main()
{
	using namespace std;
	int updates = 6;
	int* p_updates; // int 형을 지시하는 포인터를 선언

	p_updates = &updates;

	cout << "값 : updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "값 : &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "변경된 updates = " << updates << endl;
	return 0;
	
}