# TAREA CUATRO
## Intrucciones de ejecución

### Requisitos previos
- Asegúrarse de tener instalado un compilador de C++ (por ejemplo, g++).

- En caso de OS Windows asegúrarse de tener instalado una herramienta (MinGW) para acceder al Make.

- Las respuestas a las preguntas teóricas se encuentran más abajo en el README.md.

- La documentación de la parte práctica número dos se enucntran más abajo en el README.md

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

### Uso del programa

Se empezará el programa en el menú con 4 opciones:

1. *Mostrar lista de alergia padecidas*

    Dentro de esta opción se debe ingresar una sumatoria de los valores de las alergias padecidas, esto devolverá la lista de alergias asociadas a la puntuación y se devuelve al menú principal.

1. *Calcular puntuación de alergias*

    Al escoger esta opción se desplegará un nuevo menú, el cual tiene la siguientes opciones:

    - Ingresar alergias por nombre: Pide la cantidad de alergias que desea ingresar por nombre y pide cada uno, al finalizar se devuelve al menú secundario.
    - Ingresar alergias por valor: Pide la cantidad de alergias que desea ingresar por valor y pide cada uno, al finalizar se devuelve al menú secundario.
    - Ingresar alergias por nombre y valor: Pide la cantidad de alergias que desea ingresar por nombre y valor, y pide cada nombre y valor, al finalizar se devuelve al menú secundario.
    - Calcular la puntuación final de alergias: Una vez se hayan ingresado todas las alergias deseadas con las opciones anteriores se usa la opción "d" para calcular la puntuación final, mostrar la lista final de alergias, mostrar el promedio y las listas de valores desconocidos si es necesario, vuelve al menú principal.


1. *Agregar una nueva alergia al sistema*

    Al escoger esta opción se pide el nombre y valor de la nueva alergia a insertar, y vuelve al menú, ahora se puede acceder a la alergia ingresada desde la opción 1 o 2.

1. *Salir*

    Al escoger esta opción finaliza el programa
## Parte teórica

1. **Explique la diferencia entre una lista y una tupla en Python.**

    La diferencia principal entre las listas y las tuplas es la mutabilidad, las tuplas son elementos inmutables, lo que quiere decir que no se pueden agregar, eliminar o modificar elementos de la tupla una vez creada, la lista por otro lado, permite cambiar los elementos, lo que hace que su manejo de memoria sea más complejo y su aplicación más versátil. 

1. **¿Qué es la sobrecarga de operadores en Python y cómo se implementa?**

    Como es usual, la sobrecarga de operadores en Python se usa para asignar acciones específicas a los operadores cuando estos se utilizan entre objetos de una clase, ya que Python no puede identificar directamente cual es el objetivo del operador. La forma de implementar la sobrecarga de operadores es usualmente con los métodos mágicos de Python, los cuales se llaman automáticamente al usar un operador (+, -, *, /), dentro de los métodos mágicos se devuelve la operación deseada con los atributos correspondientes involucrados usando los indicadores de self y other para hacer referencia los dos objetos a los que se les va a aplicar la operación.

1. **Explique el concepto de alcanzabilidad (scope) de una variable en Python.** 

    Al igual que en otros lenguajes de programación, el Scope de una variable se refiere a las partes del código donde se puede usar la variable, acceder a ella, hacer referencia y que tenga sentido. Las variables "globales" que son las que se definen afuera de cualquier bloque de función o clase en el código, pueden accederse desde cualquier punto del código, pero para poder modificarlas dentro de un bloque de función se debe usar la palabra `global`. Las variables que se definen dentro de un bloque de función o clase se pueden usar solamente dentro de ese bloque o en funciones anidadas creadas dentro de estos bloques.

1. **¿Qué es un decorador en Python y cúal es su función principal?**

    Se trata de un patrón de diseño que permite usar y modificar una función dentro de otra función, la función externa (Decorador) se encarga de usar y/o modificar la función original, ya sea recibiendo su referencia como parámetro o con el uso de funciones anidadas.

1. **¿Cómo se gestionan las excepciones en Python? Proporcione ejemplos de uso de bloques try, except y finally.**

    - _try_: Bloque en donde se ejecuta el código que podría fallar, si es un fallo de Python la excepción saltará automaticamente, pero si es un error personalizado, se debe usar condiciones y levantar una excepción con `raise`para que pueda ser identificada por el `except`. Por ejemplo en el try podría haber divisiones que podrían generar una división entre 0 y levantar una excepción.
    - _except_: Este bloque atrapas las excepciones levantadas durante el `try` y se encarga de manejarlas, imprimiendo un mensaje de error o gestionando la ejecución de otra manera, como este bloque atrapa cualquiera excepción, es necesario establecer a cuál excepción se refiere y hacer varios bloques `except` de ser necesario. Por ejemplo si se quiere atrapar un ZeroDivisionError, se especifica de la siguiente manera:
        ```
        except ZeroDivisionError:
            print("No se puede dividir entre 0 ")
        ```

    - _finally_: Este bloque de manejo de excepciones va al final y siempre se va a ejecutar, ya sea que ocurra una excepción o no. Por ejemplo se puede usar para cerrar un archivo al finalizar el manejo de errores, ya sea que falle o no.

