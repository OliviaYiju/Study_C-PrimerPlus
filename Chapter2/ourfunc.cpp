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


