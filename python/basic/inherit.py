class Shape:
    def __init__(self):
        pass
    def area():
        return 0
    
class Square(Shape):
    def __init__(self, n):
        self.n = n

    def area(self):
        return self.n * self.n
    
aSquare = Square(3)
print(aSquare.area())