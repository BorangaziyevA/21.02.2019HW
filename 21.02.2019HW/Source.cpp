#include <iostream> 
#include <stdio.h> 
#include <time.h> 

using namespace std;

int min10(int a[100], int n, int &min)
{
	int s = 0;
	for (int i = n; i < n + 10; i++) s += a[i];
	cout << n << " 10 чисел; " << " Сумма: " << s << endl;
	if (n == 90)
	{
		min = n;
		return s;
	}
	else
	{
		int s1 = min10(a, n + 1, min);
		if (s <= s1)
		{
			min = n;
			return s;
		}
		else return s1;
	}
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	int a[100];
	int min;

	for (int i = 0; i < 100; ++i) a[i] = 1 + rand() % 13;
	for (int i = 0; i < 100; ++i) cout << a[i] << ' ';
	cout << endl << endl;

	min10(a, 0, min);

	cout << "10 чисел, чья сумма минимальна: " << min << endl << endl;

	system("pause");
}

//int main()
//{
//	int const n = 4;
//	int const m = 4;
//
//	int Arr[n][m];
//	int i = 0, j, k = 0, p = 1;
//
//	while (i < n*m)
//	{
//		k++;
//		for (j = k - 1; j < m - k + 1; j++)
//		{
//			Arr[k - 1][j] = p++;
//			i++;
//		}
//
//		for (j = k; j < n - k + 1; j++)
//		{
//			Arr[j][m - k] = p++;
//			i++;
//		}
//
//		for (j = m - k - 1; j >= k - 1; j--)
//		{
//			Arr[n - k][j] = p++;
//			i++;
//		}
//
//		for (j = n - k - 1; j >= k; j--)
//		{
//			Arr[j][k - 1] = p++;
//			i++;
//		}
//
//	}
//
//	for (int q = 0; q < n; q++)
//	{
//		for (int w = 0; w < m; w++)
//		{
//			cout <<  Arr[q][w] << "    ";
//		};
//		cout << endl;
//	}
//	system("pause");
//	return(0);
//}