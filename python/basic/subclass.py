# Parent class
class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        raise NotImplementedError("Subclass must implement this method")

# Subclass
class Dog(Animal):
    def speak(self):
        return f"{self.name} says Woof!"

class Cat(Animal):
    def speak(self):
        return f"{self.name} says Meow!"

# Create instances of the subclasses
dog = Dog("Rex")
cat = Cat("Whiskers")

print(dog.speak())  # Output: Rex says Woof!
print(cat.speak())  # Output: Whiskers says Meow!