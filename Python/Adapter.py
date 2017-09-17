class XiaoMiPhone(object):
    def __init__(self):
        self.name = "xiaomi"
    def ceo(self):
        return "Lei Jun"
    
class HuaWeiPhone(object):
    def __init__(self):
        self.name = "huawei"
    def boss(self):
        return "Ren Zhengfei"
    
class VivoPhone(object):
    def __init__(self):
        self.name = "vivo"
    def leader(self):
        return "Duan Yongping"
    
class OppoPhone(object):
    def __init__(self):
        self.name = "oppo"
    def leader(self):
        return "Duan Yongping"

"""
Attentions:over the four class have interface.
Adapter pattern provides a uniform interface for users.
For example, below we encapsulate only a 'head()' function, instead four class's four function
'ceo()'/'boss()'/'leader()'/'leader()'
"""
class Adapter(object):
    def __init__(self, phone, head):
        self.phone = phone
        self.__dict__.update(head)
    def __getattr__(self, attr):
        self.getattr(self.phone, attr)
    
if __name__ == "__main__":
    xiaomi = XiaoMiPhone()
    huawei = HuaWeiPhone()
    vivo = VivoPhone()
    oppo = OppoPhone()
    phones = []
    phones.append(Adapter(xiaomi, dict(head=xiaomi.ceo)))
    phones.append(Adapter(huawei, dict(head=huawei.boss)))
    phones.append(Adapter(vivo, dict(head=vivo.leader)))
    phones.append(Adapter(oppo, dict(head=oppo.leader)))
    for phone in phones:
        print(phone.head())