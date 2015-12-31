#include<iostream>
#include "dfa.h"

using namespace std;


DFA::DFA(int stateAmount,const int* endStates,int startState):stateAmount(stateAmount),endStates(endStates),startState(startState)
{
	cout<<"init..."<<endl;
}

