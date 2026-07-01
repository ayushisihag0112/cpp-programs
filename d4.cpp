#include<iostream>
using namespace std;
class bankaccount
{
    private:
    float balance;
    public:
    void setbalance(float a)
    {
        balance=a;
    }
    void getbalance()
    {
        cout<<"balance="<<balance<<endl;
    }
};
int main()
{
bankaccount b;
b.setbalance(1000);
b.getbalance();
return 0;
}