/*
아래와 같이 코드를 작성하면 컴파일이 되지 않는다. 
*/

#include<iostream>


void simon(int n)
{
	using namespace std;
	cout << "Simon ��, �߰����� " << n << "�� �ε����" << endl;
}

int main()
{
	using namespace std;
	simon(3);

	cout << "������ �ϳ� �����ÿ� :";

	int count;
	cin >> count;

	simon(count);
	cout << "��!" << endl;

	return 0;
}


