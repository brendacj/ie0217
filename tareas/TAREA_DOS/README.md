# TAREA DOS
## Intrucciones de ejecución

### Requisitos previos
- Asegúrarse de tener instalado un compilador de C++ (por ejemplo, g++).

- En caso de OS Windows asegúrarse de tener instalado una herramienta (MinGW) para acceder al Make.

- Las respuestas a las preguntas teóricas se encuentran más abajo en el README.md.

### Acceso 
1. Al encontrarse en la carpeta TAREA_DOS del repositorio ie0217 ejecute el comando:

    ```
   cd .\src\
   ```

### Compilación

1. Ejecute alguno de los siguientes comandos para para compilar y ejecutar el programa al mismo tiempo:

    ```
    make
    make all
    ```

1. También puede ejecutar el siguiente comando para compilar el programa:

   ```
   make build
   ```
1. También puede ejecutar el siguiente comando para ejecutar el programa:

    ```
   make run
   ```

1. Una vez finalice el programa ejecute el siguiente comando para borrar los ejecutables generados:

    ```
   make clean
   ```
## Parte teórica

1. **Conceptos Fundamentales: Define qué es la programación orientada a objetos y explica sus principios fundamentales.**

    La programación orientada a objetos (OOP) es un paradigma de programación que se basa en el concepto de "objetos". Un objeto es una instancia de una clase, y una clase es un modelo o molde para crear objetos. Los objetos instanciados de una clase podrán acceder a los métodos y atributos dentro de ella incentivando la reutilización del código y el fácil manejo y modificación del código dentro de la clase al ser una estructura un poco más aislada y de uso más general. También uno de sus principios fundamentales es la seguridad debido a su encapsulamiento y acceso controlado.

2. **Herencia: Explica el concepto de herencia en programación orientada a objetos y proporciona un ejemplo práctico.**

    La herencia permite a una clase (clase derivada) heredar propiedades (métodos y atributos) de otra clase (clase base). La subclase puede extender o modificar el comportamiento heredado. Se utiliza más que todo para reutilizar código.

    ```
    class Animal {
    public:
        void info_animal() { cout << "Soy un animal" << endl;}
    };

    class Perro : public Animal{
    public:
        void info_perro() { cout <<"Yo ladro" << endl;}
    };
    ```

    En el ejemplo anterior, la clase `Perro` hereda el método `info_animal` de la clase Animal, y extiende las "acciones" que puede hacer el animal por ser un perro con `info_perro` con esto no se tuvo que reescribir el código para especificar que era un animal.

3. **Encapsulamiento: ¿Qué es el encapsulamiento en OOP y por qué es importante? Proporciona ejemplos de cómo se implementa en C++.**

    Se refiere a la ocultación de los detalles internos de un objeto y la restricción del acceso directo a ciertos aspectos de ese objeto. Su importancia rádica en el control de acceso a los datos de las clases, permitiendo una mayor seguridad, también permite un manejo más ordenado del código con la opción de modificarlo más fácilmente sin que afecte mucho el resto del código.

    La forma de implementar el encapsulamiento es poner diferentes atributos o métodos organizados en apartados privados, protegidos y públicos según más convenga, para poder ocultar ciertos detalles y permitir su manejo mediante los métodos públicos.

     ```
    class Animal {
    private:
        string color;

    public:
        string getColor(){ 
            return color;
        }
    };
     ```

    En el ejemplo anterior, el atributo `color` es privado, por lo que no se puede acceder a él directamente, pero con el método público `getColor` se puede manipular.

4. **Polimorfismo: Describe el polimorfismo y proporciona ejemplos de polimorfismo de tipo y polimorfismo de operador en C++.**

    El polimorfismo es una característica que permite que un objeto pueda tener diferentes formas, dependiendo de cómo se acceda a él, normalmente refiriéndose a métodos/funciones diferentes que se llaman igual

    - Polimorfismo de tipo: Se puede dar por sobrecarga de funciones (Poner el mismo nombre a las funciones diferenciándolas por sus parámetros) o usando funciones virtuales en las clases base, las cuales se van a reescribir en las clases derivadas, pudiendo acceder a ellas desde objetos de la clase derivada o base según corresponda:
    ```
    class Base {
    public:
        virtual void print() {
            cout << "Función Base" << endl;
        }
    };

    class Derivada : public Base {
    public:
        void print(){
            cout << "Función Derivada" << endl;
        }
    };
    ```
    - Polimorfismo de operador: Es la capacidad de definir el comportamiento de un operador para diferentes tipos de datos. Por ejemplo, se puede sobrecargar el operador + para que funcione con números enteros, números reales, cadenas de caracteres, matrices, etc.
     ```
        Punto operator+(const Punto& otro) const {
            return Punto(x + otro.x, y + otro.y);
        }
     ```
     En el ejemplo se muestra un método de la clase Punto que usa el operador "+" como una forma de sumar dos objetos punto, que internamente es la suma de dos puntos, pero el compilador no lo puede saber hasta que sea especificado, de igual manera, especificando se puede usar el mismo operador para sumar otros elementos como fracciones, vectores, etc.

