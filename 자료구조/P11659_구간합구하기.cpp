//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int suNo, quizNo;
//	cin >> suNo >> quizNo;
//	int S[100001] = {};
//	int temp;
//	for (int i = 1;i <= suNo;i++)
//	{
//		cin >> temp;
//		S[i] = S[i - 1] + temp;
//	}
//
//	int start, end;
//	for (int i = 0;i < quizNo;i++)
//	{
//		cin >> start >> end;
//		cout << S[end] - S[start -1] << endl;
//	}
//	return 0;
//}