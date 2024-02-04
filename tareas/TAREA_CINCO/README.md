# TAREA CUATRO
## Intrucciones de ejecución

### Requisitos previos
- Asegúrarse de tener instalado Python 3 en el computador.

- En caso de OS Windows asegúrarse de tener instalado una herramienta (MinGW) para acceder al Make.

- Las respuestas a las preguntas teóricas se encuentran más abajo en el README.md.

- La documentación de la parte práctica número dos se enucntran más abajo en el README.md


### Ejecución

1. Ejecute alguno de los siguientes comandos para para ejecutar el programa en Python 3:

    ```
    make
    make all
    make run
    ```

1. Una vez finalice el programa ejecute el siguiente comando para borrar el pycache generado:

    ```
   make clean
   ```

### Uso del programa

## Parte teórica

###  Iteradores

1. **¿Qué es un iterador en Python y cuál es su propósito?**

    Se trata de un método utilizado para iterar colecciones como listas o tuplas, accediendo a sus elementos para realizar operaciones específicas, estas pueden tener características diferentes a las de un ciclo por ejemplo, ya que puede iterar el contenedor solamente cuando sea necesario en el código y no todas las posiciones de una vez, se puede utilizar el método `next` para acceder al próximo elemento del iterador. Se debe usar el método `iter` para poder hacer un elemento iterable en un iterador.

2. **Explica la diferencia entre un iterable y un iterador.**

    Un iterable es un elemento que se puede iterar, es decir que tiene elementos varios dentro de sí que se pueden recorrer con diferentes métodos. Por otro lado, un iterador es un objeto creado para iterar un elemento iterable mediante el método `next`, obteniendo así funciones específicas deseadas al recorrer el contenedor.

###  Excepciones

1. **Define qué es una excepción en Python.**

    Una excepción es un evento inesperado o indeseado que ocurrido durante la ejecución del código, que detendrá la ejecución del programa en caso de que no sean manejadas.

2. **¿Cúal es el propósito de la cláusula try...except en el manejo de excepciones?**

    - En el bloque de `try` se escribirá el código que podría levantar una excepción, se tratará de ejecutar este código y en caso de que ocurra un error el bloque levantará una excepción.
    - El bloque `except` se encarga de manejar las excepciones levantadas en el `try`, de manera general o con identificadores para errores especificos, mostrará el error obtenido y un mensaje de error.
3. Explica la diferencia entre las cláusulas except y finally en el manejo de excepciones.
    
    
    El código dentro del bloque `except` se ejecutará cuando ocurra al menos una excepción, mientras que el código dentro del bloque `finally` se ejecutará siempre independientemente de que se levante una excepción o no.

### Generadores

1. **¿Qué es un generador en Python y cúal es su ventaja sobre las listas tradicionales?**

    Un generador es una función que retorna un iterador que produce una secuencia de valores cuando se repite. Los valores generados se pueden acceder solo cuando sea necesario, la ventaja que tienen en comparación a la lista está relacionada con el uso de memoria, ya que un generador puede generar una gran secuencia de valores sin guardarlos todos a la vez en la memoria, básicamente se trata de una función que pausa su ejecución hasta que sea necesario devolver un valor de nuevo.

 2. **Explica cómo se puede crear un generador usando la función yield.**

    La forma de crear un generador es manejarlo como una función utilizando la palabra `def` al principio y creando una lógica dentro de ella para generar valores según se desee, cuando estos valores vayan a ser retornados en lugar de usar un `return`, se utiliza un `yield`.

 3. **¿Cúando es más apropiado usar generadores en lugar de listas?**

    Cuando se tiene que trabajar con cantidades de elementos infinitas o muy grandes es más conveniente utilizar un generador debido a su eficiente manejo de memoria.


### Pandas

1. **¿Cúal es la diferencia entre una Serie y un DataFrame en Pandas?**

    Una serie es un elemento unidimensional, como decir un "vector", mientras que un DataFrame se trata de un elemento bidimensional con filas y columnas como un tipo de "matriz". Los DataFrames están hecho de series, y se pueden extraer series de ellos.

 2. **Explica cómo manejar valores nulos o faltantes en un DataFrame.**

    Los valores nulos se pueden manejar con el método de dataFrame `fillna()`, la cual identifica automáticamente los valores nulos o faltantes y los remplaza según criterio especificado, puede cambiarlos por una constante, el elemento anterior, el siguiente elemento o con la media de los datos numéricos de la columna actual.

    Obtenido de: [Trabajando con Datos Faltantes en Pandas](https://barcelonageeks.com/trabajar-con-datos-faltantes-en-pandas/)

 3. **¿Cúal es la diferencia entre loc y iloc en Pandas?**

    Ambos son métodos para acceder a los elementos de un DataFrame, pero la froma en la que lo hacen es la diferencia:

    - _loc_: Accede a grupos de filas o columnas especificando su etiqueta.

    - _iloc_: Accede a grupos de filas u columnas mediante los índices de sus posiciones.



