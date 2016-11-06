# include <iostream>
// This is a simple program which asks user to input
// two numbers and prints its sum
int main()
{
    std::cout<<"Hello World"<<std::endl;
    std::cout<<"Enter two numbers"<<std::endl;
    int v1, v2, sum1;
    std::cin>>v1>>v2;
    sum1 = v1 + v2;
    std::cout<<"The sum is "<<sum1<<std::endl;
    int sum2,val;
    sum2=0;
    val=1;
    while(val<=10)
    {
        sum2 = sum2 + val;
        val = val + 1;
    }
    std::cout<<"the sum of numbers from 1 to 10 is "<<sum2<<std::endl;
    int i,sum3;
    sum3=0;
    for (i=1;i<=100;i++)
    {
        sum3=sum3+val;
    }
    std::cout<<"the sum of numbers from 1 to 100 is "<<sum3<<std::endl;
    int upper,lower,j,sum4;
    sum4=0;
    if (v1<= v2)
    {
        lower = v1;
        upper = v2;
    }
    else
    {
        lower = v2;
        upper = v1;
    }
    for (j=lower;j<=upper;j++)
    {
        sum4 = sum4 + j;
    }
    std::cout<<"the sum of numbers from the two numbers you entered is "<<sum4<<std::endl;
    int sum5,value;
    sum5=0;
    std::cout<<"Enter as many numbers as you like"<<std::endl;
// control+d is used to signify the end of file on mac (control+z on windows)
    while(std::cin>>value)
    {
        sum5 = sum5+value;
    }
    std::cout<<"The sum of the numbers you entered is"<<sum5<<std::endl;
    return 0;
}