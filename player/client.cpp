#include<conio.h>
#include"player.h"

int main()
{
	player p[3];
	for (int i = 0; i < 3; i++)
	{
		p[i].accept();
		
	}
	for (int i = 0; i < 3; i++)
	{
		p[i].display();

	}
	player p1;
	cout << "\n max wickets=" << p1.getmax();
	_getch();
	return 0;
}