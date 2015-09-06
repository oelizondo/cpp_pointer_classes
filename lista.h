template <class T>
class Lista {
    public:
        Lista ();
        Lista (const Lista <T> &obj);
        int getCant () { return iCant; };
        T getDato(int indice);
        bool add (T numero);
        int search (T numero);
        void sort(bool orden);
        bool operator==(const Lista<T> obj);
        void operator=(const Lista<T> obj);
        void print();
    protected:
        int iCant;
        T arreglo[10];
};

template <typename T>
Lista<T>::Lista() {
    iCant = 0;
    for (int i = 0; i < 10; i++)
        arreglo[i] = -1;
}

template <typename T>
Lista<T>::Lista (const Lista<T> &obj) {
    for (int i = 0; i < 10; i++)
        arreglo[i] = obj.arreglo;
}

template <typename T>
T Lista<T>::getDato(int indice) {
    return (indice < 10  && indice >= 0) ? arreglo[indice] : false;
}

template <typename T>
bool Lista<T>::add (T numero) {
    if (iCant < 10) {
        arreglo[iCant] = numero;
        iCant++;
        return true;
    }
    return false;
}

template <typename T>
int Lista<T>::search(T numero) {
    for (int i = 0; i < iCant; i++)
        return arreglo[i] == numero ? i : -1;
}

template <typename T>
void Lista<T>::sort(bool orden) {

}

template <typename T>
bool Lista<T>::operator== (const Lista<T> obj) {
    if (iCant == obj.iCant){
        for (int i = 0; i < iCant; i++)
            if (arreglo[i] != obj.arreglo[i]) { return false; };
        return true;
    }
    return false;
}

template <typename T>
void Lista<T>::operator= (const Lista<T> obj) {
    iCant = obj.iCant;
    for( int i = 0; i < iCant; i++)
        arreglo[i] = obj.arreglo[i];
}

template <typename T>
void Lista<T>::print() {
    for (int i = 0; i < iCant; i++)
        cout << arreglo[i] << endl;
}