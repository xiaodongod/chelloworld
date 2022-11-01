#include <iostream>

using namespace std;

int* func()
{
    return new int(10);
}


int main()
{
    int *p = func();

    cout << "* p : " << p << endl;
    cout << "* p value : " << *p << endl;

    return 0;
}