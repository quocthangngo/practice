#include <iostream>
#include <string>
#include <vector>

// Forward declaration
class Colleague;

// Mediator interface
class Mediator {
public:
    virtual void sendMessage(const std::string& message, Colleague* colleague) = 0;
};

// Colleague class
class Colleague {
protected:
    Mediator* mediator;
public:
    Colleague(Mediator* mediator) : mediator(mediator) {}
    virtual void receiveMessage(const std::string& message) = 0;
};

// Concrete Colleague classes
class ConcreteColleague1 : public Colleague {
public:
    ConcreteColleague1(Mediator* mediator) : Colleague(mediator) {}
    void sendMessage(const std::string& message) {
        mediator->sendMessage(message, this);
    }
    void receiveMessage(const std::string& message) override {
        std::cout << "Colleague1 received: " << message << std::endl;
    }
};

class ConcreteColleague2 : public Colleague {
public:
    ConcreteColleague2(Mediator* mediator) : Colleague(mediator) {}
    void sendMessage(const std::string& message) {
        mediator->sendMessage(message, this);
    }
    void receiveMessage(const std::string& message) override {
        std::cout << "Colleague2 received: " << message << std::endl;
    }
};

// Concrete Mediator class
class ConcreteMediator : public Mediator {
private:
    std::vector<Colleague*> colleagues;
public:
    void addColleague(Colleague* colleague) {
        colleagues.push_back(colleague);
    }
    void sendMessage(const std::string& message, Colleague* sender) override {
        for (Colleague* colleague : colleagues) {
            if (colleague != sender) {
                colleague->receiveMessage(message);
            }
        }
    }
};

int main() {
    ConcreteMediator mediator;

    ConcreteColleague1 colleague1(&mediator);
    ConcreteColleague2 colleague2(&mediator);

    mediator.addColleague(&colleague1);
    mediator.addColleague(&colleague2);

    colleague1.sendMessage("Hello from Colleague1");
    colleague2.sendMessage("Hello from Colleague2");

    return 0;
}