"""
 * Proxy pattern is very very common for us, and widely uesed.
 * This pattern is meaning of letting proxy to do things instead.
 * For example,1. in GUI,we usually create a thread to do time-consuming task.
 * this thread is a proxy.
 * 2. in network,for quick response,we usually use a proxy to reply client instead server.
 * So,you could find Facade pattern also uses Proxy pattern internally.
"""

class Project():
    def operation(self):
        pass
    
class Proxy():
    def __init__(self):
        self.project = Project()
    
    def operation(self):
        self.project.operation()
        
if __name__ == "__main__":
    p = Proxy()
    p.operation()