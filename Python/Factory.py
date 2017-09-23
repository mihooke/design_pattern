"""
In factory pattern, you can be convenient to add a class for generating subclass object.
But the price is adding a extra class 
"""

class Phone(object):
    def get_name(self):
        raise NotImplementedError()

class XiaoMiPhone(Phone):
    def __init__(self):
        self.name = "xiaomi"
    def get_name(self):
        return self.name
    
class HuaWeiPhone(Phone):
    def __init__(self):
        self.name = "huawei"
    def get_name(self):
        return self.name
    
class VivoPhone(Phone):
    def __init__(self):
        self.name = "vivo"
    def get_name(self):
        return self.name
    
class OppoPhone(Phone):
    def __init__(self):
        self.name = "oppo"
    def get_name(self):
        return self.name
    
class Factory(object):
    def crate_phone(self):
        raise NotImplementedError()
    
class XiaoMiFactory(Factory):
    def create_phone(self):
        return XiaoMiPhone()

class HuaWeiFactory(Factory):
    def create_phone(self):
        return HuaWeiPhone()
    
class VivoFactory(Factory):
    def create_phone(self):
        return VivoPhone()
    
class OppoFactory(Factory):
    def create_phone(self):
        return OppoPhone()
    
"""
In fact, we use like this, passing a parameter
"""
class GeneralFactory(Factory):
    def __init__(self, phone):
        self.phone = phone()
    def create_phone(self):
        return self.phone

if __name__ == "__main__":
    a = GeneralFactory(XiaoMiPhone)
    print(a.create_phone().get_name())
    
    phones = [XiaoMiFactory(), HuaWeiFactory(), VivoFactory(), OppoFactory()]
    for phone in phones:
        x = phone.create_phone()
        print(x.get_name())