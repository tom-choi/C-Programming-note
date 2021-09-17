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
		//cout << "MyArray有參構造調用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//copy構造
	MyArray(const MyArray& arr)
	{
		//cout << "MyArray copy調用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;

		this->pAddress = new T[arr.m_Capacity];

		//將arr中的數據copy出來
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//重載=
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "MyArray重載調用" << endl;
		if (this->pAddress != NULL)
		{
			delete[]pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//深copy
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//尾插法
	void push_Back(const T number)
	{
		//判斷容量等於大小
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = number;
		this->m_Size++; //更新數組大小
	}

	//尾插法
	void Pop_Back()
	{
		//讓用戶無法訪問最後一個元素，邏輯刪除
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//以下標的方法訪問數組 //ex:arr[0] = 100
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//返回數組容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//返回數組大小
	int getSize()
	{
		return this->m_Size;
	}


	//析構
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "MyArray有參析構調用" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress; //指針

	int m_Capacity;

	int m_Size;
	
};