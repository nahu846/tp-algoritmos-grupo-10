# tp-algoritmos-grupo-10

Objetivo: Desarrollar un algoritmo eficiente que permita comparar dos archivos de texto y encontrar las palabras en común, considerando que ambas palabras deben aparecer en la misma posición dentro de cada línea de los archivos.

Contexto: Imagina que tienes dos archivos de configuración de un sistema. Estos archivos contienen líneas de texto, donde cada línea representa una configuración específica. El objetivo es identificar qué configuraciones son idénticas en ambos archivos, es decir, aquellas palabras que ocupan la misma posición en líneas correspondientes.

Ejemplo:

    Archivo 1:
        usuario:admin
        contraseña:12345
        servidor:localhost

    Archivo 2:
        usuario:admin
        contraseña:67890
        base_de_datos:mydatabase

En este ejemplo, solo la palabra "usuario" aparece en la misma posición en ambas líneas 1.
Resolución del Problema

Algoritmo Propuesto:

    Lectura de los Archivos:
        Se leen ambos archivos línea por línea.
        Cada línea se divide en palabras (tokens) utilizando un delimitador (por ejemplo, espacio en blanco).
        Las palabras de cada línea se almacenan en dos vectores separados.

    Comparación de Vectores:
        Se itera sobre los vectores de manera simultánea.
        En cada iteración, se comparan las palabras correspondientes de ambos vectores.
        Si las palabras son iguales, se considera una coincidencia y se agrega a una lista de resultados.

    Generación del Resultado:
        La lista de coincidencias se imprime o se guarda en un nuevo archivo.