5. **Abstracción: ¿Cómo se relaciona la abstracción con la programación orientada a objetos? Proporciona ejemplos de cómo aplicar la abstracción en un contexto de programación.**

    Se refiere a la simplificación de un sistema complejo mediante la identificación de las características esenciales y la ignorancia de los detalles no esenciales. En la programación orientada a objetos se relaciona con las estructuras de clases y objetos tomando las clases como los elementos abstractos y los objetos como los esenciales, una vez se realiza la clase es mucho más fácil trabajar con los objetos. De igual manera, un método, por ejemplo, que especifique qué tipo de sonido hace un animal, podría ser una parte abstracta del código con implementaciones complejas, mientras que un parámetro de este método (Como el tipo de animal) podría ser un elemento esencial.

6. **Clases y Objetos: Diferencia entre una clase y un objeto en programación orientada a objetos. Proporciona un ejemplo de cada uno.**

    - Una clase es como un tipo de molde o plantilla para construir objetos, dentro de ella se van a establecer métodos y atributos de conveniencia según las características o capacidades deseadas para el objeto:
    ```
    class Vehiculo(){
        // Caracteristicas del objeto (atributos)
        int color;
        int marca;

        // Acciones del objeto (métodos)
        void acelerar;
        void correr;
    };
    ```

    - Un objeto es la instancia de una clase, una entidad que consta de características, funcionalidad y reacción a eventos según lo indique la clase:
    ```
    int main() {
        Vehiculo micarro;

        // Puede acceder a las características especificadas dentro de la clase.
        micarro.color = "rojo"
    }
    ```

 7. **Métodos Virtuales: Explica la importancia de los métodos virtuales en C++ y cómo se utilizan en la implementación de polimorfismo.**

    Un método virtual es un método declarado en una clase base que puede ser anulado (o sobrescrito) por una clase derivada. Esto permite que se puedan llamar métodos de la clase base desde la clase derivada mediante punteros, o que, en términos de polimorfismo, el método sea diferente para objetos de diferentes clases derivadas, ya que está reescrito en ellas con el mismo nombre.

8. **Constructores y Destructores: ¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.**

- _Constructor_: Inicializa los datos fundamentales de un objeto, es un método especial que se llama igual que la clase y se ejecuta siempre que se instancia un nuevo objeto. Por ejemplo, si una clase Persona tiene de atributo el nombre, se podía ingresar por parámetro el nombre de la persona al crear el objeto, suponiendo que el nombre fuera fundamental para el objeto, como un tipo de identificador.

- _Destructor_: Se relaciona con la limpieza o liberación de recursos, se va a ejecutar al final del programa siempre que se cree un objeto, se llama igual que la clase, pero con un "~". Por ejemplo, si una clase asigna dinámicamente memoria en el constructor, al final del programa el destructor podría liberar esa memoria con `delete`.

9. **Sobrecarga de Operadores: Explica qué es la sobrecarga de operadores y proporciona un ejemplo de cómo se implementa en C++.**

    La sobrecarga de operadores es una característica que permite definir cómo deben comportarse los operadores en el contexto de objetos de una clase. Al sobrecargar un operador se puede proporcionar una implementación específica para ese operador cuando se utiliza con objetos de una determinada clase. Esto brinda flexibilidad en el uso de operadores para tipos de datos definidos por el usuario. Por ejemplo, se puede tener una clase de puntos, en donde el operador de suma (+) se utilice para sumar puntos, es decir, los X y los Y, mientras que puede haber otra que sea de matrices y el operador de suma más bien sume matrices, dependiendo de qué clase sean los objetos sumados, se realizará una u otra.

