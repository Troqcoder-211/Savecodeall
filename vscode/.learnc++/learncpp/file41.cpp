#include <iostream>
#include <math.h>
#include <fstream>
#include <cstdlib>
#include <ctime>
#define maxn 100
using namespace std;
int nguyento(int n)
{
    if (n < 2)
        return 0;
    int k = sqrt(n);
    for (int i = 2; i <= k; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void selectionsort(int a[], int n);
int main()
{
    int n, a[maxn], count = 0;
    ofstream file;
    file.open("NUM.inp", std::ios::out);
    if (file.fail() == true)
    {
        cout << " FILE khong ton tai " << endl;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    file << n << endl;
    ;
    for (int i = 0; i < n; i++)
    {
        file << a[i] << " ";
    }
    file.close();
    ifstream file1;
    file1.open("NUM.inp", std::ios::in);
    if (file.fail() == true)
    {
        cout << " FILE khong ton tai " << endl;
    }
    file << n << endl;
    for (int i = 0; i < n; i++)
    {
        file << a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (nguyento(a[i]))
            ++count;
        selectionsort(a, n);
    }
    file1.close();
    ofstream file2;
    file2.open("NUM.out", std::ios::out);
    file2 << n << endl;
    for (int i = 0; i < n; i++)
    {
        file2 << a[i] << "  ";
    }
    file2.close();
    return 0;
}
void swap(int *&a, int *&b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void selectionsort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                min_index = j;
        }
        if (*(a + min_index) != a[i])
        {
            swap(a[i], a[min_index]);
        }
    }
}