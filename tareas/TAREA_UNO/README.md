# TAREA UNO
## Intrucciones de ejecución

### Requisitos previos
- Asegúrarse de tener instalado un compilador de C++ (por ejemplo, g++).

- En caso de OS Windows asegúrarse de tener instalado una herramienta (MinGW) para acceder al Make.

- Las respuestas a las preguntas teóricas se encuentran más abajo en el README.md.

### Acceso 
1. Al encontrarse en la carpeta TAREA_UNO ejecute el comando:

    ```
   cd .\src\
   ```

### Compilación

1. Ejecuta el siguiente comando para compilar el programa:

   ```
   make build
   ```
2. Ejecuta el siguiente comando para ejecutar el programa:

    ```
   make run
   ```
3. También se puede usar el siguiente comando para compilar y ejecutar el programa al mismo tiempo:

    ```
   make all
   ```
4. Una vez finalice el programa ejecute el siguiente comando para borrar los ejecutables generados:

    ```
   make clean
   ```

## Teoría programación en C++
1. **¿Cuál es la principal diferencia entre C y C++?**

    El leguaje de programación C++ comparte muchas características con el de C, pero su principal diferencia es que C++ es un leguaje de programación orientada a objetos (POO).
    
1. **¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado
 y uno interpretado? \
    Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje
    compilado y otras en las que sería más adecuado un lenguaje interpretado.**

    - El lenguaje interpretado lee los scripts línea por línea (a grandes rasgos) y los ejecuta al momento, mientras que el compilado tiene un proceso antes de ejecutarlos, que consiste en leer la totalidad de los archivos, quitar comentarios,  pasar el archivo a lenguaje maquina (compilar), entre otras cosas.

    - La creación de proyectos en un leguaje interpretado puede ser más rápida ya que se ejecuta al momento, aunque su ejecución en sí es menos rápida, mientras que la creación y construcción del los proyectos en leguaje compilado puede ser más lenta debido al proceso que lleva su compilación, pero rápidas al ejecutarlas.

    Por ejemplo, en caso de que se necesite programar un dispositivo para atender emergencias, sería más coveniente una respuesta rápida, por lo que un lenguaje compilado sería lo mejor debido a su rápida ejecución. Por otro lado si es necesario estar modificando un programa con el tiempo, sería más conveniente hacer en un lenguaje de programación interpretado, ya que no se necesitaría todo un proceso de compilación cada vez que se modifique y su manejo sería más sencillo.


1. **Explique qué es un linker en el contexto de un lenguaje de programación compilado.\
 ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?**
 
    Un linker es justamente el programa que se encarga de combinar varios módulos de código objeto generados por el compilador para crear el programa ejecutable, para hacerlo realiza varias tareas como eliminar recursos innecesarios, juntar el código con la información necesaria y enlazarlo con sus bibliotecas. Es esencial en el proceso de compilación porque permite que los programas se construyan de manera modular y facilita la creación de aplicaciones sin tener que recompilar todo el código cada vez que se realiza un cambio en una parte del programa.

1. **Describa las diferencias clave entre los tipos de datos derivados y primarios en C++.**

    Los tipos de datos primarios son aquellos que trae primitivamente el lenguaje de programación, son los más básicos y se utilizan para almacenar valores simples (Enteros, caracteres, boleanos). Por otro lado los tipos de datos derivados son los que tienes asociados datos de tipo primarios, se construyen a partir de ellos (Arreglos, funciones, punteros).

1. **Defina qué significa inicializar y declarar una variable.**

    Cuando una variable se declara se especifica su tipo y nombre, pero no necesariamente su valor, lo que pasa internamente es que se le dice al compilador que reserve un espacio de memoria para esta variable dependiendo de su tipo. Por otro lado, inicializar una variable se relaciona con asignarle un valor inicial a ese espacio de memoria.

1. **¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**

    La sobrecarga de funciones se refiere al proceso de poner el mismo nombre a varias funciones, pero diferenciándolas con características relacionadas con sus parámetros, como la cantidad o los tipos. Dependiendo de cuales sean los parámetros con los que se llama la función el programa es capaz de identificar a cual función se refiere. Sus beneficios estás relacionados principalmente con la legibilidad del código, evita usar nombres no representativos y todo sin generar conflictos en el código.

