//stack using array
#include<iostream>
using namespace std;
int stack[100],n=100,top=-1;
void push(int x){
	if(top==n-1)
		cout<<"Overflow!\n";
	else{
	top++;
	stack[top]=x;
	cout<<"Element "<< x <<" is pushed.\n";
	}
}
void pop(){
	if(top==-1)
	cout<<"Stack Underflow!\n";
	else{
	int popped=stack[top];
	cout<<"element popped : "<< popped<<endl;
	top--;
	}
}
void display(){
	if(top>=0){
		cout<<"Stack Elements :";
		for(int i=top;i>=0;i--)
		cout<<stack[i]<<" ";
		cout<<endl;
	}else{
		cout<<"Stack is empty !\n";
	}
}
int main()
{
	int choice,value;
	cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nENTER YOUR CHOICE : ";
	cin>>choice;
 do{
	cout<<"Enter choice :\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\nEnter element to PUSH : "<<endl;
			cin>>value;
			push(value);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			cout<<"\nExit\n";
			break;
		default:
			cout<<"Please enter a valid choice ! \n";
	}
}while(choice!=4);
return 0;
}
