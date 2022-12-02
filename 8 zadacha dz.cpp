#include <iostream>

using namespace std;

int main()
{
	int K, N, M, D, S;
	cin >> K,
		cin >> N;
	cin >> M;
	cin >> D;
	S = ((K * N * M * D) / (K * N * M - K * N - K * M - N * M));
	if (S > 0)
		cout << S;
	else
		cout << -1;
	system("pause>nul");
	return 0;
}
