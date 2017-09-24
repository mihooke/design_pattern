class Subject(object):
    def __init__(self):
        self.observers = []
    def register(self, obser):
        self.observers.append(obser)
    def set_state(self, state):
        raise NotImplementedError()
    def get_state(self):
        raise NotImplementedError()
    def notify(self):
        for observer in self.observers:
            observer.update_state(self)
    
class SubSubject(Subject):
    def set_state(self, state):
        self.state = state
    def get_state(self):
        return self.state 
    
class Observer(object):
    def __init__(self, subject):
        self._subject = subject
        self._subject.register(self)
    def get_subject(self):
        return self._subject
    def update_state(self, subject):
        self._subject = subject
        self._subject.get_state()
        print("state:", self._subject.get_state())
        
if __name__ == "__main__":
    subject = SubSubject()
    obser1 = Observer(subject)
    obser2 = Observer(subject)
    subject.set_state("old_state")
    subject.notify()
    subject.set_state("new_state")
    subject.notify()
        