class Singleton:
    _single_instance = None
    
    def __init__(self):
        pass
    
    @staticmethod
    def get_single_instance():
        if Singleton._single_instance is None:
            Singleton._single_instance = Singleton()
        return Singleton._single_instance
    
if __name__ == "__main__":
    # test two instance
    # The result is same address
    instance1 = Singleton.get_single_instance()
    instance2 = Singleton.get_single_instance()
    print("instance1 = ", instance1)
    print("instance2 = ", instance2)