//https://www.hackerrank.com/challenges/overloading-ostream-operator/problem
ostream& operator<<(ostream& os, Person person)
{
    os << "first_name=" << person.get_first_name() << ",last_name=" << person.get_last_name();
    return os;
}