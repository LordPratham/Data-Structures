#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[100] = {[0 ... 99] = 25};
    for (int i = 0; i < 100; i++)
    {
        cout << i << " --> " << arr[i] << endl;
    }
    return 0;
}
