#include <iostream>
#include <fstream>
using namespace std;
#define maxn 100
void ghinuminp(int a[maxn], int n, int m);
void docnuminp(int a[maxn], int n, int m);
void ghinumout(int a[maxn], int n, int m);
int main()
{
    int n, m, a[maxn];
    cout << "nhap so n: ";
    cin >> n;
    cout << "nhap so m: ";
    cin >> m;
    ghinuminp(a, n, m);
    docnuminp(a, n, m);
    ghinumout(a, n, m);
    return 0;
}
void ghinuminp(int a[maxn], int n, int m)
{
    ofstream file;
    file.open("NUM.inp", std::ios::in);
    for (int i = 0; i < n; i++)
    {
        cout << "nhap a[" << i << "] = ";
        cin >> a[i];
    }
    file << n << "  " << m << endl;
    for (int i = 0; i < n; i++)
    {
        file << a[i] << "  ";
    }
    file.close();
}
int GTLN(int a[maxn], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
long long max(long a, long b)
{
    return a < b ? b : a;
}
long kiemtradaycon(int a[maxn], int n)
{
    int res = 0, count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1] && a[i + 1] > a[i])
            count++;
        else
        {
            count = 1;
        }
        res = max(res, count);
    }
    return res;
}
int timcapso(int a[maxn], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == m)
                count++;
        }
    }
    return count;
}
void selectionsort(int a[maxn], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = 1; j < n; j++)
        {
            if (a[i] > a[j])
                min_index = j;
        }
        if (a[min_index] != a[i])
        {
            swap(a[i], a[min_index]);
        }
    }
}
int timtrungvi(int a[maxn], int n)
{
    selectionsort(a, n);
    n /= 2;
    return a[n];
}
void docnuminp(int a[maxn], int n, int m)
{
    ifstream file1;
    file1.open("NUM.inp", std::ios::in);
    file1 >> n >> m;
    for (int i = 0; i < n; i++)
    {
        file1 >> a[i];
    }
    file1.close();
}
void ghinumout(int a[maxn], int n, int m)
{
    ofstream file2;
    file2.open("NUM.out", std::ios::out);
    file2 << GTLN(a, n) << endl;
    file2 << kiemtradaycon(a, n) << endl;
    file2 << timcapso(a, n, m) << endl;
    file2 << timtrungvi(a, n) << endl;
    file2.close();
}
// 6 4
// 1 2 3 0 9 7
// 0 1 2 3 7 9
// 9
// 3
// 1
// 3
