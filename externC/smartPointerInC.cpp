#include<iostream>
#include<memory>

using namespace std;


void foo(){
    cout<<sizeof(std::unique_ptr<int>)<<sizeof(int *)<<'\n';

    std::unique_ptr<uint32_t> x(new uint32_t(0xff));
    uint32_t t=0x01;
    x=&t;
    x.reset(&t);
}

int main()
{
    foo();
    return 0;
}