class point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def sum_(self):
        return (self.x**2 + self.y**2)**0.5
    # def __str__(self):
        # return self.x, self.b

    def __sub__(self,other):
        return self.x - other.x , self.y - other.y

    def __add__(self,other):
        return self.x + other.x, self.y + other.y

p = point(1,1)
q = point(0,0)

d = p - q

dist = point.sum_(d)

print(dist)
