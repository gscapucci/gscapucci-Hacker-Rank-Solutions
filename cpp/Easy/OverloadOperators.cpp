//https://www.hackerrank.com/challenges/overload-operators/problem
ostream& operator<<(ostream& os, const Complex& c) {
    return os << c.a << (c.b > 0 ? '+' : '-') << 'i' << c.b;
}

Complex operator+(const Complex& a, const Complex& b) { 
    return { a.a + b.a, a.b + b.b };
}