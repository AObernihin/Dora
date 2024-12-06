

#include <iostream>
using namespace std;

class STRING 
{
private:
	char* row;
	int size;
	static int count;
public:
	STRING(int size) : size(size)
	{
		this->row = new char[80];
		strcpy(row, "0");
		count++;
	}
	
	STRING() : STRING(80) { count++; }
	
	STRING(const char* str) : size(strlen(str) + 1) 
	{
		row = new char[size]; strcpy(row, str);  
		count++; 
	};

	~STRING()
	{
		delete[] row;
	}

	void setall() 
	{
		cin >> size;
		cin >> row;
	}

	void ShowCount() const 
	{
		cout << count;
	}
	void Show() const {
		for (int i = 0; i < size; i++) 
		{
			cout << row[i];
		}
	}



int main()
{
	
}