10. **Templates: Describe el concepto de templates en C++. ¿En qué situaciones sería útil utilizar templates?**

    Permite la creación de código genérico, lo que significa que se puede escribir funciones y clases que trabajen con cualquier tipo de datos. Puede ser muy útil debido al tipado fuerte del lenguaje que necesita que siempre sea especificado el tipo de dato en las funciones o variables, con los templates no es necesario especificarlo. Es útil por ejemplo, cuando se quieren hacer operaciones con números enteros o flotantes (Cualquiera de los dos), como los dos son números las operaciones lógicamente  se pueden hacer y no es necesario repetir el código para cada tipo.

    Obtenido de [Plantillas (C++)](https://learn.microsoft.com/es-es/cpp/cpp/templates-cpp?view=msvc-170)

11. **¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente?**

    La memoria dinámica en C++ se refiere a la gestión manual de la memoria durante la ejecución de un programa, es decir, la memoria dinámica se asigna y libera en tiempo de ejecución usando palabras claves en el código como `new` o `delete`. Se usa comúnmente cuando se utilizan elementos que no se sabe exactamente cuanta memoria van a ocupar, normalmente especificados por el usuario en tiempo de ejecución, como por ejemplo aumentar o disminuir un arreglo.

12. **Explique la diferencia entre new y malloc en C++. ¿Cúando debería utilizar uno sobre el otro?**

    Los dos sirven para asignar memoria dinámicamente, su diferencia es que `new` es compatible con el llamado del constructor de una clase para asignar memoria dinámica a un nuevo objeto creado, mientras que `malloc` no tiene relación con nada que tenga que ver con objetos, clases o constructores. Se debería usar el new cuando se está trabajando con programación orientada a objetos al manejar objetos.

13. **¿Qué es una fuga de memoria (memory leak) y cómo puede evitarse en programas en C++?**

    Una fuga de memoria ocurre cuando un programa asigna memoria dinámicamente pero no la libera adecuadamente antes de que el programa finalice su ejecución, o sea pierde el acceso al bloque de memoria asignado. Para evitarlo se debe liberar la memoria utilizada al final del programa, configurar el constructor de modo que se liberen los recursos en ámbitos de clases y objetos, utilizar punteros inteligentes.

14. **Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.**

    Los punteros inteligentes son objetos en C++ que actúan como punteros, pero proporcionan funcionalidades adicionales destinadas a facilitar la gestión segura de la memoria dinámica, entre otros. Estos objetos, pro ejemplo, se encargan automáticamente de la liberación de memoria asignada dinámicamente a la que apuntan cuando ya no se necesita, ayudando a prevenir memory leaks y otros problemas relacionados con la gestión manual de la memoria. 

    Obtenido de: [Punteros inteligentes (C++ moderno)](https://learn.microsoft.com/es-es/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170)

15. **¿Cuál es la diferencia entre delete y delete[] en C++? ¿En qué contexto se utilizaría cada uno?**

    Los dos se utilizan para liberar memoria asignada dinámicamente, pero el `delete` es para un solo objeto o variable (Asignada con `new`), es decir, un solo espacio de memoria, mientras que el `delete[]` se usa cuando se quiere liberar la memoria de un arreglo (Varios espacios de memoria), memoria que fue asignada con `new[]`.

16. **¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación?**

    Un algoritmo de ordenamiento es un conjunto de instrucciones o reglas bien definidas que toman una lista o arreglo de elementos como entrada y organizan esos elementos en un orden específico. El objetivo principal de un algoritmo de ordenamiento es transformar una secuencia de elementos desordenados en una secuencia ordenada según algún criterio específico, como orden, ascendente, descendente, alfabético, etc.

17. **Explique el funcionamiento del algoritmo de ordenamiento ”Bubble Sort”. ¿Cuál es su complejidad temporal en el peor caso?**

    Recorre el arreglo varias veces y compara cada pareja de elementos adyacentes, estos se intercambian solamente si están en un orden equivocado según corresponda el caso (es mayor, es menor, etc.), en el peor de los casos su complejidad puede ser de O(n <sup>2</sup>), siendo n el número de elementos de la lista o arreglo, ocurre si se debe recorrer la lista un número n de veces.

18. **Describa el algoritmo de ordenamiento ”QuickSort”. ¿Cuál es su ventaja principal sobre otros algoritmos de ordenamiento?**

    Este algoritmo sigue el principio de "divide y vencerás" escoge un número como pivote y acomoda al lado izquierdo los que son menores y al lado derecho los mayores subdividiendo la lista en sublistas y repitiendo el algoritmo recursivamente hasta que la lista se encuentre ordenada. La ventaja principal de este algoritmo es que su complejidad promedio es de O(nlog n) lo cual es bajo en comparación con los demás algoritmos, su naturaleza recursiva hace que el procedimiento sea más eficiente y su forma de dividir los elementos funciona muy bien con listas de gran tamaño.

19. **¿Cuál es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno.**

    Un algoritmo estable tiene la capacidad de mantener el orden relativo de los elementos con claves iguales en la lista ordenada final, mientras que los inestables no aseguran esta característica. Por ejemplo, si en una lista desordenada de números hay dos números iguales uno está antes que el otro, un algoritmo estable mantendrá ese orden entre los números iguales, y el que aparecía de primero antes del ordenamiento, estará de primero después de ordenarlos o viceversa según sea el orden. Un ejemplo de algoritmos de ordenamiento estables es Bubble Sort y uno instable podría ser un QuickSort.

    Obtenido de: [Algoritmos de ordenamiento](https://platzi.com/tutoriales/1832-ordenamiento/9229-algoritmos-de-ordenamiento/)

20. **Hable sobre el algoritmo de ordenamiento ”Merge Sort”. ¿Cuál es su complejidad temporal y en qué situaciones es preferible su uso?**

    El ”Merge Sort” es un algoritmo de ordenamiento que toma una lista (Arreglo u otro elemento ordenable) y la divide a la mitad, las sublistas resultantes también se van dividiendo hasta que quede un elemento, estas listas se irán ordenando recursivamente y se juntarán de nuevo entre ellas para obtener la lista ordenada. Este es uno de los mejores algoritmos de ordenamiento ya que su complejidad temporal es de O(nlog n) tanto en el caso promedio como en el peor caso, es recomendable usarlo con listas muy grandes por su regulada complejidad y en sistemas donde sea necesaria un algoritmo estable.

    Obtenido de: [Análisis del ordenamiento por mezcla](https://es.khanacademy.org/computing/computer-science/algorithms/merge-sort/a/analysis-of-merge-sort/)





















