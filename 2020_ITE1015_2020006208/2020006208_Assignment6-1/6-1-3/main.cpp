#include <iostream>
#include "accounts.h"
using namespace std;
int main ()
{
	int idnum=0;
	char ac='x';
	AccountManager am;
	while (1)
	{
		cout<<"Jobs?"<<endl;
		char k;
		cin>>k;
		if (k=='Q')
			return 0;
		else if (k=='N')
		{
			if( idnum>9)
			{
				cout<<"You can't make more account."<<endl<<endl;
			}
			else
			{
				am.acc[idnum].account=idnum;
				am.num=idnum;
				cout<<"Account for user "<<idnum<<" registered"<<endl;
				cout<<"Balance of user "<<idnum<<": "<<am.check(idnum)<<endl<<endl;			
				idnum++;	
				ac='o';	
			}
		}
		else if (k=='D')
		{
			int id, m;
			cin>>id>>m;
			if(idnum<id || ac=='x')
				cout<<"Account does not exist"<<endl<<endl;
			else if (am.check(id)+m>1000000)
			{
				cout<<"Failure: Deposit to user "<<id<<" "<<m<<endl;
				cout<<"Balance of user "<<id<<": "<<am.check(id)<<endl<<endl;}
			else 
			{
			cout<<"Success: Deposit to user "<<id<<" "<<m<<endl;
			am.deposit(id,m);
			cout<<"Balance of user "<<id<<": "<<am.check(id)<<endl<<endl;}
		
		}
		else if (k=='W'){
			 int id, m;
			 cin>>id>>m;
                         if(am.check(id)<m)
				 cout<<"Failure: Withdraw from user "<<id<<" "<<m<<endl;
			 else{
				 cout<<"Success: Withdraw from user "<<id<<" "<<m<<endl;
			 am.withdraw(id,m);}
			 cout<<"Balance of user "<<id<<": "<<am.check(id)<<endl<<endl;
		}
		else if (k=='T'){
			int id1, id2;
			cin>>id1>>id2;
			am.transfer(id1, id2);
			cout<<"Success: Transger the amout between user "<<id1<<" and "<<id2<<endl;
			cout<<"Balance of user "<<id1<<": "<<am.check(id1)<<endl;
			cout<<"Balance of user "<<id2<<": "<<am.check(id2)<<endl<<endl;
		}


	}

	return 0;
}	
