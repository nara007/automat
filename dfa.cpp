#include<iostream>
#include "dfa.h"

using std::cout;
using std::endl;


DFA::DFA(int stateAmount,const EndStates* endStates,int startState=0):stateAmount(stateAmount),endStates(endStates),startState(startState)
{
	cout<<"init..."<<endl;
}
void DFA::init()
{
	this->currentState=this->startState;
	this->successState=true;
}
int DFA::isEnd()
{
	EndStates::const_iterator it;
	for(it=endStates->begin(); it != endStates->end(); it++)
	{
		if(*it==this->currentState)
			return 0;
	}
	return 1;
}

void DFA::trans(char ch)
{
	switch(this->currentState)
	{
		case 0:
			if(ch=='a')
			{
				this->currentState=1;
			}
			else
			{
				this->successState=false;
			}
			break;

		case 1:
			if(ch=='a')
			{
				this->currentState=1;
			}
			else if(ch=='c')
			{
				this->currentState=2;
			}
			else if(ch=='d')
			{
				this->currentState=3;
			}
			else
			{
				this->successState=false;
			}

			break;

		case 2:
			this->successState=false;
			break;

		case 3:
			this->successState=false;
			break;

		default:
			this->successState=false;
			break;
	}
}

bool DFA::match(const char* str)
{
	for(int i=0;i<strlen(str);i++)
	{
		this->trans(str[i]);
		if(this->successState==false)
		{
			cout<<"string cannot be matched..."<<std::endl;
			return false;
		}
		else
		{

		}
	}


	if(this->isEnd()==0)
	{
		cout<<"matched.."<<std::endl;
		return true;
	}
	else
	{
		cout<<"string cannot be matched...2"<<std::endl;		
		return false;
	}


}
