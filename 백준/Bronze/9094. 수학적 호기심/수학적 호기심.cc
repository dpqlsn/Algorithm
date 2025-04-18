#include <iostream>
using namespace std;

int cnt, n, m, t, a, b;

int main() {
	cin >> t;
	while (t)
	{
		t--;
		cnt = 0;
		cin >> n >> m;
		for (a = 1; a < n; a++)
		{
			for (b = a + 1; b < n; b++)
			{
				if (!((a * a + b * b + m) % (a * b)))
					cnt++;
			}
		}
		cout << cnt << endl;
	}
}