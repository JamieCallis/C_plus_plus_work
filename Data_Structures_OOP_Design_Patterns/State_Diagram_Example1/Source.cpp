#include <iostream>
#include <vector>
using namespace std;

enum state {ACCEPTING, REJECTING};


class State
{
protected:
	StateContext * CurrentContext;
public:
	State(StateContext* Context) { CurrentContext = Context;  }
	virtual ~State(void) {}
};

class StateContext
{
protected:
	State * CurrentState = nullptr;
	int stateIndex = 0; 
	vector<State*> availableStates;
public:
	virtual ~StateContext(void);
	virtual void setState(state newState);
	virtual int getStateIndex(void);
};

StateContext::~StateContext(void)
{
	for (int i = 0; i < this->availableStates.size(); i++)
		delete this->availableStates[i];
}


void StateContext::setState(state newState)
{
	this->CurrentState = availableStates[newState];
	this->stateIndex = newState;
}

int StateContext::getStateIndex(void)
{
	return this->stateIndex;
}

class Transition
{
public:
	virtual bool _(int value) { cout << "Error!" << endl; return false; }
};

class ARState : public State, public Transition
{
	ARState(StateContext* Context) : State(Context) {}
};

class AcceptingEvenNumberOnes : public StateContext, public Transition
{
public:
	AcceptingEvenNumberOnes(void);
	bool _(int value);
};

AcceptingEvenNumberOnes::AcceptingEvenNumberOnes(void)
{
	this->availableStates.push_back(new Accepting(this));
	this->availableStates.push_back(new Rejecting(this));
	this->setState(ACCEPTING);
}

bool AcceptingEvenNumberOnes::_(int value)
{
	return ((ARState*)this->CurrentState)->_(value);
}


class Accepting : public ARState
{
public:
	Accepting(StateContext* Context) : ARState(Context) {}
	bool _(int value);
};

bool Accepting::_(int value)
{
	if (value == 1) this->CurrentContext->setState(REJECTING);
	else this->CurrentContext->setState(ACCEPTING);
	return true;
}

class Rejecting : public ARState
{
public:
	Rejecting(StateContext* Context) : ARState(Context) {}
	bool _(int value);
};

bool Rejecting::_(int value)
{
	if (value == 1) this->CurrentContext->setState(ACCEPTING);
	else this->CurrentContext->setState(ACCEPTING);
	return true;
}



int main(void)
{
	vector<int> zerosones = { 1, 0, 1, 1 };
	AcceptingEvenNumberOnes FiniteStateAutomata;

	for (int count = 0; count < zerosones.size(); count++) 
		FiniteStateAutomata._(zerosones[count]);

	if (FiniteStateAutomata.getStateIndex() == ACCEPTING)
		cout << "Accepted!" << endl;
	else cout << "Rejected!" << endl;

	return 0;
}