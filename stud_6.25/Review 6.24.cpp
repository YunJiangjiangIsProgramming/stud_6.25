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
//void test_string2()//ʹ��[]���±�ȥ����
//{
//	
//	string s2("hello");
//	/*cout << s2 << endl;*/
//	string s3 = s2 += " wolrd";
//	
//	/*cout << s3 << endl;*/
//	for (size_t i = 0; i < s3.size(); i++)//��
//	{
//
//		cout << s3[i] << "";
//	}
//	cout << endl;
//	for (size_t i = 0; i < s3.size(); i++)//д
//	{
//		s3[i] += 1;//���±�ȥд
//
//		cout << s3[i] << "";
//	}
//	cout << endl;
//}
//
//void test_string3()//�õ�����ȥ����ͨ�÷���
//{
//
//	string s2("hello");
//	string s3 = s2 += " wolrd";
//
//	//string::iterator it = s3.begin();//s3begin����ֵ����һ�������� ��string::iterator it�������������
//	auto it = s3.begin();//��autoȥ���յ������ķ���ֵ
//	while(it!=s3.end())
//	{
//		cout << *it << "";//��
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
//		for (auto it = s3.begin(); it != s3.end(); ++it)//д
//		{
//			if (*it == 'h') // ����ַ���'h'
//			{
//				*it = 'H'; // �����滻Ϊ'H'
//			}
//			else if (*it == 'w') // ����ַ���'w'
//			{
//				*it = 'W'; // �����滻Ϊ'W'
//			}
//		}
//
//	std::cout << s3 << std::endl; // ����޸ĺ���ַ���
//
//}
//
//void test_string4()//���ű���
//{
//	string s2("hello");
//	string s3 = s2 += " wolrd";
//	//string::reverse_iterator rit = s3.rbegin();//���ű���Ӧ������д
//	auto rit = s3.rbegin();
//	/*while (rit != s3.rend())//string����г�ֵ��
//	{
//
//		cout << *rit << "";
//		++rit;
//
//	}*/
//	while (rit != s3.rend())
//	{
//		// ��������ֻ���޸���ĸ�ַ�
//		if (isalpha(*rit))
//		{
//			*rit += 1; // �޸��ַ�����������1
//		}
//		++rit;
//	}
//
//	// �ٴη�������Բ鿴�޸ĺ���ַ���
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
//int& string2int( const string& str)//ת����int���ʹ�const����ֻ���������
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
//	//�����÷���ֵ �����õ������޸����ֵ
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
//	cout << s1.capacity() << endl;//capacity��һ�����ݽӿ�
//	s2.reserve(100);
//	cout << s2.capacity() << endl;
//	s3.resize(100);
//	cout << s3.capacity() << endl;//resize�����ı�ռ� �����ֵ
//	//reserveֻ�п��ռ� ֻ��ı�ռ�
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