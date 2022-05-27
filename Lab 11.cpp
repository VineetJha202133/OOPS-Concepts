#include <iostream>
using namespace std;

class Math
{
    public:
    Math()
    {
        cout<<"Constructor"<<endl;
    }
    ~Math()
    {
        cout<<"Destructor";
    }
};

int main()
{
    Math m;
    return 0;
}
