//#include<iostream>
//#include<string.h>
//using  namespace  std;
//
//class  Person
//{
//public:
//    Person(char* vn, int  vage, float  vh, float  vw);
//	Person(const  Person& vref);
//    void  Print();
//    ~Person();
//private:
//    char* pName;//姓名
//    int  age;//年龄
//    float  height;//身高
//    float  weight;//体重
//};
//
////构造函数
//Person::Person(char* vn, int  vage, float  vh, float  vw)
//{
//    int i;
//    i = strlen(vn);
//    pName = new char[i + 1];
//    strcpy_s(pName, i + 1,vn);
//    age = vage;
//    height = vh;
//    weight = vw;
//}
//
//
////拷贝构造函数
//Person::Person(const  Person& vref)
//{
//    int i;
//    i = strlen(vref.pName);
//    pName = new char[i + 1];
//    strcpy_s(pName,i + 1, vref.pName);
//    age = vref.age;
//    height = vref.height;
//    weight = vref.weight;
//}
//
//
//
////输出函数
//void Person::Print()
//{
//    cout << "姓名=" << pName << ";年龄=" << age << "岁\n身高=" << height << "米;体重=" << weight << "公斤\n";
//}
//
//
//Person::~Person()
//{
//    if (pName)    delete[]pName;
//    pName = NULL;
//}
//Person  fun(Person  Q)
//{
//    Q.Print();
//    return  Q;
//}
//
//int  main()
//{
//    char  name[10];
//    int  a;  float  h, w;
//    cin >> name >> a >> h >> w;
//    Person  p1(name, a, h, w);    //声明人员对象
//    fun(p1).Print();
//    return  1;
//}

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;//Hello World!
class String
{
	char* pdata;
public:
	String(char* x);
	String(const String& yy);
	void print();
	void ToUpper();
	~String()
	{
		if (pdata) delete[]pdata;
		pdata = NULL;
	}
};
String::String(char* x)
{
	pdata = new char[strlen(x) + 10];
	if (x != 0)
	{
		strcpy_s(pdata, strlen(x) + 10, x);
	}
}
String::String(const String& yy)
{
	pdata = new char[strlen(yy.pdata) + 10];
	strcpy_s(pdata, strlen(yy.pdata) + 10, yy.pdata);
}
void String::print()
{

	cout << pdata << endl;

}
void String::ToUpper()
{
	int i, k;
	k = strlen(pdata);
	for (i = 1; i <= k; i++)
	{
		if (pdata[i] >= 'a' && pdata[i] <= 'z')
		{
			pdata[i] = pdata[i] + 'A' - 'a';
		}
	}
}
int  main()
{
	char temp[50] = { '\0' };
	cin.getline(temp, 50, '\n'); //从键盘读入一行数据，遇到回车结束。
	String  str1(temp);//"Hello World! " ;
	str1.print();
	String str2 (str1);
	str2.print();
	str2.ToUpper();
	str2.print();
	return 0;
}
