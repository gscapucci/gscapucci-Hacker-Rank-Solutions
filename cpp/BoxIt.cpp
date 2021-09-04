//https://www.hackerrank.com/challenges/box-it/problem
#include <iostream>

using namespace std;
class Box{
    int l, b, h;
public:
    Box()
        :l(0),b(0),h(0){}
        
    Box(int length, int breadth, int height)
        :l(length),b(breadth),h(height){}
        
    Box(Box& B)
        :l(B.l),b(B.b),h(B.h){}
        
    int getLength()
    {
        return l;
    }
    
    int getBreadth()
    {
        return b;
    }
    
    int getHeight()
    {
        return h;
    }
    
    long long CalculateVolume()
    {
        long long volume = l;
        volume *= b;
        volume *= h;
        return volume;
    }
    
    bool operator<(Box& B)
    {
        if(this->l < B.l) return true;
        if(this->b < B.b && this->l == B.l) return true;
        if(this->h < B.h && this->b == B.b && this->l == B.l) return true;
        return false;
    }
    friend ostream& operator<<(ostream& out, Box& B);
};

ostream& operator<<(ostream& out, Box& B)
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}