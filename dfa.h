#ifndef _DFA_H_
#define _DFA_H_
class DFA
{
	public:

		DFA(int stateAmount,const int* endStates,int startState);

	private:
		const int stateAmount;
		const int startState;
		const int* endStates;
		int currentState;
};


#endif
