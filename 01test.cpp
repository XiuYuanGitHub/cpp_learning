
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

bool is_nan(double dVal)
{
	if (dVal == dVal)
		return false;
	return true;
}

int max_vector(vector<int> &A)
{
	int max_val = -10000000;
	for (unsigned int i = 0; i < A.size(); i++)
	{
		std::cout <<"A.at"<<i <<"="<<A.at(i) << std::endl;
		if (A.at(i) >= max_val)
			max_val = A.at(i);
	}
	std::cout << "max_val=" << max_val << std::endl;
	return max_val;
}

//int solution(vector<int> &A) {
//	// write your code in C++14 (g++ 6.2.0)
//	//int better_division = -1;
//	//int diff_max = 0;
//
//	//vector<int> A1,A2;
//
//	//for (unsigned int i = 0; i < A.size()-1; i++)
//	//{
//	//	for (unsigned int j = 0; j < i+1; j++)
//	//	{
//	//		A1.push_back(A.at(j));
//	//	}
//	//	for (unsigned int k = i+1; k < A.size(); k++)
//	//	{
//	//		A2.push_back(A.at(k));
//	//	}
//	//	int max_A1 = max_vector(A1);
//	//	int max_A2 = max_vector(A2);
//	//	if(abs(max_A1 - max_A2)>=diff_max)
//	//	{
//	//		diff_max = abs(max_A1 - max_A2);
//	//		better_division = i;
//	//	}
//	//	std::cout << max_A1<<"    " << max_A2 << std::endl;
//
//	//	A1.clear();
//	//	A2.clear();
//	//}
//
//	//std::cout << "K=" << better_division << "diff_max=" << diff_max << std::endl;
//	//return diff_max;
//}
int solution(int n) {
		unsigned int d[30];
		int l = 0;
		while (n > 0) {
			d[l] = n % 2;
			n /= 2;
			std::cout <<d[l];
			l++;
			
		}
		std::cout <<"l="<< l;
		//for (int i = 0; i < l; i++)
		//{
		//	std::cout << d[l];
		//}
		std::cout << std::endl;

		for (int p = 2; p < 1 + l; p++) 
		{
			bool ok = true;
			//for (int i = 0; i < l - p; i++) 
			for (int i = l-1; i >= l - p; i--)
			{
				if (d[i] != d[i - p]) 
				{
					ok = false;
					break;
				}
			}
			if (ok) {
				return p;
			}
		}
	return -1;
}

//}

int main01()
{
	cout << "Hello!" << endl;

	//vector<float> m_f(10);
	//m_f.push_back(0);
	////float m_f[10];
	////m_f.push_back(0);
	//m_f[0]= 2;
	//m_f[10] = 3;

	//float a = NAN;
	//bool bTest = is_nan(a);
	//cout << "Is a nan:" << bTest << endl;

	vector<int> m_test;
	m_test.push_back(4);
	m_test.push_back(3);
	m_test.push_back(2);
	m_test.push_back(5);
	m_test.push_back(1);
	m_test.push_back(1);

	int test = 183;//955  183


	int ret = solution(test);
	
	std::cout << "return=" << ret << std::endl;

	system("PAUSE");

	return 0;
}


