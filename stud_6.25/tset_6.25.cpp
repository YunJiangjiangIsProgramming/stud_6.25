#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

template<class T>
class Vector
{
public:
	Vector(size_t capacity = 10)
		: _pData(new T[capacity])
		, _size(0)
		, _capacity(capacity)
	{}

	// ʹ������������ʾ�������������������ⶨ�塣
	~Vector();

	void PushBack(const T& data);
	void PopBack();
		// ...

		size_t Size() { return _size; }

	T& operator[](size_t pos)
	{
		assert(pos < _size);
		return _pData[pos];
	}

private:
	T* _pData;
	size_t _size;
	size_t _capacity;
};

template<class T>
Vector<T>::~Vector()
{
	delete[] _pData;
	_pData = nullptr;
	_size = _capacity = 0;
}

int main()
{
	Vector<int> v1;

	return 0;
}

int main()
{
	char str1[] = "apple";

	char str2[] = "����";
	cout << sizeof(str2) << endl;

	str2[3]--;
	cout << str2 << endl;

	str2[3]--;
	cout << str2 << endl;

	str2[3]--;
	cout << str2 << endl;

	str2[3]--;
	cout << str2 << endl;

	str2[3]--;
	cout << str2 << endl;

	str2[3]--;
	cout << str2 << endl;


	return 0;
}


int main()
{
	string s1;
	string s2("hello world");
	string s3 = "hello world";
	string s4(s3, 6, 3);
	cout << s4 << endl;
	string s5(s3, 6, 13);
	cout << s5 << endl;
	string s6(s3, 6);
	cout << s6 << endl;
	string s7("hello world", 5);
	cout << s7 << endl;
	string s8(10, '*');
	cout << s8 << endl;

	for (size_t i = 0; i < s2.size(); ++i)
	{
		s2[i]++;
	}

	cout << s2 << endl;

	for (size_t i = 0; i < s2.size(); ++i)
	{
		cout << s2[i] << " ";
	}
	cout << endl;


	return 0;
}

int main()
{
	string s1("hello world");
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << s1.max_size() << endl;
	cout << s1.capacity() << endl;

	return 0;
}

int main()
{
	string s1("hello");
	s1.push_back(' ');
	s1.push_back('!');
	cout << s1 << endl;

	s1.append("world");
	cout << s1 << endl;

	s1 += ' ';
	s1 += '!';
	s1 += "world";
	cout << s1 << endl;
}



int main()
{
	// �۲��������  -- 1.5������
	string s;

	//cout << sizeof(s) << endl;
	s.reserve(100);
	size_t sz = s.capacity();
	cout << "making s grow:\n";
	cout << "capacity changed: " << sz << '\n';
	for (int i = 0; i < 100; ++i)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

 /*17:25����*/
int main()
{
	// ����
	string s1("hello world");
	s1.reserve(100);
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

	// ����+��ʼ��
	string s2("hello world");
	s2.resize(100, 'x');
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;

	// ��sizeС��ɾ�����ݣ�����ǰ5��
	s2.resize(5);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;

	return 0;
}

int main()
{
	string s1("hello world");
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto ch : s1)
	{
		cout << ch << " ";
	}
	cout << endl;

	return 0;
}
//
//void Func(const string& s)
//{
//	/* �����Ͷ����������ݣ�����д*/
//	string::const_iterator it = s.begin();
//	while (it != s.end())
//	{
//		*it += 1;
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	string::const_reverse_iterator rit = s.rbegin();
//	auto rit = s.rbegin();
//	while (rit != s.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//}

//int main()
//{
//	// �����Ͷ�д����������
//	string s1("hello world");
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		*it += 1;
//
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	
//	string::reverse_iterator rit = s1.rbegin();
//	while (rit != s1.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//	Func(s1);
//
//	try
//	{
//		s1[100];
//		//s1.at(100);
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	
//
//	return 0;
//}

