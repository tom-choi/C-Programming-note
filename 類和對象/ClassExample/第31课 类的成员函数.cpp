#include <iostream>
#include <string>
using namespace std;

//�ڱ���׶ξͽ���Ĵ���չ��ֱ���滻���ú�ĵط���
//����ʡȥ�˺������õ�ѹջ����ջ�ȿ���������ִ��Ч�ʷ���Ҫ�Ⱥ����ߡ�
#define Max_NUM(x,y) (x>y?x:y)

class student
{
public:
	string name{};
	int num{};
	int age{};

	int get_max_num(int a, int b, int c);
	void print_name();

	//��ĳ�Ա������ʵ��

private:
	char sex{};

	//��inline�ؼ��������ĺ����������ڵ��õ�ʱ��
	//�������Ĵ���ֱ��Ƕ�뵽���õĵط���
	//���Դ��ļ����˺������õĿ����������Ч��
	inline int max_num(int x, int y)
	{
		return (x > y ? x : y);
	}
	//ֻ�е�������ִ�����С��ֻ�м��д��룬
	//���һᱻƵ���ĵ��õ�ʱ����ʺ���Ϊ inline ��������
};

int student::max_num(int x, int y)
{
	return x > y ? x : y;
}

int student::get_max_num(int a, int b, int c)
{
	int max_ab = max_num(a, b);
	return max_ab > c ? max_ab : c;
}

void student::print_name()
{
	cout << "name = " << name << endl;
	cout << "number = " << num << endl;
	cout << "age = " << age << endl;
}

int main()
{
	int a = 5;
	++a;
	int b = a + 3;
	int ret = Max_NUM(6, 3);
	cout << ret << endl;
	printf("%d%d\n", a, b);

	student stu[2]; stu[0].name = "Tom"; stu[0].age = 18; stu[0].num = 100;
	stu[0].print_name();

	return 0;

}