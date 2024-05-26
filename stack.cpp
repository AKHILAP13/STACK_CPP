#include<iostream>
int i;
static int c=0;
int p,r,q,t,u;
#define max 10
using namespace std;
template <class Type>
class stack
{
	Type stk[max];
	int TOP;
	public:
	stack()
	{
		TOP=-1;
	}
	void push(Type t)
	{
		if(TOP==max)
		{
			cout<<"\033[34m stack overflow\033[0m"<<endl;
		}
		else
		{
			TOP++;
			stk[TOP]=t;
		}
	}
	void pop()

	{
		if(TOP==-1)
			cout<<"\033[34m stack underflow\033[0m"<<endl;
		else
		{
			TOP--;
		}
	}
	void display()
	{
		if(TOP==-1)

			cout<<"\033[34m stack is empty\033[0m"<<endl;
		else
		{
			for(i=0;i<=TOP;i++)
				cout<<stk[i]<<" ";
				cout<<endl;
		}
	
	}
	void clear()
	{
		TOP=-1;
	}
};
int main()
{
	int op;
	string s;
	stack<int>obj1;
	stack<char>obj2;
	stack<float>obj3;
	stack<double>obj4;
	stack<string>obj5;
	static int c1=0,c2=0,c3=0,c4=0,c5=0;
	L1:
	while(1)
	{
	cout<<"\033[31m 1.int  2.char  3.float  4.double  5.string  6.exit\033[0m"<<endl;
	cout<<"enter option for main menu"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:c1++;
		       if(c1>1)
		       {
			       cout<<"\033[34m 1.continue old_stack  2.new_stack\033[0m"<<endl;
			       cin>>p;
			       if(p==1)
			       {
				       goto L2;
			     
			       }
			       else
				       obj1.clear();
		       }
		       cout<<"\033[34m int stack application ready to use\033[0m"<<endl;
		       int K,i;
                       L2:
       		       while(1)
		       {
		       cout<<"\033[35m 1.push  2.pop  3.display_stack  4.main_menu\033[0m"<<endl;
		       cout<<"enter option sub menu"<<endl;

		       cin>>i;
		       switch(i)
		       {
			       case 1:cout<<"\033[32m enter element\033[0m"<<endl;
		                      cin>>K;
			              obj1.push(K);
			              break;
			       case 2:obj1.pop();
			               break;
			       case 3:obj1.display();
			               break;
			       case 4:goto L1;
		       }
		       }
		       break;

		case 2:c2++;
		       if(c2>1)
		       {
			       cout<<"\033[34m 1.continue old_stack  2.new_stack\033[0m"<<endl;
			       cin>>q;
			       if(q==1)
			       {
				       goto L3;
			       }
			       else
				       obj2.clear();
		       }
		       else
		       {
		       cout<<"\033[34m char stack application ready to use\033[0m"<<endl;
		       char ch;
		       int j;
		       L3:
		       while(1)
		       {
		       cout<<"\033[35m 1.push  2.pop  3.display_stack  4.main_menu\033[0m"<<endl;
		       cout<<"enter option sub menu"<<endl;
		       cin>>j;
		       switch(j)
		       {
			       case 1:cout<<"\033[32m enter element\033[0m"<<endl;
			              cin>>ch;
			             obj2.push(ch);
			              break;
			       case 2:obj2.pop();
			               break;
			       case 3:obj2.display();
			               break;
			       case 4:goto L1;
		       }
		       }
		       }
		       break;
		case 3:c3++;
		       if(c3>1)
		       {
			       cout<<"\033[34m 1.continue old_stack  2.new_stack\033[0m"<<endl;
                               cin>>r;
			       if(r==1)
			       {
				       goto L4;
			       }
			       else
				       obj3.clear();
		       }
		       else
		       {
		       cout<<"\033[34m float stack application ready to use\033[0m"<<endl;
		       float f;
		       int k;
		       L4:
		       while(1)
		       {
		       cout<<"\033[35m 1.push  2.pop  3.display_stack  4.main_menu\033[0m"<<endl;
		       cout<<"enter option sub menu"<<endl;
		       cin>>k;
		       switch(k)
		       {
			       case 1:cout<<"\033[32m enter elements\033[0m"<<endl;
			              cin>>f;
			             obj3.push(f);
			              break;
			       case 2:obj3.pop();
			               break;
			       case 3:obj3.display();
			               break;
			       case 4:goto L1;
		       }
		       }
		       }
		       break;
		case 4:c4++;
		       if(c4>1)
		       {
			       cout<<"\033[34m 1.continue old_stack  2.new_stack\033[0m"<<endl;
			       cin>>t;
			       if(t==1)
			       {
				       goto L5;
			       }
			       else
				       obj4.clear();
		       }
		       else
		       {
		      cout<<"\033[34m double stack application ready to use\033[0m"<<endl;
		       double d;
		       int l;
		       L5:
		       while(1)
		       {
		       cout<<"\033[35m 1.push  2.pop  3.display_stack  4.main_menu\033[0m"<<endl;
		       cout<<"enter option sub menu"<<endl;
		       cin>>l;
		       switch(l)
		       {
			       case 1:cout<<"\033[32m enter element\033[0m"<<endl;
			              cin>>d;
			             obj4.push(d);
			              break;
			       case 2:obj4.pop();
			               break;
			       case 3:obj4.display();
			               break;
			       case 4:goto L1;
		       }
		       }
		       }
		       break;
		case 5:c5++;
		       if(c5>1)
		       {
			       cout<<"\033[34m 1.continue old_stack  2.new_stack\033[0m"<<endl;
			       cin>>u;
			       if(u==1)
			       {
				       goto L6;
			       }
			       else
				       obj5.clear();
		       }
		       else
		       {
		       cout<<"\033[34m string stack application ready to use\033[0m"<<endl;
		       int m;
		       L6:
		       while(1)
		       {
		       cout<<"\033[35m 1.push  2.pop  3.display_stack  4.main_menu\033[0m"<<endl;
		       cout<<"enter option sub menu"<<endl;
		       cin>>m;
		       switch(m)
		       {
			       case 1:cout<<"\033[32m enter element\033[0m"<<endl;
			              cin>>s;
			             obj5.push(s);
			              break;
			       case 2:obj5.pop();
			               break;
			       case 3:obj5.display();
			               break;
			       case 4:goto L1;
		       }
		       }
		       }
		       break;
		case 6:exit(0);        
		default:c++;
		        if(c==1)
				cout<<"\033[34m please read the caption carefully\033[0m"<<endl;
			if(c==2)
				cout<<"\033[34m Last chance please take care\033[0m"<<endl;
			if(c==3)
			{
				cout<<"\033[34m thanks for using our application please read the manual and come back properly\033[0m"<<endl;
				return 0;
			}

		        
	}
	}
}
		       




