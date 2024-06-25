#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test_string1()
//{
//	string s1;
//	string s2("hello");
//	cout << s2 << endl;
//	string s3 = s2 += " wolrd";
//	cout << s1 << endl;
//	cout << s3 << endl;
//}
//
//void test_string2()//使用[]＋下标去遍历
//{
//	
//	string s2("hello");
//	/*cout << s2 << endl;*/
//	string s3 = s2 += " wolrd";
//	
//	/*cout << s3 << endl;*/
//	for (size_t i = 0; i < s3.size(); i++)//读
//	{
//
//		cout << s3[i] << "";
//	}
//	cout << endl;
//	for (size_t i = 0; i < s3.size(); i++)//写
//	{
//		s3[i] += 1;//用下标去写
//
//		cout << s3[i] << "";
//	}
//	cout << endl;
//}
//
//void test_string3()//用迭代器去读是通用方法
//{
//
//	string s2("hello");
//	string s3 = s2 += " wolrd";
//
//	//string::iterator it = s3.begin();//s3begin返回值就是一个迭代器 用string::iterator it接收这个迭代器
//	auto it = s3.begin();//用auto去接收迭代器的返回值
//	while(it!=s3.end())
//	{
//		cout << *it << "";//读
//		++it;
//	}
//	cout << endl;
//	/* it = s3.begin();*/
//	/*while (it != s3.end())
//	{
//		*it += 1;
//		++it;
//		cout << *it << "";
//	}*/
//		for (auto it = s3.begin(); it != s3.end(); ++it)//写
//		{
//			if (*it == 'h') // 如果字符是'h'
//			{
//				*it = 'H'; // 将其替换为'H'
//			}
//			else if (*it == 'w') // 如果字符是'w'
//			{
//				*it = 'W'; // 将其替换为'W'
//			}
//		}
//
//	std::cout << s3 << std::endl; // 输出修改后的字符串
//
//}
//
//void test_string4()//倒着遍历
//{
//	string s2("hello");
//	string s3 = s2 += " wolrd";
//	//string::reverse_iterator rit = s3.rbegin();//逆着遍历应该这样写
//	auto rit = s3.rbegin();
//	/*while (rit != s3.rend())//string类具有常值性
//	{
//
//		cout << *rit << "";
//		++rit;
//
//	}*/
//	while (rit != s3.rend())
//	{
//		// 假设我们只想修改字母字符
//		if (isalpha(*rit))
//		{
//			*rit += 1; // 修改字符，例如增加1
//		}
//		++rit;
//	}
//
//	// 再次反向遍历以查看修改后的字符串
//	rit = s3.rbegin();
//	while (rit != s3.rend())
//	{
//		cout << *rit;
//		++rit;
//	}
//	cout << endl;
//
//
//}
//
//int& string2int( const string& str)//转化成int类型传const进来只读这个数据
//{
//	int val = 0;
//	string::const_iterator it = str.begin();
//	while (it != str.end())
//	{
//		val *= 10;
//		val += (*it - '0');
//		++it;
//	}
//	return val;
//	//传引用返回值 外面拿到可以修改这个值
//}
//
//void test_string5()
//{
//	string s1("hello world");
//	string s2("hello");
//	string s3("hello");
//	
//	cout << s1.size() << endl;
//	cout << s2.size() << endl;
//	cout << s1.capacity() << endl;
//	s1 += "xxxxxxxxx";
//	cout << s1.capacity() << endl;//capacity是一个增容接口
//	s2.reserve(100);
//	cout << s2.capacity() << endl;
//	s3.resize(100);
//	cout << s3.capacity() << endl;//resize不仅改变空间 还会给值
//	//reserve只有开空间 只会改变空间
//
//}
//
//class Solution {
//public:
//    bool Ischar(char ch)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        {
//
//            return true;
//
//        }
//
//        else
//        {
//            return false;
//        }
//    }
//    string reverseOnlyLetters(string s)
//    {
//        int begin = 0;
//        int end = s.size() - 1;
//        while (begin < end)
//        {
//            while (begin < end && Ischar(s[begin]) == false)
//            {
//                ++begin;
//
//            }
//            while (begin < end && Ischar(s[end]) == false)
//            {
//                --end;
//
//            }
//            swap(s[begin], s[end]);
//            ++begin;
//            --end;
//
//        }
//        return s;
//    }
//
//};
//
//int main()
//{
//	/*test_string1();*/
//	/*test_string2();*/
//	/*test_string3();*/
//	/*test_string4();*/
//	
//	/*int ret= string2int("hello world");
//	cout << ret << endl;*/
//	/*test_string5();*/
//
//
//	return 0;
//}