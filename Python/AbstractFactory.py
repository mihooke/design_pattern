class XiaoMiPhone(object):
    def __init__(self):
        self.name = "xiaomi"
    def ceo(self):
        return "Lei Jun"
    
class HuaWeiPhone(object):
    def __init__(self):
        self.name = "huawei"
    def ceo(self):
        return "Ren Zhengfei"
    
class VivoPhone(object):
    def __init__(self):
        self.name = "vivo"
    def ceo(self):
        return "Duan Yongping"
    
class OppoPhone(object):
    def __init__(self):
        self.name = "oppo"
    def ceo(self):
        return "Duan Yongping"
    
class PhoneFactory(object):
    def __init__(self, phone):
        self.phone = phone()
    def get_phone(self):
        print("phone's name is:", self.phone.name)
        print("the ceo is:", self.phone.ceo())
    
if __name__ == "__main__":
    phones = [XiaoMiPhone, HuaWeiPhone, VivoPhone, OppoPhone]
    for phone in phones:
        phonefactory = PhoneFactory(phone)
        phonefactory.get_phone()