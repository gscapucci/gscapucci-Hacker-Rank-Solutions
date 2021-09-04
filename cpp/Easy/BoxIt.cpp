//https://www.hackerrank.com/challenges/box-it/problem

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

