class Employee:
    def __init__(self, x, y):
        self.x = x;
        self.y = y;

    def display(self):
        print(self.x + self.y)
    
class Slave(Employee):
    def __init__(self, x, y):
        super().__init__(x, y)

class Poor(Employee, Slave):
    def __init__(self, x, y):
        super().__init__(x, y)




emp = Employee(1, 99999999)

emp.display()

