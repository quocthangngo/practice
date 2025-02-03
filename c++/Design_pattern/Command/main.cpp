#include <iostream>
#include <string>
#include <unordered_map>
#include <memory>

// Abstract Expression
class Expression {
public:
    virtual ~Expression() = default;
    virtual int interpret(const std::unordered_map<std::string, int>& context) = 0;
};

// Terminal Expression
class Number : public Expression {
public:
    Number(int value) : value(value) {}
    int interpret(const std::unordered_map<std::string, int>& context) override {
        return value;
    }
private:
    int value;
};

// Variable Expression
class Variable : public Expression {
public:
    Variable(const std::string& name) : name(name) {}
    int interpret(const std::unordered_map<std::string, int>& context) override {
        return context.at(name);
    }
private:
    std::string name;
};

// Add Expression
class Add : public Expression {
public:
    Add(std::unique_ptr<Expression> left, std::unique_ptr<Expression> right)
        : left(std::move(left)), right(std::move(right)) {}
    int interpret(const std::unordered_map<std::string, int>& context) override {
        return left->interpret(context) + right->interpret(context);
    }
private:
    std::unique_ptr<Expression> left;
    std::unique_ptr<Expression> right;
};

// Subtract Expression
class Subtract : public Expression {
public:
    Subtract(std::unique_ptr<Expression> left, std::unique_ptr<Expression> right)
        : left(std::move(left)), right(std::move(right)) {}
    int interpret(const std::unordered_map<std::string, int>& context) override {
        return left->interpret(context) - right->interpret(context);
    }
private:
    std::unique_ptr<Expression> left;
    std::unique_ptr<Expression> right;
};

int main() {
    // Context with variable values
    std::unordered_map<std::string, int> context = {{"x", 5}, {"y", 10}};

    // Construct the expression (x + y) - (x - 3)
    std::unique_ptr<Expression> expression = std::make_unique<Subtract>(
        std::make_unique<Add>(
            std::make_unique<Variable>("x"),
            std::make_unique<Variable>("y")
        ),
        std::make_unique<Subtract>(
            std::make_unique<Variable>("x"),
            std::make_unique<Number>(3)
        )
    );

    // Interpret the expression
    int result = expression->interpret(context);
    std::cout << "Result: " << result << std::endl; // Output: Result: 13

    return 0;
}