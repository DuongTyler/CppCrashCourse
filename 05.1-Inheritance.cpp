#include <stdio.h>

class V
{
	public:
		V(int w)
		{
			wheel = w;
		}
	protected:
		int wheel;
};

class C : public V
{
	public:
		C(int w) : V(w)
		{
			
		}
		void getW()
		{
			wheel = 5;
			printf( "%d\n", wheel);
		}
};

int main()
{
	C *car = new C(4);
	car -> getW();
	delete car;
}