1. **¿Qué son los generadores en Python y para qué se utilizan?**
    
    Función que devuelve un iterador cada vez que sea pedido en el código y no todos de una vez como lo haría una lista, se pausa y reanuda el bloque según se necesite, de manera que hacen un uso eficiente de memoria y tienen mayor rendimiento.

1. **Explique la diferencia entre init y call en clases de Python.**

    El `init`, se podría tomar con el constructor de la clase, ya que se llama al momento en que se instancia un objeto y normalmente se inicializan las variables, pero este es un método que no devuelve nada, por otro lado, el `call` permite que el objeto actúe como una referencia a un método asociado, este podría devolver elementos y ser usado como un método cualquiera que realiza ciertas acciones al llamar el objeto con paréntesis.

1. **¿Cómo se organizan los módulos y paquetes en Python? ¿Qué es init.py?**

    Un módulo es un archivo que contiene código de Python, el cual se puede importar en un script y acceder a sus variables globales y métodos. Los paquetes son un conjunto de módulos que se organizan en un directorio, de esta manera se pueden acceder a los módulos de manera más ordenada. Para que los módulos de un directorio sean considerados como un paquete deben tener un archivo `init.py`, este archivo va a inicializar los elementos necesarios o puede estar vacío, pero es necesario para reconocer el paquete.

1. **Explique la diferencia entre métodos append() e extend() en listas de Python.**

    El método `append()` se usa para agregar un solo elemento al final de una lista, mientras que el `extend()` puede agregar los elementos de un elemento iterable (Es decir otra lista, una tupla, etc) al final de la lista, esto en lugar de recorrer este elemento iterable con un `for` y agregara cada uno de los valores con un `append()` internamente.

