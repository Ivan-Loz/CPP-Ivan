#include <iostream>
using namespace std;
class State;
class Door {
public:
    Door(State* initialState) : currentState(initialState) {}

    void setState(State* state) {
        currentState = state;
    }

    void openn();
    void closee();
private:
    State* currentState;
};
class State {
public:
    virtual void open(Door* dor) = 0;
    virtual void close(Door* dor) = 0;
};
class OpenState : public State {
public:
    void open(Door* dor) {
        cout << "Door open" << endl;
        dor->setState(new ClosedState());
    }
};
class ClosedState : public State {
public:
    void close(Door* dor) {
        cout << "Door close" << endl;
        dor->setState(new OpenState());
    }
};
int main() {
    OpenState dddd;
    Door dor(new OpenState());
}