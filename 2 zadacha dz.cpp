﻿#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a;
	vector<int> b;
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(7);
	b.push_back(1);
	b.push_back(5);
	b.push_back(6);
	b.push_back(8);
	int i = 4;
	while (a.size() <= n || b.size() <= n) {
		a.push_back(b[i - 1] + b[i - 3]);
		++i;
		if (b[b.size() - 1] + 1 < a[a.size() - 1])
			for (int j = b[b.size() - 1] + 1; j < a[a.size() - 1]; ++j)
				if (j != a[a.size() - 2])
					b.push_back(j);
	}
	cout << a[n - 1] << endl << b[n - 1];
	return 0;
}
