
#includes <iostream>
#include "dfa.h"

using  std::cout;
int main(int argc,char**argv)
{

	EndStates myEndStates;
   /* int endStates[10];*/
	//memset(endStates,0,sizeof(endStates));
	//endStates[0]=2;
	/*endStates[1]=3;*/
	myEndStates.push_front(2);
	myEndStates.push_front(3);
	DFA dfa(4,&myEndStates,0);
	dfa.init();	
	char str[10]="aacd";
	
	dfa.match(argv[1]);
	//dfa.match(str);
	return 0;
}
