//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	vector<int> S(N, 0);
//	vector<int> C(M, 0);
//	int temp;
//	cin >> S[0];
//	for (int i = 1;i < N;i++)
//	{
//		cin >> temp;
//		S[i] = S[i - 1] + temp;
//	}
//	int remainder = 0;
//	int answer = 0;
//	for (int i = 0;i < N;i++)
//	{
//		remainder = S[i] % M;
//		if (remainder == 0)
//			answer++;
//		C[remainder]++;
//	}
//	for (int i = 0;i < M;i++)
//	{
//		if (C[i] > 1)
//			answer += (C[i] * (C[i] - 1) / 2);
//	}
//	return 0;
//}