#include<iostream>
using namespace std;
class animal
    {
    public:
    void display()
    {
    cout<<"this is an animal class";
    }
};
    class dog : public animal
    {
        public:
        void bark()
        {
            cout<<"dog is barking"<<endl;
        }
    };
    int main()
{
    dog d;
    d.display();

    d.bark();     

    return 0;
}
