#ifndef _DFA_H_
#define _DFA_H_

#include <list>

typedef std::list<int> EndStates;
class DFA
{
	public:

		DFA(int stateAmount,const EndStates* endStates,int startState);
		void init();
		int isEnd();
		void trans(char);
		bool match(const char *);
	private:
		const int stateAmount;
		const int startState;
		//const int* endStates;
		const EndStates  *endStates; 
		int currentState;
		bool successState;
};


#endif
