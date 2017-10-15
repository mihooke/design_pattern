"""
Abstraction and SubAbstraction class provide the interfaces.
AbstractionImpl provides the realization of the interfaces.
The main propuse of it is avoiding Abstraction too fat.
"""
class Abstraction(object):
    def operation(self):
        pass
    
class SubAbstraction(Abstraction):
    def __init__(self, impl):
        self.impl = impl
        
    def operation(self):
        self.impl.impl_function()
    
class AbstractionImpl(object):
    def impl_function(self):
        pass
    
if __name__ == "__main__":
    ai = AbstractionImpl()
    sa = SubAbstraction(ai)
    sa.operation()