#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		//cout << "MyArray�Ѕ������{��" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//copy����
	MyArray(const MyArray& arr)
	{
		//cout << "MyArray copy�{��" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;

		this->pAddress = new T[arr.m_Capacity];

		//��arr�еĔ���copy����
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//���d=
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "MyArray���d�{��" << endl;
		if (this->pAddress != NULL)
		{
			delete[]pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//��copy
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//β�巨
	void push_Back(const T number)
	{
		//�Д�������춴�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = number;
		this->m_Size++; //�����M��С
	}

	//β�巨
	void Pop_Back()
	{
		//׌�Ñ��o���L������һ��Ԫ�أ�߉݋�h��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//���˵ķ����L�����M //ex:arr[0] = 100
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//���ؔ��M����
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//���ؔ��M��С
	int getSize()
	{
		return this->m_Size;
	}


	//����
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "MyArray�Ѕ������{��" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress; //ָ�

	int m_Capacity;

	int m_Size;
	
};