1. **¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**

    Un puntero es una variable que almacena la dirección de memoria de otra, es decir, apunta la dirección en la memoria de dicha variable. Un ejemplo que simboliza los punteros en la vida real es el de los afiches de las bibliotecas, que tienen la dirección de donde se ubica el libro, el puntero sería el afiche y el libro la variable.

1. **¿Una variable global almacena el valor original de una operación en una función o una
 copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar
 de locales en ciertos contextos.**

    Cuando se declara una variable global fuera del main y otras funciones, todo el programa va a tener un acceso directo al espacio de memoria de esta variable, por lo que cuando se modifique la variable dentro de las funciones, será modificada para todo el programa, ya que no se trata de una copia, sino de la misma variable. Una variable global es más conveniente de usar cuando se debe acceder y modificar en varias funciones del programa y no solo en una, también cuando es necesario guardar el valor de la variable incluso después de que se haya terminado de ejecutar la función, esto evita la creación de variables innecesarias.

1. **Investigue y explique tres métodos comunes de la biblioteca string en C++.**

    - _size o length_: Este método de la biblioteca string devolverá el tamaño de la cadena a la que se aplique.

    - _operador[ ]_: Este es uno de los métodos más utilizados y se utiliza para obtener un carácter de la cadena mediante su posición.

    - _+_: Se pueden usar operadores como el de la suma (+), este se utiliza para concatenar cadenas de caracteres.

    Obtenido de: [cplusplus.com](https://cplusplus.com/reference/string/string/)

1. **¿Cúal es la principal diferencia entre un bucle do-while y un bucle while?**

     Los dos ciclos son estructuras que funcionan casi igual, estos ejecutaran el bloque de código mientras se siga cumpliendo cierta condición asignada, con la principal diferencia de que el ciclo `do-while` va a hacer siempre por lo menos una iteración aunque no se esté cumpliendo la condición, esto debido a que la condición se evalúa después de la ejecución del bloque de código.

1. **¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta.**

    Sí es permitido almacenar funciones en las estructuras, estas pueden ser accedidas de igual manera con un punto por instancias del tipo estructura y se ejecutan con normalidad. Por otro lado, los miembros de las estructuras son normalmente públicos, pero se pueden modificar su características de visualización con las palabras claves "public" o "privade", en donde intuitivamente los miembros en la sección public podrán ser accedidos en todo el código fuente, mientras que los privade son visibles solamente dentro del mismo ensamblado.

    Obtenido de: [Definición y consumo de clases y estructuras (C++/CLI)](https://learn.microsoft.com/es-es/cpp/dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli?view=msvc-170)

1. **Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp
 en C++. Describa el propósito específico de cada tipo de archivo.**

    La importancia de la implementación de este tipo de división en los programas de C++ está enfocada en la legibilidad y orden del código, así como la flexibilidad de utilizar y reutilizar las partes del mismo.

    - _Archivos .hpp_: Los archivos de encabezado funcionan normalmente como una conexión entre el archivo de funciones (o otros archivos .cpp) y el main, ya que actúa como un tipo de biblioteca que puede ser importada mediante el "#include" al inicio del programa, en este archivo normalmente se colocan los prototipos de las funciones, pero no sus implementaciones.

    - _Archivos.cpp_: En este archivo normalmente se pone el desarrollo de las funciones, clases y otros elementos, es decir sus implementaciones en sí de forma ordenada.

    - _Main.cpp_: En el main ya solamente se llaman las funciones o clases de los otros archivos .cpp mediante los archivos .hpp para dar su implementación en el programa, contiene la lógica principal.

1. **Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza.**

    Un Type casting se utiliza para cambiar el tipo de una variable a otro, es útil en situaciones en donde se deban hacer comparaciones entre datos compatibles u operaciones que necesiten un tipo especifico de datos. Por ejemplo una situación en la que se tuviera que guardar un valor de tipo flotante, pero truncando sus decimales para una aplicación especifica, sería conveniente realizar un casting a entero.
    
    Un Type casting se puede hacer de manera implicita, esta ocurre automáticamente por el compilador cuando se realiza una operación entre tipos compatibles. Por ejemplo, cuando se asigna un entero a un número de punto flotante:
    ```
    int num_int = 9;
    double num_double;
    num_double = num_int;
    ```

    También puede ser de manera explicita, en este caso se necesita una intervención del programador y nos e hace de forma automatica, uan froma de realizarla se presenta a continuación:
    ```
    double num_double = 3.14;
    int num_int = int(num_double);
    ```

1.  **¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione
 ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto.**

    La sentencia `goto` se clasifica actualmente como una mala práctica de programación, debido a su naturaleza desordenada que permite saltar de una parte del código a otra, esto puede hacer que el compilador se salte partes importantes del código, que no se dé una correcta liberación de recursos y además la legibilidad del código se ve afectada negativamente. Normalmente se pueden llegar a los mismos resultados usando las sentencias de `break` y `continue` dentro de ciclos o encapsulamiento de bloques de código mediante funciones gestionadas por condiciones `if-else`.

1. **¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia
 entre el almacenamiento de variables locales y globales.**

    Una vez declaradas las variables, estas tendrán un espacio de memoria reservado, el tamaño de este espacio depende de su tipo (especificado al declararla) y su ubicación depende de su alcance (scope). En caso de una variable local, esta se almacenará en una región de la memoria llamada pila (stack), mientras que las globales se almacenan en la memoria estática.

    Obtenido de: [Clases de almacenamiento](https://learn.microsoft.com/es-es/cpp/cpp/storage-classes-cppview=msvc-170)

1. **¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**

    La diferencia se centra en que cuando se pasa el parámetro por valor, lo que se crea es una copia, por lo que el valor solo se modifica dentro de la función y fuera de ella los cambios no son válidos, por otro lado si se pasa por referencia o por puntero sí se modifica la variable original, la diferencia entre estas dos últimas en el ámbito de los parámetros de las funciones radica en el acceso al valor y la sintaxis.

1. **Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección
 apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese
 arreglo mediante el puntero.**

    Cuando se declara un puntero para apuntar a un arreglo en C++, el puntero generalmente apunta a la primera posición del arreglo. Esto significa que inicialmente, el puntero contiene la dirección de memoria del primer elemento del arreglo. Para acceder a todos sus valores se aumenta el puntero un número de veces igual al tamaño del arreglo dentro de un ciclo, ya que los espacios de memoria de los elementos de un arreglo son secuenciales.

1. **Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos
 de situaciones en las que los punteros dobles son necesarios o beneficiosos.**

    Los punteros dobles se utilizan para gestionar la dirección de memoria de un puntero. Un puntero es en sí una variable, por lo que se puede usar otro puntero para acceder su posición de memoria. Los punteros dobles pueden ser convenientes en la gestión de arreglos bidimensionales (matrices) o en programas donde haya que modificar la dirección a la que apunta un puntero originalmente.

1. **¿Cuál es la diferencia entre un break y un continue en los bucles de C++?**

    La instrucción `break` se utiliza para salir inmediatamente de un bucle antes de que se complete normalmente mientras que `continue` se utiliza para saltar el resto del código en el bucle y pasar a la siguiente iteración.

1. **¿Para qué se utiliza la directiva #ifndef?**

    La directiva `#ifndef` significa "if not defined", se utiliza para hacer una condición que, si el símbolo del encabezado no se encuentra definido, definirlo con `#define`. El símbolo a su vez actúa como un identificador que evita que el archivo .hpp se exporte más veces de las necesarias en el .cpp.

1. **¿Qué es el puntero this en C++?**

    El puntero `this` se utiliza en las funciones miembro para referirse a la posición de memoria del objeto para el cual se invocó un método. Este puntero se utiliza para referirse al objeto actual dentro de un método de una clase.

    Obtenido de: [El puntero this](https://learn.microsoft.com/es-es/cpp/cpp/this-pointer?view=msvc-170)

1. **¿Qué es un puntero nullptr?**

    La palabra `nullptr` es el equivalente al `null` de los punteros, es decir, es un puntero nulo (que no tiene tipo) el cual se le puede asignar a cualquier tipo de puntero.

    Obtenido de: [nullptr](https://learn.microsoft.com/es-es/cpp/cpp/nullptr?view=msvc-170)

1. **¿Cuál es la diferencia entre un arreglo y una lista en C++?**

    Los arreglos son de un tamaño estático que no varía durante la ejecución del programa, de esta manera sus posiciones de memoria son continuas y es más fácil acceder a ellas mediante la posición, por otro lado, el tamaño de las listas sí puede variar durante la ejecución, pero los espacios de memoria de sus elementos no son necesariamente continuos, esto es más conveniente para agregar o eliminar elementos, ya que no se debe hacer una reorganización de posiciones de memoria.

1. **¿Qué es una función prototipo?**

    Un prototipo de función es una declaración que informa al compilador sobre la existencia de una función antes de que la función sea definida o implementada. La declaración del prototipo proporciona al compilador información sobre el tipo de retorno de la función, los tipos de sus parámetros y el nombre de la función.

1. **¿Investigue qué es un memory leak?**

    Un `memory leak` se da cuando un proceso asigna memoria dinámicamente pero no la libera, esto hace que los recursos del sistema empiecen a agotarse con el tiempo y no esté disponible suficiente memoria para otros usos del programa, esto puede afectar negativamente el rendimiento del programa o hasta hacerlo fallar.

    Obtenido de: [Find a memory leak](https://learn.microsoft.com/en-us/windows-hardware/drivers/debugger/finding-a-memory-leak)

## Teoría Automatización - Makefile

1. **¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?**

    - _CC_: Especifica el compilador que se utilizará para compilar el código, como "g++" o "gcc".
    - _CFLAGS_: Se utiliza para especificar las opciones y banderas que se pasan al compilador durante la compilación. Estas opciones suelen incluir configuraciones como la optimización, el nivel de advertencias, estándar del lenguaje, entre otras.
    - _CXXFLAGS_: Lo mismo que CFLAGS, pero convencionalemnte se utiliza el nombre CXXFLAGS para el compilador de C++, realmente no pasa nada si usa uno o el otro.
    - _LDFLAGS_: Se utiliza para especificar opciones y banderas que se pasan al enlazador (Linker) durante el proceso de enlace. Esto puede incluir configuraciones para la búsqueda de bibliotecas, la especificación de bibliotecas adicionales, entre otras cosas.


1. **¿De qué se compone una regla en un Makefile?**

    - _Targets_: Resultados que se desean obtener al ejecutar el Makefile.
    - _Lista de dependencias_: Contiene los archivos o elementos necesarios para contruir el target.
    - _Comandos para contruir el objetivo_: Intrucciones que el Make debe seguir para construir un target a partir de sus dependencias.


1. **Defina qué es un target y cómo se relaciona con sus prerequisitos.**

    Es un elemento que se desea construir, como un ejecutable, al ejecutar el Makefile, el target se construye a partir de sus prerequisitos (por ejemplo el código fuente), por lo que necesita que estén disponibles.


1. **¿Para qué se utiliza la bandera -I,-c y -o del compilador gcc?**

    - _-I(Include)_: Se utiliza para especificar directorios en los cuales el compilador debe buscar archivos de encabezado, vincular el programa con una biblioteca en general.

    - _-c(Compile Only)_: Se usa para obtener el código complilado sin nigún enlace.

    -_-(Output)_: Se utiliza para especificar el nombre del ejecutable (O cualquier otro archivo generado durante la compilación).


1. **¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?**

    Se utilizan para almacenar valores que se usan en multiples partes del archivo, facilita la modificación y personalización del Makefile sin tener que cambiar cada instancia de un valor en todo el archivo.
1. **¿Qué utilidad tiene un @ en un Makefile?**

    Se utiliza como un prefijo para evitar que la regla que le sigue se imprima en la salida estándar. Es una forma de hacer que la ejecución de esa regla sea silenciosa, útil para hacer que el proceso de compilación sea más limpio y fácil de leer.
1. **¿Para qué se utiliza .PHONY en un Makefile?**

    Se utiliza para indicar al Make que ciertos targets no representan archivos reales y, por lo tanto, no debe tratar de comparar sus fechas de modificación con las de archivos existentes y por ejemplo, ejecutarlos aunque exista otro archivo con el mismo nombre.