
#include <iostream>
#include "dfa.h"

using namespace std;
int main()
{

	int endStates[10];
	memset(endStates,0,sizeof(endStates));
	endStates[0]=2;
	endStates[1]=3;
	DFA(4,endStates,0);

	return 0;
}
