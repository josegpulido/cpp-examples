#include <iostream>
#include <string>

using namespace std;

// Definiendo clase padre o super clase
class Mamifero {
    private:
        int edad;
    public:
        Mamifero(int edad) {
            this->edad = edad;
        }
        /**
         * Tal como se define un prototipo de función, la palabra reservada
         * virtual definirá al método polimórfico.
         * 
         * Más información:
         * + https://www.geeksforgeeks.org/virtual-destructor/
         */
        virtual void comer() {
            cout << "¡El mamífero está comiendo!" << endl;
        }
};

/**
 * Definiendo clases hijo.
 * 
 * Ahora, ambas clases hijo heredadan de la super clase y podrán
 * definir el método comer().
 */
class Perro : public Mamifero {
    private:
        string nombre;
    public:
        Perro(string nombre, int edad) : Mamifero(edad) {
            this->nombre = nombre;
        }
        void comer() {
            cout << "Wof wof..." << endl;
            // Invocando al método padre luego de haber ejecutado el bloque del hijo
            Mamifero::comer();
        }
};

class Persona : public Mamifero {
    private:
        string oficio;
    public:
        Persona(string oficio, int edad) : Mamifero(edad) {
            this->oficio = oficio;
        }
        void comer() {
            // Invocando al método padre antes de ejecutar el bloque del hijo
            Mamifero::comer();
            cout << "Hey, soy humano y estoy comiendo..." << endl;
        }
};

int main() {

    // Creando instancias de clases
    Perro mizu = Perro("Mizu", 5);
    Persona jose = Persona("Software Engineer", 23);

    // Invocando polimorfismo
    mizu.comer();
    cout << endl;
    jose.comer();

    return 0;
}