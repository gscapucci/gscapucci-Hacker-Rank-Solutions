//https://www.hackerrank.com/challenges/c-class-templates/problem

template<typename T>
class AddElements {
    T element;
public:
    AddElements(T elem) : element(elem){}
    T add(T elem)
    {
        element += elem;
        return element;
    }
    string concatenate(string str)
    {
        element += str;
        return element;
    }
};

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';