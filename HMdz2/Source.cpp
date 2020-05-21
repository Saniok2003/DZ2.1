#include <iostream>
using namespace std;
#include <string>

class Rectangle
{
private:

	struct Coord
	{
		int x = 0;
		int y = 0;
		int pow_x = 0;
		int pow_y = 0;
	};
	Coord Plow;
public:

	void PramKvadr(int h)
	{
		cin >> h;
		if (h == 1)
		{
			cin >> h;
			Plow.x = h;
			Plow.y = h;
		}
		else if (h == 2)
		{
			cin >> h;
			Plow.x = h;
			cin >> h;
			Plow.y = h;
		}
		else
		{
			cout << "error" << endl;
		}
		cout << endl;
	}

	void Vuvid(int x,int y)
	{
		Plow.pow_x = x;
		Plow.pow_y = y;
		for (int l = 0; l < Plow.pow_y; l++)
		{
			cout << endl;
		}
		for (int i = 0; i < Plow.y; i++)
		{
			for (int k = 0; k < Plow.pow_x; k++)
			{
				cout << "  ";
			}
			for (int j = 0; j < Plow.x; j++)
			{
				cout << "8 ";
			}
			cout << endl;
		}
		cout << endl;
	}
	void Vuvid2()
	{
		do
		{
			cin >> Plow.pow_y;
			cin >> Plow.pow_x;
			if (Plow.pow_x < 1 && Plow.pow_y < 1)
			{
				cout << "Error" << endl;
			}
		} while (Plow.pow_x < 1 || Plow.pow_y < 1);
		for (int l = 0; l < Plow.pow_y; l++)
		{
			cout << endl;
		}
		for (int i = 0; i < Plow.y; i++)
		{
			for (int k = 0; k < Plow.pow_x; k++)
			{
				cout << "  ";
			}
			for (int j = 0; j < Plow.x; j++)
			{
				cout << "8 ";
			}
			cout << endl;
		}
		cout << endl;
	}
};

int main()
{
	Rectangle xy;
	int h = 0;
	xy.PramKvadr(h);
	xy.Vuvid(8,8);
	xy.Vuvid2();
}