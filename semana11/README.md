Este proyecto consto de calcular las temperaturas de una placa muy delgada cuadrada que esta aislada por los bordes y en estos puntos se mantiene la temperatura constante.
El método de solución elegido es representar cada elemento de la placa como coordenadas i e j.
Se indicará una tolerancia en el cambio de temperaturas de los puntos dentro de los bordes.
En mi programa se leen los datos de un archivo (se lee los datos de los bordes, el lado de la matriz y epsilon), después se prosigue con la creación de la matriz de nxn en mi caso es de 15 x 15 a la cual lleno con ceros.
Se sigue con asignarle los valores de los bordes a la matriz y llenar lo que hay dentro de ella con ceros. Esta sera la matriz inicial. Después se hará un contador que será el numero de iteraciones, dentro de este se tendrá que crear los archivos para llenarlos con sus respectivas matrices.
Continua con asignarle el valor de la posicion 7,7 a una variiable, con esta se haran las respectivas operaciones dadas en el libro para aproximarse a la temperatura deseada con el paso de las iteraciones. Terminara de contar hasta que ya no se satisfaga la condicion del bucle. Dentro de esta se imprimira la matriz y esta quedara guardada en los archivos que se iran creando con el paso del contador.
El numero de archivos depende de la epsilon, si se hace mucho mas pequeña habra muchos mas archivos.
En mi caso solo conte con nueve con sus respectivas gráficas.