int main()
{
	// insert/erase���Ƽ�����ʹ�ã������þ�����
	// ��Ϊ���ǿ��ܶ�����ҪŲ�����ݣ�Ч�ʵ���
	string s1("world");
	s1.insert(0, "hello");
	cout << s1 << endl;

	//s1.insert(5, 1, ' ');
	//s1.insert(5, " ");
	s1.insert(s1.begin()+5, ' ');
	cout << s1 << endl;

	string s2("hello world");
	//s2.erase(5, 1);
	s2.erase(s2.begin() + 5);
	cout << s2 << endl;

	//s2.erase(5, 30);
	s2.erase(5);
	cout << s2 << endl;

	return 0;
}

int main()
{
	string s1("hello world");
	s1.replace(5, 1, "%%d");
	cout << s1 << endl;

	string s1("hello world i love you");
	size_t num = 0;
	for (auto ch : s1)
	{
		if (ch == ' ')
			++num;
	}
	// ��ǰ���ռ䣬����repalceʱ����
	s1.reserve(s1.size() + 2 * num);

	size_t pos = s1.find(' ');
	while (pos != string::npos)
	{
		s1.replace(pos, 1, "%20");
		pos = s1.find(' ', pos + 3);
	}
	cout << s1 << endl;

	
	string s1("hello world i love you");
	string newStr;
	size_t num = 0;
	for (auto ch : s1)
	{
		if (ch == ' ')
			++num;
	}
	// ��ǰ���ռ䣬����repalceʱ����
	newStr.reserve(s1.size() + 2 * num);

	for (auto ch : s1)
	{
		if (ch != ' ')
			newStr += ch;
		else
			newStr += "%20";
	}

	s1 = newStr;
	cout << newStr << endl;

	string s2("xxxxx");
	s1.swap(s2);
	cout << s1 << endl;
	cout << s2 << endl;

	swap(s1, s2);
	cout << s1 << endl;
	cout << s2 << endl;
}

int main()
{
	string s1("hello world");
	cout << s1 << endl;
	cout << s1.c_str() << endl;
	cout << (void*)s1.c_str() << endl;

	cout << s1 << endl;
	cout << s1.c_str() << endl;
	s1 += '\0';
	s1 += '\0';
	s1 += "xxxxx";
	cout << s1 << endl;
	cout << s1.c_str() << endl;

	string filename("test.cpp");
	FILE* fout = fopen(filename.c_str(), "r");
	if (fout == nullptr)
		perror("fopen fail");

	char ch = fgetc(fout);
	while (ch != EOF)
	{
		cout << ch;
		ch = fgetc(fout);
	}

	fclose(fout);

	return 0;
}

int main()
{
	string file("string.cpp.tar.zip");
	size_t pos = file.rfind('.');
	if (pos != string::npos)
	{
		//string suffix = file.substr(pos, file.size() - pos);
		string suffix = file.substr(pos);
		cout << suffix << endl;
	}

	string url("http://www.cplusplus.com/reference/string/string/find/");
	cout << url << endl;
	size_t start = url.find("://");
	if (start == string::npos)
	{
		cout << "invalid url" << endl;
	}

	start += 3;
	size_t finish = url.find('/', start);
	string address = url.substr(start, finish - start);
	cout << address << endl;


	return 0;
}

int main()
{
	std::string str("Please, replace the vowels in this sentence by asterisks.");
	std::size_t found = str.find_first_of("abcdv");
	while (found != std::string::npos)
	{
		str[found] = '*';
		found = str.find_first_of("abcdv", found + 1);
	}

	std::cout << str << '\n';

	string s1("hello world");
	string s2("hello world");
	s1 == s2;
	s1 == "hello world";
	"hello world" == s1;

	return 0;
}

#include <iostream>
#include<string>
using namespace std;

int main() 
{
	cin >> i >> j;
	string str;
	cin >> str;
	getline(cin, str);
	size_t pos = str.rfind(' ');
	if (pos != string::npos)
	{
		cout << str.size() - pos - 1 << endl;
	}
	else
	{
		cout << str.size() << endl;
	}

	return 0;
}
// 64 λ������� printf("%lld")