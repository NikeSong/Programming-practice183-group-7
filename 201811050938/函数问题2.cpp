#include<iostream>
#include<string>
using namespace std;

void fun(int a,int b,int &c)//通过引用参数将新数传给主函数
{
	int a1=a%10;//a的个位数
	int a2=a/10;//a的十位数
	int b1=b%10;//b的个位数
	int b2=b/10;//b的十位数
	c=a1*1000+b1*100+a2*10+b2;

}

int main() {


	int a,b;
	cout<<"请输入整数a为：";
	cin>>a;
	
	cout<<"请输入整数b为：";
	cin>>b;

	int c;
	fun(a,b,c);
	cout<<"输出的C为："<<c<<endl;
}
