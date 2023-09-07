#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    bool sleep;
    srand(time(0));
    int value;
    value = rand() % 100;
    if (value % 2 == 0)
    {
        sleep = true;
    }
    else
        sleep = false;

    if (sleep == false)
    {
        cout << " Bam may tinh tiep" << endl;
    }
    else
    {
        cout << " Di ngu di nek" << endl;
    }
}