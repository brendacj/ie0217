class Point(object):
    ## Realmente esto es lo que se ejecuta ala crear un objeto
    def __new__(cls,*args, **kwargs):
        print("From new")
        print(cls)
        print(args)
        print(kwargs)
        
        obj = super().__new__(cls)
        return obj
    # Normalemnte se usa init
    def __init__(self, x = 0, y = 0):
        print("From init")
        self.x = x
        self.y = y

class SqPoint(Point):

    MAX_Inst = 4

    Inst_created = 0
    ## Un objeto no se crea hasta que se ejecute el init
    def __new__(cls, *args, **knargs) :
        if (cls.Inst_created >= cls.MAX_Inst):
            raise ValueError("Cannot create more objects")

        cls. Inst_created += 1
        return super()._new_ (cls)
