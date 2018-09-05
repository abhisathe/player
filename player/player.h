#include<iostream>
using namespace std;
class player
{
private:
	char name[20];
	int id;
	char role[20];
	float run;
	int wicket, ing;
	static int maxwicket;
public:
	player();
	//player(char *, int, char*, float, int, int);
	void accept();
	void display();
	static int getmax();
};