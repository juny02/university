#include "accounts.h"
void AccountManager::deposit (int id, int m){
	acc[id].balance+=m;}

void AccountManager::withdraw (int id, int m){
        acc[id].balance-=m; }

void AccountManager::transfer(int id1, int id2)
{
	int k=acc[id1].balance;
	acc[id1].balance = acc[id2].balance;
	acc[id2].balance=k;
}
int AccountManager::check(int id){
	return acc[id].balance;
}
