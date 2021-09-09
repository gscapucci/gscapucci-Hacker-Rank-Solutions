//https://www.hackerrank.com/challenges/virtual-functions/problem

class Person {
public:
    int age;
    string name;
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor : public Person{
public:
    int publications, cur_id;
    static int id_control;
    void getdata() override
    {
        cin >> name;
        cin >> age;
        cin >> publications;
    }
    void putdata() override
    {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
    Professor()
    {
        id_control++;
        cur_id = id_control;
    }
};

int Professor::id_control = 0;

class Student : public Person{
public:
    int marks[6], cur_id;
    static int id_control;
    void getdata() override
    {
        cin >> name;
        cin >> age;
        for(int i = 0; i < 6; i++)
            cin >> marks[i];
    }
    void putdata() override
    {
        int sum = marks[0];
        for(int i = 1; i < 6; i++)
            sum += marks[i];
        
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
    Student()
    {
        id_control++;
        cur_id = id_control;
    }
};
int Student::id_control = 0;
