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












