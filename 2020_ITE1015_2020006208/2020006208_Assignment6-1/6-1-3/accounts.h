#pragma oncei
class Account{
	public:
	int account;
	int balance;
	Account() {account=0; balance=0;}
};
class AccountManager{
	public:
	Account acc [10];
	int num;
	void deposit (int id, int m);
	void withdraw (int id, int m);
	void transfer(int id1, int id2);
	int check (int id);
};
