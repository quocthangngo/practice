#include <iostream>
#include <vector>
#include <memory>

// Iterator Interface
template <typename T>
class Iterator {
public:
    virtual ~Iterator() = default;
    virtual bool hasNext() = 0;
    virtual T next() = 0;
};

// Concrete Iterator
template <typename T>
class VectorIterator : public Iterator<T> {
public:
    VectorIterator(const std::vector<T>& vec) : vec(vec), index(0) {}
    bool hasNext() override {
        return index < vec.size();
    }
    T next() override {
        return vec[index++];
    }
private:
    const std::vector<T>& vec;
    size_t index;
};

// Aggregate Interface
template <typename T>
class Aggregate {
public:
    virtual ~Aggregate() = default;
    virtual std::unique_ptr<Iterator<T>> createIterator() = 0;
};

// Concrete Aggregate
template <typename T>
class VectorAggregate : public Aggregate<T> {
public:
    VectorAggregate(const std::vector<T>& vec) : vec(vec) {}
    std::unique_ptr<Iterator<T>> createIterator() override {
        return std::make_unique<VectorIterator<T>>(vec);
    }
private:
    std::vector<T> vec;
};

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Create a VectorAggregate
    VectorAggregate<int> aggregate(numbers);

    // Create an iterator
    std::unique_ptr<Iterator<int>> iterator = aggregate.createIterator();

    // Use the iterator to traverse the vector
    while (iterator->hasNext()) {
        std::cout << iterator->next() << " ";
    }
    std::cout << std::endl;

    return 0;
}