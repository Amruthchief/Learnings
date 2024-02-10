#include <iostream>

using namespace std;

int sign(int num)
{
	if(num > 0)
		return 1;
	else if(num < 0)
		return -1;
	return 0;
}

pair<int, int> getPos(int steps)
{
	int delta = 10;
	pair<int, int> pos(0, 0);
	for(int s = 0;s < steps;++s)
	{
		if(s % 2 == 0)
		{
			pos.first += delta;
			delta += sign(delta) * 10;
            cout<<delta<<" ";
		}
		else
		{
			pos.second += delta;
			delta += sign(delta) * 10;
			delta = -delta;
            cout<<delta;
		}
	}
	return pos;
}


int main()
{
    int s;
    cout<<"enter position"<<endl;
    cin>>s;

    getPos(s);


}