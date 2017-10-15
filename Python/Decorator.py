class Component(object):
    def old_interface(self):
        pass
    
class Decorator(object):
    def __init__(self, component):
        self.component = component
        
    def new_interface(self):
        self.component.old_interface()
        
    def __getattribute__(self, name):
        return getattr(self.component, name)
    
if __name__ == "__main__":
    c = Component()
    d = Decorator(c)
    d.new_interface()