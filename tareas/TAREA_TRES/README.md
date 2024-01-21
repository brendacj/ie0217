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

## Parte teórica

### Templates

1. **Definición de Templates: Explique el concepto de templates en C++ y proporcione un ejemplo simple**

    Los templates son características del lenguaje de programación que permite crear clases y funciones genéricas que puedan trabajar con distintos tipos de datos sin necesidad de especificarlos. Un ejemplo simple sería una calculadora que resuelva operaciones matemáticas entre números enteros y flotantes (decimales), no es necesario tener una calculadora para cada tipo de número.

1. **Sobrecarga de Plantillas: ¿Cómo se realiza la sobrecarga de funciones con plantillas en C++?**

    La sobrecarga se funciones en un template funciona de igual manera que con las demás, se trata de varias funciones que se llaman igual pero que el compilador se encarga de reconocer cual se debe utilizar según diferentes características normalmente relacionadas con los parámetros de la función, la plantillas tienen la particularidad de que si se utiliza un tipo de dato que no está especificado en ninguna otra función, automáticamente se usará la función genérica.

1. **Plantillas de Clases: Explique cómo se pueden utilizar plantillas en la definición de clases en C++.**

    Las plantillas en clases se pueden utilizar para crear instancias de diferentes tipos y poder llamar los métodos de las clases con diferentes tipos de datos sin que se generen conflictos. Para utilizar las clases de manera genérica se pone la siguiente línea antes de declarar la clase:
     ```
    template <typename/class T>
     ```
    Puede tener más parametos u otro carácter en lugar de la T, pero normalmente se usa la T, dentro de la clase se pueden definir los métodos y atributos con tipo "T" y se pueden llamar mediante objetos con datos de diferentes tipos.

### Excepciones

1. **Manejo de Excepciones: Describa los bloques try, catch y throw y cómo
 se utilizan para el manejo de excepciones en C++.**

    - _try_: Bloque de código que se va intentar ejecutar, pero es propenso a que ocurra algún error, en caso de que ocurra un error este va a lanzar una excepción con throw al bloque catch.
    - _catch_: Bloque de código que se encarga de manejar las excepciones, se especifica el tipo de excepción y lo que se ejecutará en caso de caer en esa excepción. Puede haber varios bloques catch para manejar diferentes tipos de excepciones.
    - _throw_: Se utiliza para lanzar excepciones en una parte específica del código hacía el bloque catch, normalmente se utiliza dentro del try y transfiere la ejecución al catch para manejar el error.

1. **Excepciones Estándar: Nombre al menos tres excepciones estándar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrían ser útiles.**

    - _invalid_argument_: Se lanza cuando se pasa un argumento a una función que es inválido para esa función, es útil por ejemplo cuando se necesita trabajar solamente con números positivos, un argumento invalido sería un número negativo.

    - _out_of_range_: Se lanza cuando se intenta acceder a un índice fuera del rango válido en contenedores como arreglos o vectores. Es útil para situaciones en donde se deba obtener o definir un valor guardado en un contenedor, se requiere que el índice indicado esté dentro del rango.

    - _runtime_error_: Se utiliza para excepciones que representan errores que solo pueden determinarse en tiempo de ejecución y que no se pueden capturar de manera estática. Es útil en situaciones en donde ocurre un error inesperado durante la ejecución y se desea que el programa falle de manera correcta.

1. **Política de Manejo de Excepciones: ¿Qué es una política de manejo de
 excepciones y por qué es importante considerarla al diseñar software?** 

    Se trata de un conjunto de normas y prácticas de programación relacionadas con el manejo de errores, normalmente se toma como una estrategia que usa un programador, o grupo de programadores para manejar excepciones al realizar un programa, esto puede ser importante para que los miembros de un equipo tengan una base para considerar qué tipo de excepciones lanzar, cómo manejarlas, que mensajes mostrar, esto con el fin de mejorar la comunicación entre compañeros, legibilidad y orden del código en cuanto a los errores que puedan encontrarse, además de asegurar la eficiencia del código a la hora de manejar los errores y asegurarse de que no vaya a fallar de manera inesperada.

1. **Noexcept: Explica el propósito de la palabra clave noexcept y cómo se utiliza en C++.**

    Se trata de una especificación de función en C++ que se utiliza para indicar que una función (u operadores) no lanza excepciones durante su ejecución. Esta información es útil para el compilador y el programador, ya que proporciona detalles sobre el comportamiento esperado de la función en términos de excepciones. Se usa poniendo un noexcept después del nombre de la función, también se puede poner noexcept(false) para indicar que la función sí devuelve excepciones.

