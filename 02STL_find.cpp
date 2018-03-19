#include <iostream>//cout
#include<algorithm>//
#include<vector>//vector
#include <cctype> //std::tolower
#include <array>//array
#include <string>//string
using namespace std;

void demo_find()
{
	int myints[] = { 10,20,30,40 };
	int *p;

	p = std::find(myints, myints + 4, 30);

	if (p != myints + 4)
		cout << "Element found in myints:" << *p << "\n";
	else
		cout << "Element not found in myints\n";


	std::vector<int> myvector(myints, myints + 4);
	std::vector<int>::iterator it;

	it = find(myvector.begin(), myvector.end(), 30);
	if (it != myvector.end())
		cout << "Element found in myvector:" << *it << "\n";
	else
		cout << "Element not found in my vector\n";
}

bool demo_find_end_function(int i, int j)
{
	return (i == j);
}
void demo_find_end()
{
	cout << "====================DEMO_find_end()==============";

	int myints[] = { 1,2,3,4,5,1,2,3,4,5 };
	std::vector<int> haystack(myints, myints + 10);
	int needle1[] = { 1,2,3 };

	std::vector<int>::iterator it;
	it = std::find_end(haystack.begin(), haystack.end(), needle1, needle1 + 3);
	if (it != haystack.end())
		cout << "needle1 last found at position:" << (it - haystack.begin()) << "\n";

	int needle2[] = { 5,1,2};
	it = std::find_end(haystack.begin(), haystack.end(), needle2, needle2 + 3, demo_find_end_function);
	if (it != haystack.end())
		cout << "needle2 last found at position:" << (it - haystack.begin()) << "\n";
}

bool IsOdd(int i)
{
	return((i % 2) == 1);
}

void demo_find_if()
{
	cout << "====================DEMO_find_if()==============\n";
	std::vector<int> myvector;
	myvector.push_back(10);
	myvector.push_back(25);
	myvector.push_back(40);
	myvector.push_back(55);

	std::vector<int>::iterator it = std::find_if(myvector.begin(), myvector.end(), IsOdd);

	cout << "The first odd value is" << *it << "\n";
}

bool comp_case_insensitive(char c1, char c2)
{
	return (std::tolower(c1) == std::tolower(c2));
}
void demo_find_first_of()
{
	cout << "====================DEMO_find_first_of()==============\n";

	int mychars[] = { 'a','b','c','A','B','C' };
	std::vector<char> haystack(mychars, mychars + 6);
	std::vector<char>::iterator it;

	int needle[] = { 'A','B','C'};
	it = find_first_of(haystack.begin(),haystack.end(),needle,needle+3);

	if (it != haystack.end())
		cout << "The first match is:" << *it << '\n';

	it = find_first_of(haystack.begin(), haystack.end(), needle, needle + 3, comp_case_insensitive);
	if (it != haystack.end())
		cout << "The first match is:" << *it << '\n';

}

void demo_find_if_not()
{
	cout << "====================DEMO_find_if_not()==============\n";
	std::array<int, 5> foo = { 1,5,3,4,5 };
	std::array<int, 5>::iterator it = std::find_if_not(foo.begin(), foo.end(), [](int i) {return i % 2; });
	cout << "The first even is=" << *it << '\n';

}

struct value_t
{
	int a;
	int b;
};

class vector_finder
{
public:
	vector_finder(const int a) :m_i_a(a) {}
	bool operator () (const std::vector<struct value_t>::value_type &value)
	{
		return value.a == m_i_a;
	}


private:
	int m_i_a;

};

void test01()
{
	cout << "====================test()==============\n";

	std::vector<struct value_t> my_vector;
	struct value_t my_value;
	my_value.a = 11; my_value.b = 1001;
	my_vector.push_back(my_value);

	my_value.a = 12; my_value.b = 1002;
	my_vector.push_back(my_value);

	my_value.a = 13; my_value.b = 1003;
	my_vector.push_back(my_value);

	my_value.a = 14; my_value.b = 1004;
	my_vector.push_back(my_value);

	std::vector<struct value_t>::iterator it = my_vector.end();
	it = std::find_if(my_vector.begin(),my_vector.end(),vector_finder(13));

	if (it == my_vector.end())
		printf("not found\n");
	else
		printf("found value.a=%d value.b=%d\n", it->a, it->b);

}

static char ch = 'a';

bool myfunction(const std::string &lhs, const std::string &rhs)
{
	return lhs < rhs;
}

bool myfunction2(const std::string &lhs)
{
	return lhs[0] == ch;
}

void test02()
{
	std::vector<std::string> myvector;
	myvector.push_back("wo");
	myvector.push_back("wi");
	myvector.push_back("wa");
	myvector.push_back("ao");
	myvector.push_back("bo");
	myvector.push_back("ae");
	myvector.push_back("bv");
	myvector.push_back("cd");
	myvector.push_back("ef");
	myvector.push_back("gd");
	myvector.push_back("ww");
	myvector.push_back("cd");
	myvector.push_back("at");
	myvector.push_back("bt");
	myvector.push_back("ct");
	myvector.push_back("dt");
	myvector.push_back("et");
	myvector.push_back("ft");
	myvector.push_back("gt");
	myvector.push_back("ht");
	myvector.push_back("it");
	myvector.push_back("jt");
	myvector.push_back("kt");
	myvector.push_back("lt");
	myvector.push_back("mt");
	myvector.push_back("nt");
	myvector.push_back("ot");
	myvector.push_back("pt");

	myvector.push_back("qt");
	myvector.push_back("rt");
	myvector.push_back("st");
	myvector.push_back("tt");
	myvector.push_back("ut");
	myvector.push_back("vt");
	myvector.push_back("wt");
	myvector.push_back("xt");
	myvector.push_back("yt");
	myvector.push_back("zt");

	myvector.push_back("qt");
	myvector.push_back("et");
	myvector.push_back("ee");

	std::stable_sort(myvector.begin(), myvector.end(), myfunction);
	for (std::string &s : myvector)
		std::cout << s << " ";

	std::cout << std::endl;
	std::cout << "===============" << std::endl;

	for (int i = 1; i < 27; i++)
	{
		auto it_begin = std::find_if(myvector.begin(), myvector.end(), myfunction2);
		auto it_end = std::find_if_not(it_begin, myvector.end(), myfunction2);

		for (auto i = it_begin; i != it_end; i++)
		{
			std::cout << *i << " ";
		}

		std::cout << std::endl;

		ch++;
	}
}

int main02()
{
	//demo_find();
	//demo_find_end();
	//demo_find_if();
	//demo_find_first_of();
	//demo_find_if_not();
	//test01();
	test02();

	system("pause");
	return 0;
}