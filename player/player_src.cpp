#include"player.h"
player::player()
{
	strcpy( this->name,"unknown");
	this->id=0;
	strcpy(this->role, "all");
	this->run=0;
	this->wicket=0;
	this->ing=0;

}
int player::maxwicket = 0;
void player::accept()
{
	cout << "Enter name, id , role ,run, wickets, innings";
	cin >> this->name;
	cin >> this->id;
	cin >> this->role;
	cin >> this->run;
	cin >> this->wicket;
	cin >> this->ing;
	if (this->wicket > maxwicket)
	{
		maxwicket = this->wicket;
	}

}
void player::display()
{
	cout<<endl<< this->name<<endl<<this->id<<endl<< this->role<<endl<<this->run<<this->wicket<<this->ing;

}
int player::getmax()
{
	return maxwicket;
}