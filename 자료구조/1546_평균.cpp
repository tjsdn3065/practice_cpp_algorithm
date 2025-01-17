//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int A[1000];
//
//	cin >> N;
//
//	for (int i = 0;i < N;i++)
//		cin >> A[i];
//
//	int high = 0;
//	int sum = 0;
//
//	for (int i = 0;i < N;i++)
//	{
//		if (high < A[i])
//			high = A[i];
//		sum += A[i];
//	}
//
//	double result = sum * 100.0 / high / N;
//
//	//cout.setf(ios_base::showpoint);
//	cout << result << endl;
//
//	return 0;
//}