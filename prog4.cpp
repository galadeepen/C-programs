# include <iostream>
int main()
{
    int a=19,b=7,div,mod;
    void results(const int &num1, const int &num2, int &div, int &mod);
    results(a,b,div,mod);
    std::cout<<"the dividend is "<<div<<std::endl;
    std::cout<<" The remainder is "<<mod<<std::endl;
    return 0;
}
void results(const int &num1, const int &num2, int &div, int &mod)
{
    div = num1/num2;
    mod = num1%num2;
}
