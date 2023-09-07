#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
#define maxn 200
void nhapmang(int a[][maxn], int m, int n);
void ghitableinp(int a[][maxn], int m, int n);
void doctableinp(int a[][maxn], int m, int n);
void ghitableout(int a[][maxn], int m, int n);
int main()
{
    int a[maxn][maxn], m, n;
    cout << " nhap so dong m: ";
    cin >> m;
    cout << " nhap so cot n: ";
    cin >> n;
    nhapmang(a, m, n);
    ghitableinp(a, m, n);
    doctableinp(a, m, n);
    ghitableout(a, m, n);
    return 0;
}
void nhapmang(int a[][maxn], int m, int n)
{
    srand(time(NULL));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 100 + 1;
        }
    }
}
void ghitableinp(int a[][maxn], int m, int n)
{
    ofstream file;
    file.open("table.inp", std::ios::out);
    file << m << "  " << n << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            file << a[i][j] << "  ";
        }
        file << endl;
    }
    file.close();
}
int nguyento(int n)
{
    if (n < 2)
        return 0;
    int k = sqrt(n);
    for (int i = 2; i <= k; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int demsnt(int a[][maxn], int m, int n)
{
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nguyento(a[i][j]))
                ++count;
        }
    }
    return count;
}
void doctableinp(int a[][maxn], int m, int n)
{
    ifstream file1;
    file1.open("table.inp", std::ios::in);
    file1 >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            file1 >> a[i][j];
        }
    }
    file1.close();
}
void ghitableout(int a[][maxn], int m, int n)
{
    ofstream file2;
    file2.open("table.out", std::ios::out);
    file2 << demsnt(a, m, n) << endl;
    for (int i = 0; i < m; i++)
    {
        int max;
        for (int j = 0; j < n; j++)
        {
            max = INT_MIN;
            if (a[i][j] >= max)
            {
                max = a[i][j];
            }
        }
        file2 << max << "  ";
    }
    file2 << endl;
    for (int i = 0; i < n; i++)
    {
        int min;
        for (int j = 0; j < m; j++)
        {
            min = INT_MAX;
            if (a[j][i] <= min)
            {
                min = a[j][i];
            }
        }
        file2 << min << "  ";
    }
    file2 << endl;
    file2.close();
}