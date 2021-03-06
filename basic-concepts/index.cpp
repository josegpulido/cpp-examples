#include <iostream>
// La librería cmath contiene funciones matemáticas comúnes
#include <cmath>
// La librería string permite incorporar el tipo string y manipular cadenas de texto
#include <string>

/**
 * Declaración de constantes.
 * 
 * Cualquier directiva de preprocesador no lleva (;). Estas son harcodeadas directamente
 * sobre el programa y no se almacenan en memoria como sí sucede con las constantes definidas
 * por el modificador 'const'.
 */
#define PI 3.14159

using namespace std;

int main() {
    
    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * ------------------------------------ Tipos de variables ----------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * A continuación, se enunciarán los tipos de datos existentes en C++ describiendo además
     * su peso en memoria. Este peso en memoria depende del tipo de compilador y el modelo
     * de datos usado. En los siguientes ejemplos, es usará como referencia el compilador estándar
     * GCC y el modelo de datos estándar de C++, aunque también existen modelos de datos como
     * LP32, ILP32, LLP64 y LP64. Dichos modelos de datos escapan del alcance de esta guía práctica.
     * 
     * - int. Valores numéricos con capacidad de hasta 4 bytes con
     * signo (desde −2,147,483,648 hasta 2,147,483,647).
     */
    int numero = -2147483648;
    cout << "int: " << numero << endl;
    /**
     * - short int. Igual que int pero con capacidad de hasta 2 bytes con
     * signo (desde -32,768 hasta 32,767).
     */
    short int numeroCorto = 32767;
    cout << "short int: " << numeroCorto << endl;
    /**
     * - long long int. Igual que int pero con capacidad de hasta 8 bytes con
     * signo (desde	−9,223,372,036,854,775,808 hasta 9,223,372,036,854,775,807).
     */
    long long int numeroLargo = 9223372036854775807;
    cout << "long long int: " << numeroLargo << endl;
    /**
     * - char. Cualquier tipo de valor alfanumérico, es decir, compuesto por 1 byte. Puede
     * almacenar cualquier caracter unicode (letras, números, símbolos, etc.).
     * 
     * Se puede inicializar utilizando las comillas simples para indicar el caracter
     * directamente, o mediante su representación equivalente en la tabla ASCII.
     */
    char caracter = '#';
    char equivDecimal = 35; // equivalente en sistema decimal
    char equivHexadecimal = 0x23; // equivalente en sistema hexadecimal
    char equivOctal = 043; // equivalente en sistema octal
    cout << "char: " << caracter << ", with ASCII value of " << int(caracter) << endl;
    cout << "char initialization equivalents: " << equivDecimal << ", " << equivHexadecimal << ", " << equivOctal << endl;
    /**
     * - bool. Valores lógicos; false, para indicar una negación; y true, para
     * indicar una aserción. Su espacio en memoria es de 4 bytes.
     */
    bool booleano = true;
    cout << "bool: " << booleano << endl;
    /**
     * - float. Valores numéricos con punto decimal con capacidad de hasta 4 bytes. Soporta
     * hasta 7 dígitos.
     */
    float decimalCorto = 301.782;
    cout << "float: " << decimalCorto << endl;
    /**
     * - double. Valores numéricos con punto decimal con capacidad de hasta 8 bytes. Soporta
     * hasta 16 dígitos.
     * 
     * Al poder almacenar valores tan grandes, es posible escribirlos como notación
     * científica. El caso anterior es útil en, p. ej., escribir la velocidad de la luz
     * o la masa de un electrón.
    */
    double decimalLargo = -9329130411205.812349329015;
    double decimalNotCie = 4.9e3; /*4.9*10^3 (4900)*/
    cout << "double: " << decimalLargo << endl;
    cout << "double with cientific notation: " << decimalNotCie << endl;

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * ------------------------------------ Operador sizeof() -----------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * Para obtener el peso en bytes de la variable en cuestión, se invoca el operador
     * sizeof() integrado por C++. Lo anterior significa que, aún teniendo sintaxis de
     * función, sizeof() es un operador integrado que no podrá llamarse en tiempo de
     * ejecución porque cuando el proceso de compilación termine, todo rastro de lo que
     * significaba sizeof() no existirá; tan solo los resultados de su operación escritos
     * directamente sobre el código.
     * 
     * Más información:
     * + https://stackoverflow.com/questions/3954844/sizeof-operator-or-function
     * 
     * Lista completa de operadores integrados en C++:
     * + https://docs.microsoft.com/es-es/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-160
     */
    cout << "decimalLargo var size: " << sizeof(decimalLargo) << " bytes" << endl;

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * ----------------------------------- Modificador unsigned ---------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * int pesa 4 bytes, es decir 32 bits (1 byte = 8 bits... 8 x 4 = 32), pero los computadores
     * utilizan 1 bit para representar el signo (+/-) del valor numérico, dejando entonces 31 bits
     * disponibles para tomar. Pensando en que 1 bit es un valor binario (1 o 0), entonces 2^31
     * es igual a 4,292,967,296. Este valor es repartido entre ambos signos para representar
     * valores numéricos enteros.
     * 
     * La palabra reservada 'unsigned' permite modificar el comportamiento de un
     * tipo de dato numérico indicando la ausencia de signo (comunmente del signo negativo),
     * permitiendo que su rango máximo de valor se incremente al doble. Al dejar de utilizar
     * 1 bit para el signo, entonces un 'unsigned int' puede almacenar hasta 4,294,967,295
     * valores.
     */
    unsigned int numeroSinSigno = 4294967295;
    cout << "unsigned int: " << numeroSinSigno << endl;

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * -------------------------------- Biblioteca iostream : cin -------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * 'cin' significa Console Input, función provista por <iostream>
     * y sirve para ingresar valores por consola.
     */
    char caracterPorConsola;
    cout << "Ingresa un caracter alfanumérico: ";
    cin >> caracterPorConsola;
    cout << "Valor por consola: " << caracterPorConsola << endl;

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * ---------------------------------- Operadores aritméticos --------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * (+) - Suma.
     * (-) - Resta.
     * (*) - Multiplicación.
     * (/) - División.
     * (%) - Residuo. Solo resultará al realizarlo sobre números enteros.
     */
    cout << "Suma de (5 + 5): " << (5 + 5) << endl;
    cout << "Resta de (9 - 40): " << (9 - 40) << endl;
    cout << "Multiplicación de (6 * 2): " << (6 * 2) << endl;
    float a = 8.0 / 3.0; // <-- Es importante marcar los decimales porque sino para el compilar son ints, y entonces retornará el resultado en enteros
    cout << "División de (8.0 / 3.0): " << a << endl;
    short int b = 15 % 4;
    cout << "Residuo de (15 / 4) ... (4 x 3 = 12, sobran 3 para 15): " << b << endl;

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * --------------------------------- Asignaciones compuestas --------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * Es una forma compacta de asignar valores a variables elaborando una
     * operación aritmética conjuntamente:
     * - (x++). Suma 1 a la variable.
     * - (x--). Resta 1 a la variable.
     * - (x +=). Suma a la variable el valor indicado luego del inicializador.
     * - (x -=). Resta a la variable el valor indicado luego del inicializador.
     * - (x *=). Multiplica a la variable el valor indicado luego del inicializador.
     * - (x /=). Divide a la variable el valor indicado luego del inicializador.
     */
    short int i = 10;
    i++;    // 11
    i--;    // 9
    i += 3; // 13
    i -= 4; // 6
    i *= 3; // 30
    i /= 5; // 2

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * --------------------------------- Jerarquía de operaciones -------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * Las siguientes operaciones son el orden de resolución en la
     * ejecución de una operación matemática compuesta por varios tipos de operaciones:
     * 1. Operaciones entre paréntesis.
     * 2. Multiplicación, división y/o residuo.
     * 3. Suma y resta.
     * 
     * En caso de que se encuentren dos o más operaciones encadenadas del mismo orden de
     * prioridad, entonces se resolverá dicho segmento de izquierda a derecha.
     */
    cout << "14-8/2*3+1: " << 14-8/2*3+1 << endl; // 3
    cout << "(14-8)/2*3+1: " << (14-8)/2*3+1 << endl; // 10
    cout << "14-(8/2*3)+1: " << 14-(8/2*3)+1 << endl; // 3
    cout << "14-8/2*(3+1): " << 14-8/2*(3+1) << endl; // -2
    cout << "(14-8)/2*(3+1): " << (14-8)/2*(3+1) << endl; // 12

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * --------------------------- Operadores lógicos y de comparación --------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * A diferencia de las operaciones aritméticas, las operaciones lógicas
     * o de comparación se ejecutan de derecha a izquierda.
     * 
     * - (&&) --> AND 
     * - (||) --> OR
     * - (!)  --> NOT
     * - (==) --> equals
     * - (!=) --> not equals
     * - (<)  --> less than
     * - (>)  --> greater than
     * - (<=) --> less or equal than
     * - (>=) --> greater  or equal than
     * 
     * Lista completa de operadores integrados en C++:
     * + https://docs.microsoft.com/es-es/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-160
     */
    cout << "(5 < 9): " << (5 < 9) << endl;
    cout << "(-3 == -3): " << (-3 == -3) << endl;
    cout << "(9 >= 7 && true == false): " << (9 >= 7 && true == false) << endl;

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * ------------------------------------ Biblioteca cmath ------------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * Contiene decenas de funciones matemáticas. A continuación, las más importantes:
     * 
     * - pow(int1, int2). Eleva el número indicado en int1 hacia la potencia
     * indicada en int2.
     */
    double potencia = pow(5, 3); // 125
    cout << "(5^5): " << potencia << endl;
    /**
     * - sqrt(double1). Obtiene la raíz cuadrada del número indicado en el double1.
     */
    double raizCuadrada = sqrt(100.0); // 10.0
    cout << "(√100.0): " << raizCuadrada << endl;
    /**
     * - sin(double1). Función seno del valor del ángulo en radianes indicado
     * en el double1.
     */
    double seno = sin(0.523599); // sin(30°)
    cout << "(seno de 30°): " << seno << endl;
    /**
     * - cos(double1). Función coseno del valor del ángulo en radianes indicado
     * en el double1.
     */
    double coseno = cos(1.0472); // cos(60°)
    cout << "(coseno de 60°): " << coseno << endl;
    /**
     * - tan(double1). Función tangente del valor del ángulo en radianes indicado
     * en el double1.
     */
    double tangente = tan(0.785398); // tan(45°)
    cout << "(tangente de 45°): " << tangente << endl;

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * ---------------------------------------- Constantes --------------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * Existen dos formas de declarar una constante:
     * - Directiva #define. Ver cabecera del archivo para más información.
     * - Palabra reservada 'const'. Se antepone la palabra reservada 'const' antes
     * de una declaración de variable común y corriente.
     * 
     * En un sentido práctico, no existen diferencias importantes entre ambas.
     */
    cout << "Constante mediante directiva: " << PI << endl;
    const float gravedad = 9.8;
    cout << "Constante mediante palabra reservada const: " << gravedad << endl;

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * ------------------------------ Definiciones de tipo (typedef) ----------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * Es un mecanismo de C++ que permite crear tipos de variables
     * personalizados para evitar escribir múltiples veces el mismo tipo.
     */
    typedef unsigned short int tipoPropio;
    tipoPropio m = 9;
    cout << "Valor de la definición personalizada: " << m << endl;

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * -------------------------------- Estructuras condicionales -------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * Estructura condicional simple.
     */
    if (true) {
        // do something
    }
    if (1 > 4) {
        // do something
    } else {
        // do something
    }

    /**
     * Estructura condicional múltiple.
     * 
     * Esta estructura admite solo números enteros (int) o caracteres
     * (char).
     */
    unsigned short int randomValue = 8;
    switch (randomValue) {
        case 2:
            // do something
        break;
        case 90:
            // do something
        break;
        default:
            // do something
        break;
    }

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * ----------------------------- Estructuras repetitivas o bucles ---------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * Estructura repetitiva for.
     * 
     * 'size_t' es una definición de tipo built-in de C++
     * definida por defecto equivalente a 'unsigned long'.
     */
    cout << "Iterando ciclo for" << endl;
    for (size_t i = 0; i < 5; i++) {
        cout << "(for) i :: " << i << endl;
    }

    cout << endl;

    /**
     * Estructura repetitiva while.
     */
    unsigned short int f = 0;
    while (f <= 50) {
        cout << "(while) i :: " << f << endl;
        /**
         * En todas las estructuras repetitivas, la palabra reservada 'break'
         * sirve para terminar el bucle definitivamente.
         */
        if (f == 6) break;
        f++;
    }

    cout << endl;

    /**
     * Estructura repetitiva do-while.
     */
    unsigned short int g = 0;
    do {
        cout << "(do-while) i :: " << g << endl;
        g++;
        /**
         * En todas las estructuras repetitivas, la palabra reservada 'continue'
         * sirve para saltarse a la siguiente interación directamente sin pasar
         * por el resto de código que había después de la palabra reservada misma.
         */
        continue;
        cout << "Texto que no se imprimirá..." << endl;
    } while (g <= 10);

    cout << endl;

    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * --------------------------- Arreglos + Biblioteca iostream : cin -------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * Son un conjunto de variables bajo una misma dirección en memoria y que
     * pertenecen al mismo tipo (int, char, bool, etc).
     * 
     * Existen dos formas de definir la cantidad de elementos que el arreglo
     * tendrá:
     * 
     * - Por declaración:
     * 
     * En este caso, si se consulta un índice del arreglo, como p. ej. arreglo1[3],
     * tendrá un valor basura aleatorio.
     */
    int arreglo1[10];
    cout << "arreglo1 usando declaración: " << arreglo1 << endl;
    /**
     * - Por asignación:
     * 
     * Que un arreglo tenga determinada cantidad de elementos no quiere decir que
     * se tengan usar todos. Pueden definirse 5 elementos y usar solo 2. Lo anterior
     * es posible mas sin embargo no es recomendable.
     */
    float arreglo2[] = { 8.3, -19.9, 2.0, 1.5 };
    cout << "arreglo2[0]: " << arreglo2[0] << endl;

    /**
     * C++ no incluye un operador o utilidad que permita obtener directamente la
     * cantidad de elementos que tiene un arreglo. Es por eso que existen múltiples
     * formas de obtener este dato, de entre las cuales la más convencional es la
     * siguiente:
     */
    cout << "Tamaño en bits de arreglo2[]: " << sizeof(arreglo2) << endl; 
    cout << "Tamaño en bits de arreglo2[0]: " << sizeof(arreglo2[0]) << endl; 
    cout << "Elementos en el arreglo2[]: " << sizeof(arreglo2) / sizeof(arreglo2[0]) << " items" << endl;
    /**
     * Como se expuso anteriormente, el operador sizeof() obtendrá el peso en bytes de un
     * variable, que en este caso es un arreglo. Suponiendo el peso en bytes del arreglo es
     * de 16 bytes porque almacena 4 valores tipo int (4 bytes cada uno), entonces la cantidad
     * de elementos que el arreglo tendría sería de 4 (4 bytes 4 veces es igual a 16 bytes).
     * 
     * Es por esto que en la operación anterior, se divide el tamaño total de la variable entre
     * el tamaño de un elemento del mismo tipo, en particular y no más que por convención, se
     * utiliza el primer elemento de la lista, aunque pudiera ser cualquier otra variable del
     * mismo tipo.
     */

    /**
     * En caso de desear formar palabras con arreglos de chars, es recomendable usar
     * la secuencia de escape \0 que le indicará a la consola que la secuencia de
     * caracteres ha terminado.
     */
    char nombre[] = { 'G', 'u', 'i', 'l', 'l', 'e', 'r', 'm', 'o', '\0' };
    cout << "char[] usando asignación: " << nombre << endl;

    /**
     * Cadenas de texto. Es un arreglo de chars que tiene un modo especial de
     * inicialización por asignación utilizando las dobles comillas:
     */
    char texto[] = "Lorem ipsum dolor sit amet.";
    cout << "char[] usando doble comillas: " << texto << endl;

    /**
     * La librería <string> provee un objeto llamado string que contiene métodos
     * que permiten manipular a la cadena de texto fácilmente.
     */
    string nuevoTexto = "Hola, desde";
    nuevoTexto.append(" string!!");
    cout << nuevoTexto << endl;

    /**
     * Un comportamiento útil de entrada por consola es que se puede asignar un
     * valor a un arreglo de caracteres directamente de la sig. manera:
     */
    char entrada1[20];
    cout << "Ingresa una palabra de no más de 20 caracteres: ";
    cin >> entrada1;
    cout << "La palabra es: " << entrada1 << endl;
    /**
     * Por defecto, cin lee los valores introducidos hasta que detecta un espacio
     * en blanco. Por lo anterior, la sig. asignación no admitirá más de 1 palabra.
     * 
     * Para solucionar esto, se recomienda usar el método .getline() para tomar el valor
     * de entrada bajo un comportamiento en específico.
     * En este ejemplo, cin no funcionará porque ya habrá detectado un buffer cargado desde
     * entonces con 1 o más \n. Un workaround utilizado es ignorar el primer caracter (o cuantos
     * se necesiten) con la instrucción cin.ignore(n?:int, delimiter?:char)
     */
    char entrada2[30];
    cout << "Ahora, ingresa un texto de no más de 30 caracteres con espacios: ";
    cin.ignore(); // Borra 1 caracter del buffer
    /**
     * ignore() también puede recibir dos parámetros, uno que indique cuantos caracteres
     * borrar máximo (el límite es 256 caracteres) y un delimitador. La sig. línea
     * borrará 256 caracteres o hasta que se encuentre el último '\n', lo que pase primero.
     */
    cin.ignore(256, '\n');
    cin.getline(entrada2, 30);
    cout << entrada2 << endl;

    cout << endl;

    return 0;
}

void loop() {}