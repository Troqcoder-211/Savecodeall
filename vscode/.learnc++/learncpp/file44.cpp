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
void matran2(int a[][maxn], int m, int n);
int main()
{
    int a[maxn][maxn], b[2][2], m, n;
    cout << " nhap so dong m: ";
    cin >> m;
    cout << " nhap so cot n: ";
    cin >> n;
    nhapmang(a, m, n);
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
int GTLN(int a[][maxn], int m, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    return max;
}
int search(int a[][maxn], int m, int n, int max)
{
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] = max)
                ++count;
        }
    }
    return count;
}
int tongcot(int a[][maxn], int m, int n)
{
    int tongcot = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tongcot += a[i][j];
        }
        cout << tongcot;
    }
    return 0;
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
/*Cho mảng hai chiều a có m dòng và n cột(m, n ≤ 200); các phần tử là các số nguyên dương.Hãy viết chương trình hoàn chỉnh
thực hiện các công việc sau :
Tìm giá trị lớn nhất của mảng.Có bao nhiêu số bằng giá trị lớn nhất ?
Tìm tổng các phần tử trên mỗi cột.
Tìm hình vuông con 2 × 2 chỉ chứa số nguyên tố và tổng của 4 số trong đó là lớn nhất.Xuất tổng lớn nhất tìm được.
*/
// void matran2(int a[][maxn], int m, int n)
// {
// 	int k = 2, h = 2;
// 	for (int i = 0; i < m; i++)
// 	{
// 		for (int j = 0; j < n; j++)
// 		{
// 			if (k < 2 && h < 2)
// 			{
// 				if(nguyento(a[i][j]))

// 			}
// 		}
// 		k++, h++;
// 	}
// }