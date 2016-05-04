#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char* argv[])

{
    int n, i, harr, tarr;
    srand ( time(0) );
    n = ((rand() % 10 + 5) & (~1));

    int *arr = new int [n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand () % 101;
        cout << arr[i] << " ";
    }

    cout << endl << endl;

    harr = n / 2;

    for (int i = 0; i < harr; i++)
    {
        tarr = arr[i];
        arr[i] = arr[harr + i];
        arr[harr + i] = tarr;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
//.jjkj/jj/j/jj
