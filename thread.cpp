#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#include<thread>
#define ull unsigned long long
#define mxx 1e18-1
using namespace std;

int cnt=1;

void odd()
{
	while(cnt%2==1 && cnt<=10)
	{
		cout<<cnt<<endl;
		cnt++;
	}
}

void even()
{
	while(cnt%2==0 && cnt<=10)
	{
		cout<<cnt<<endl;
		cnt++;
	}
}


int main()
{ thread t1(odd);
  thread t2(even);
  t1.join();
  t2.join();
 return 0;
}
