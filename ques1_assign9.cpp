#include<iostream>
using namespace std;
void product(int* p1, int* p2)
{
    int product_of_two_number;
    product_of_two_number = (*p1)*(*p2);
    cout<<"The product of "<<*p1<<" and "<<*p2<<" is "<<product_of_two_number;
    return;

}
int main()
{
    int x;
    cout<<"Enter the first number: ";
    cin>>x;
    int y;
    cout<<"Enter the second number: ";
    cin>>y;
    int* p1 = &x;
    int* p2 = &y;
    product(&x,&y);   
}