1. **¿Cuál es la diferencia entre un método de clase y un método estático en Python?**

    Ambos métodos pueden ser usados desde la clase sin la necesidad de instanciar un objeto, los métodos de clase, que usan el decorador `@classmethod`, puede modificar los atributos de la clase, pero no de las instancias, y puede acceder `cls`, mientras que las clases estáticas (decorador `@staticmethod`) no puede modificar ningún atributo ni usar `cls` o `self`.

    Obtenido de: [Python Classmethod](https://pythonbasics.org/classmethod/)

1. **Hable sobre las diferencias entre herencia simple y herencia múltiple en Python**

    En la herencia simple una subclase tiene una única clase base, la cual recibe entre paréntesis como parámetro en la declaración de la clase, puede acceder a sus clases y métodos según las especificaciones de acceso. En la herencia múltiple una subclase puede tener varias clases bases (Recibidas como parámetros entre paréntesis) y acceder de igual manera a sus métodos y atributos desde instancias de la clase derivada.

1. **¿Cómo se manejan los errores de importación de módulos en Python?**

    Cuando no se encuentra un módulo importado, el error que devuelve la terminal es ModuleNotFoundError, esto se puede poner en un `except` después de importar el modúlo dentro del `try` y manejar el error correctamente, también se puede usar el método `hasattr()` de Python para verificar si existe un módulo con un determinado nombre, ya sea dentro de una excepción personalizada un simplemente como una condición.

1. **¿Cuál es la diferencia entre una clase y un objeto en Python?**

    Una clase se puede tomar como un tipo de molde o plantilla para realizar objetos, define la estructura y comportamiento de los objetos contiene diferentes métodos (Acciones del objeto) y atributos (Características del objeto), que van a describir el objeto en sí. Un objeto es una instanciación de una clase, este va a tener sus propios valores para los atributos y podrá acceder a los métodos de la clase por la cual fue construido.

1. **Hable sobre la diferencia entre una clase abstracta y una interfaz en Python.**

    
    Una clase interfaz tiene solo la declaración de sus métodos o de algunos de sus métodos con la intensión de estos sean reescritos un sus clases derivadas, pero esto se hace por protocolo o por excepciones que no permitan acceder a métodos desde la clase base, ya que Python no lanzaría un error si se hace lo contrario, por otro lado las clases abstractas son las que tienen por lo menos un método abstracto, estos métodos usan el módulo ABC y el decorador `@abstractmethod` y tampoco tienen la implementación en la clase base, sino se piensa para que se realice una sobreescritura del método en la clase derivada, pero en este caso Python sí obliga a que se desarrolle en la clase derivada y se acceda desde ahí.

    Obtenido de: [Interfaces y Abstract Base Class (ABC)](https://ellibrodepython.com/abstract-base-class)

1. **Explique el concepto de sobreescritura de métodos en Python y cómo se realiza.**

    La sobreescritura de métodos permite a una clase derivada proporcionar una implementación específica para un método que ya está definido en su clase base. Esto permite que la clase derivada modifique o extienda el comportamiento del método heredado. Se realiza haciendo un método con un nombre determinado en la clase base y que en la clase derivada se cree un método del mismo nombre que normalmente hace lo mismo, pero con ciertas modificaciones especiales para la clase derivada.


## Parte Práctica 2

Para esta parte de la tarea fue necesario hacer diversas pruebas al código bajo diferentes situaciones para poder determinar su comportamiento, se midió el tiempo de ejecución mediante la importación de la biblioteca `timeit` con la siguientes líneas en el código para medir el tiempo de ejecución del "main" del programa y por lo tanto de todas las implementaciones dentro de él:
```
    tiempo_ejecucion = timeit.timeit(procesarOpcion, number=1) 
    print(f'Tiempo de ejecución: {tiempo_ejecucion} segundos')
```
Además se utilizó el profiler `cProfile` para ver detalladamente el tiempo de ejecución de cada método y función del programa, en la carpeta "src" se encuentran los archivos .pstats creados durante las pruebas.

Para poder acceder a los archivos .pstats es necesario, una vez ubicados en la carpeta TAREA_CUATRO, ejecutar el siguiente comando para ingresar a la carpeta "src":

```
cd .\src\
```

Ya ubicados en la carpeta donde se encuentran los archivos, se utiliza el siguiente comando para entrar a la terminal pstats:
```
python -m pstats <nombre_del_archivo>.pstats
```

El texto dentro del de los <> debe ser el nombre de cualquiera de los tres archivos .pstats disponibles, los cuales son:

- primera_salida_perfilar
- segunda_salida_perfilar
- tercera_salida_perfilar

Correspondientes a la prueba ideal, prueba con excepciones y prueba con lista completa respectivamente, estas pruebas son explicadas más adelante en el documento.

Una vez dentro de la terminal pstats se puede ejecutar el siguiente comando para que los stats estén ordenados por tiempo acumulativo:
```
sort cumulative
```

Una vez acomodados, se ejecuta el siguiente comando para poder visualizar todos los stats:
```
stats
```

Al finalizar de visualizar lo tiempos puede pulsar "ctrl + C" para terminar la ejecución de la terminal y volver al shell.

Es importante saber que la duración de la ejecución completa depende mucho de la interacción con el usuario, por la forma en la que es necesario pedir la entrada de datos, puede que el usuario dure más o menos ingresandolos, por eso cada prueba se realizó 3 veces y se sacó un promedio de sus tiempos.

De todas formas, se implementó una prueba que toma en cuenta todas las funciones del programa, es decir, que realiza todas las opciones del menú y dentro de ellas toma en cuenta las posibilidades que permite la función, esta misma prueba se realizó con diferentes implicaciones y los resultados se muestran a continuación.

### Prueba ideal

En esta prueba el programa se utilizó de modo que no fallara en ningún momento, sino que todos los datos se ingresaran y mostraran de manera continua sin interrupciones, además de que la lista de alergias era la original del enunciado (Pequeña). El promedio del tiempo de ejecución tomada con `timeit` fue de 56,85 segundos en este caso.

Al entrar al archivo .pstats y observar los stats en orden acumulativo, se puede observar que, como es usual los métodos internos de Python son los que duran más, pero considerando solo las funciones y métodos creados, la tabla se ve algo así:
```
cumtime  percall filename(function)
74.940   37.470 .\main.py(procesarOpcion)
12.976    3.244 .\TiposDeAlergia.py(VerificarPotencia2)
12.908   12.908 .\TiposDeAlergia.py(ingresarValor)
11.499    3.833 .\TiposDeAlergia.py(VerificarInt)
11.219   11.219 .\TiposDeAlergia.py(ingresarNombre)
```
En esta medición el tiempo total de ejecución fue de 74.940, el tiempo acumulado de procesarOpcion es el mismo ya que dentro de él se maneja todo el programa, después se puede observar que la segunda función con mayor tiempo acumulativo fue la de VerificarPotencia2 de la clase TiposDeAlergia con 12.976 segundos, esta función básicamente pide un número y verifica que sea una potencia de 2 y es llamada desde la siguiente en la lista (ingresarValor con 12.908 segundos), las dos están relacionadas con el valor numérico de las alergias, tiene sentido que tengan una mayor duración, ya que al ingresar los valores se debe tener más cuidado y por lo tanto es más lento.

Las últimas dos funciones con mayor tiempo acumulativo son las de VerificarInt e ingresarNombre, ambas también relacionadas con el ingreso de datos al sistema, VerificarInt se encarga de verificar que el número sea entero en los rangos, e ingresarNombre es el método utilizado para ingresar una alergia por nombre y buscar su valor.

Se puede notar que la clase TiposDeAlergia es la que más tiempo de ejecución utiliza, esto debido a la complejidad de los procesos de sus métodos, además de una gran cantidad de entradas de datos y verificación con manejo de errores, se deben recorrer muchas listas para buscar los valores y nombres desconocidos. Las demás clases tienen implementaciones mucho más simples en comparación, normalmente recorren una sola lista, comparan o solo imprimen valores.


## Prueba con excepciones

Para la segunda prueba se realizó el mismo procedimiento que en la interior, pero todas las excepciones son llamadas por lo menos una vez. El manejo de excepciones en este programa se hace lo más completo posible, pidiendo de nuevo los valores hasta que sean ingresados correctamente, esto permite que la ejecución se extienda mucho al encontrarse con múltiples ciclos infinitos. En este caso de igual manera la lista de alergias es la original del enunciado. El promedio del tiempo de ejecución tomado con `timeit` fue de 91,28 segundos en este caso.

De nuevo considerando solo las funciones creadas, se obtiene la siguiente tabla de tiempos acumulados:
```
cumtime  percall filename(function)
108.011   54.005 .\main.py(procesarOpcion)
21.311    5.328 .\main.py(VerificarOpcion2)
18.293    3.049 .\main.py(VerificarOpcion1)
17.272    4.318 .\TiposDeAlergia.py(VerificarPotencia2)
15.772   15.772 .\TiposDeAlergia.py(ingresarValor)
```

Se puede observar que en estas ocasiones en donde se hace fallar el programa, las funciones que más tiempo consumen son las de verificar opciones, con 21,31 y 18,293 segundos (Ignorando la de procesarOpcion porque es todo el programa), esto debido a la cantidad de veces que se llaman por estar en los menús, los cuales se muestran continuamente en la pantalla y recibe muchas opciones, de igual manera verificarPotencia2 va acaparar incluso más tiempo que antes por las veces que falla el programa al igual que ingresarValor, que es donde se llama VerificarPotencia2.

Como conclusión de esta prueba especifica se puede decir que entre más errores se cometan al ingresar los datos del programa, más durará el tiempo de ejecución.

### Prueba con media lista

Para esta prueba se cargó la mitad de la lista adjunta en mediación y se realizó el mismo procedimiento que la prueba número uno, pero con una lista más grande, en esta ocasión no se sacó el archivo .pstats para no cargar mucho la tarea, pero el promedio de tiempo de ejecución tomada con `timeit` fue de 65,82 segundos, se puede observar que el tiempo de ejecución similar al de la prueba 1, con un tiempo un poco mayor. Esto debido a que los números que podían ser ingresados podían ser más grandes, por lo que había que tener más cuidado con usarlos, además de que la lista a recorrer era más grande, por lo que iba a durar más.

### Prueba con lista completa

Ahora para la cuarta prueba se cargó la lista completa del archivo Alergias.txt, con el mismo procedimiento, pero usando números más grandes, el tiempo promedio `timeit` en está ocasión se registró con 94,42 segundos, lo cual es considerablemente mayor que la última prueba. La lista obtenida del `cProfile` se muestra a continuación:

```
cumtime  percall filename(function)
103.187   51.593 .\main.py(procesarOpcion)
25.988    6.497  .\TiposDeAlergia.py(VerificarPotencia2)
24.742   24.742  .\TiposDeAlergia.py(ingresarValor)
19.807    6.602  .\TiposDeAlergia.py(VerificarStr)
19.426   19.426  .\TiposDeAlergia.py(ingresarNombre)
```

Como es usual la función procesarOpcion es la que tiene mayor tiempo, el de ejecución en este caso. Se encuentra después la opción de verificarPotencia2 (25,99 segundos), lo que usual debido al ingreso de números muy grandes en este punto, destacan más que todo las opciones de ingrersarValor e ingresarNombre, ya que se muestran como unas de las más lentas (superando considerablemente a las mismas de la prueba 1), debido a los diversos recorridos de listas muy largas en este punto.

Como consideraciones generales, se observó una gran cantidad de tiempo utilizado para la verificación de excepciones, estos son de los métodos más lentos en la mayoría de los casos, esto debido a la implementación de ciclos infinitos en sus bloques para pedir los números varias veces, y a pesar de su implementación en forma de método útil para reciclar código, se trata de funciones bastante sólidas y eficaces que no permiten al programa fallar, por lo que se entiende que se tenga que sacrificar un poco de velocidad en la ejecución.

De igual manera, el tamaño de las listas y los números influye mucho en la velocidad de ejecución entre más larga sea la lista de alergias, más dura su ejecución, pero se trata de un programa más completo y útil.


















