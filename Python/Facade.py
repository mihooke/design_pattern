"""
 * Facade pattern is a encapsulation of dispersive public interfaces in a list of class in fact.
 * In many cases,the public interfaces is dispersive in multi-class i.e. 
 * ComponentOne/ComponentTwo... maybe they have different function name, but they may will be
 * invoked at the same time,therefore we need a class to provide them i.e. Facade
"""

class ComponentOne():
    def interface(self):
        pass
    
class ComponentTwo():
    def interface(self):
        pass
    
class ComponentThree():
    def interface(self):
        pass
    
class Facade():
    def __init__(self):
        self.one = ComponentOne()
        self.two = ComponentTwo()
        self.three = ComponentThree()
        self.com_lists = [self.one, self.two, self.three]
        
    def interface(self):
        for com in self.com_lists:
            com.interface()
            
if __name__ == "__main__":
    f = Facade()
    f.interface()