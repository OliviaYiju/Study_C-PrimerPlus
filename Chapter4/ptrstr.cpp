#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char animal[20] = "bear";
    const char* bird = "wren";
    char * ps;

    cout << animal << "and";
    cout << bird << "\n";

    cout << "동물의 종류를 입력하시오 : ";
    cin >> animal;

    ps = animal;
    cout << ps << "s!\n";
    cout << "strcpy() 사용 후 : \n";
    cout << (int *) animal << ": " << animal << endl;
    cout << (int *) ps << ": " << ps << endl;

    ps = new char[strlen(animal) +1];
    strcpy(ps, animal);

    cout << "strcpy() 사용 후 : \n";
    cout << (int*) animal << ": " << animal << endl;
    cout << (int*) ps << ": " << ps << endl;
    delete[] ps;

    return 0;

}