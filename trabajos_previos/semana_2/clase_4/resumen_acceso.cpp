class Base {
    public:
        int x;
    protected:
        int y;
    private:
        int z;
};

class PublicDerived: public Base {
    // x es publica
    // y está proteguda
    // z no es accesible desde PublicDerived
};

class ProtectedDerived: protected Base {
    // x está protegida
    // y está protegida
    // z no es accesible desde PublicDerived
};

class PrivadeDerived: private Base {
    // x es privada
    // y es privada
    // z no es accesible desde PublicDerived
};

int main(){
    return 0;
}