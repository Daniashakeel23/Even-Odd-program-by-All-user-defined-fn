#include <iostream>
using namespace std;
void fun1()
	{
	int n;
	cout<<"Enter a number :";
	cin>>n;
	if(n%2==0)
	cout<<n<<" is  even number";
	else
	cout<<n<<" is  odd number";
	}
int fun2()
	{
    int n;
    cout<<"\n\nEnter the number :";
    cin >> n;
    if (n%2==0)
    {
    cout<<n<<" is  even number.";
    }
    else
    {
    cout<<n<<" is  odd number.";
    }
    return n;
	}
void fun3(int a)
	{
	
	cout<<"\n\nEnter the number :";
	cin>>a;
    if (a%2==0)
    {
        cout << a << " is  even number.";
    }
    else {
        cout << a << " is  odd number.";
    }
	}
int fun4(int b)
	{
 
    cout << "\n\nEnter the number :";
    cin >>b;
    if(b%2==0)
        cout << b << " is  even number.";
    else
        cout<< b << " is  odd number.";
    return 0;
    
	}
int main()
	{
		fun1();
		
   	 	fun2();
	
		int a;
	 	fun3(a);
	 	
		int b;
		fun4(b);
	}