Obtenido de:  [noexcept (C++) ](https://learn.microsoft.com/es-es/cpp/cpp/noexcept-cpp?view=msvc-170)

### STL (Standard Template Library)

1. **Contenedores STL: Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.**

    - _vector_: Es un contenedor de arreglo dinámico que proporciona acceso rápido a elementos mediante índices, se utiliza normalmente cuando se debe trabajar con memoria dinámica, en donde se tenga que acceder a los elementos del vector frecuentemente.

    - _set_: Es un contenedor asociativo que almacena elementos únicos, donde los elementos están ordenados, no por orden de ingreso, son utilices si se necesitan listas ordenadas.

    - _map_: Es un contenedor asociativo que almacena pares clave-valor, donde las claves están ordenadas,es util cuando se necesita una estructura numerada o tipo diccionario.

    - _queue_: se trata de una estructura que sigue el principio "primero en entrar, primero en salir" y proporciona operaciones de agregar en la parte trasera y eliminar en la parte delantera. Utili para implentaciones donde se necesita la lógica de cola o "hacer fila".

    - _list_ Es una lista enlazada mediante dirreciones a los nodos de los siguientes elementos, que permite inserciones y eliminaciones eficientes en cualquier posición, pero con acceso secuencial a los elementos. Es útil cuando se necesita realizar operaciones frecuentes de inserción y eliminación en cualquier posición o recorrer los elementos dentro de ella

1. **Iteradores en STL: Explique el concepto de iteradores en la STL y cómo se utilizan para acceder a elementos en contenedores.** 

    Es un objeto que funciona de manera similar a un puntero, representa la posición de un elemento en un contenedor. Se utiliza para iterar secuencialmente sobre elementos en un contenedor. Se utilizan marcando la posición del inicio y una más allá del final de los contenedores, ya sea para atrás o para adelante, estos iteradores se usan como los limites dentro de ciclos o para acceder a elementos específicos del contenedor al sumarle o restarle posiciones para realizar operaciones de inserción, eliminación o desplazamiento.

1. **Algoritmos STL: Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.**

- _sort_: Ordena los elementos de un rango en orden ascendente por defecto, pero también puede ser personalizado utilizando un comparador.

- _find_: Busca la primera ocurrencia de un valor en un rango y devuelve un iterador al primer elemento encontrado. Si no se encuentra, devuelve el iterador al final del rango.

- _copy_: Copia los elementos de un rango a otro, toma dos iteradores que definen un rango de origen y un tercer iterador que indica el inicio del destino

1. **Algoritmos Personalizados: ¿Cómo podría utilizar un algoritmo personalizado con la STL?**

    Se pueden utilizar algoritmos personalizados con la STL de C++ definiendo funciones propias y luego pasándolas como argumentos a los algoritmos de la STL. 

### Expresiones Regulares

1. **Definición de Expresiones Regulares: Defina qué son las expresiones
 regulares y proporcione un ejemplo simple.**

    Las expresiones regulares son patrones  que describen conjuntos de cadenas de caracteres, utilizados para manipular o buscar cadenas de texto de una manera más flexible. Se puede buscar patrones, validar cadenas, realizar sustituciones y más. Un ejemplo es una verificación de que se use una u otra expresión en una cadena de caracteres:
    ```
    regex("(com|cr)")
    ```

1. **Caracteres Especiales: Enumere al menos tres caracteres especiales comúnmente utilizados en expresiones regulares y describa sus funciones.**

    - _. (Punto)_: Coincide con cualquier carácter, excepto un salto de línea. Es un comodín que representa cualquier carácter único en el texto.

    - _* (Asterico)_: Coincide con cero o más repeticiones del carácter o grupo  de caracteres anteriores. Indica que el carácter anterior puede aparecer cero o más veces en la cadena.

    - _+ (Más)_: Coincide con una o más repeticiones del carácter o grupo precedente. Indica que el carácter anterior debe aparecer al menos una vez en la cadena.

1. **Uso de Expresiones Regulares en C++: ¿Cómo se utilizan las expresiones regulares en C++? Proporciona un ejemplo.**

    Se debe importar la biblioteca regex y establecer una expresión regular que se va a comparar con las cadenas de texto para verificar que cumplan con sus especificaciones, por ejemplo:
    ```
    auto const regex = std::regex("(lunes|martes)");
    auto const Text = std::string("martes 23 de septiempre");
    bool const TextContainsRegex = std::regex_search(Text, regex);
    ```

    En el anterior ejemplo se verifica que aparezcan las palabras "lunes" o "martes" en el texto ingresado con la función regex_search. Esto podría ser útil para verificar que el día cae lunes o martes en la fecha de una bitácora y realizar una tarea específica.

1. **Validación de Patrones: ¿Por qué las expresiones regulares son útiles para la validación de patrones en cadenas de texto?**

    Ofrecen flexibilidad al definir reglas detalladas, permiten la búsqueda y extracción eficientes de información, y son expresivas y claras. Su reutilización en diferentes contextos ahorra tiempo al no tener que realizar una verificación personalizada para cada cadena a ingresar, pueden garantizar que los datos ingresados cumplan con un formato específico y mejora la consistencia del código, brindando una solución versátil para manipular y verificar datos en programas y aplicaciones.













