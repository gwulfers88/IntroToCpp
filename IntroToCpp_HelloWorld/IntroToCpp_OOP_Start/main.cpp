/*
	Classes YEA!...
*/

#include <iostream>
#include <string>

class Object
{
public:
	// Constructor
	Object()
	{
		printf("Constructor is being called\n");
	}

	// Destructor
	~Object()
	{
		printf("Destructor is being called\n");
	}

private:
	
protected:

};

#define SAFE_DELETE(ptr) if(ptr){ delete ptr; }

int main()
{
	Object* obj = new Object();
	SAFE_DELETE(obj);

	system("pause");

	return 0;
}