![Tec de Monterrey](images/logotecmty.png)
# Act 5.2 - Actividad Integral sobre el uso de códigos hash (Evidencia Competencia)

## <span style="color: rgb(26, 99, 169);">¿Qué tengo que hacer?</span>
En este repositorio encontrarás los archivos de entrada, así como las salidas esperadas que podrás usar para probar tu implementación. También encontrarás un archivo "main.cpp". Ahí deberás implementar tu solución. En el archivo deberás colocar en la parte superior, en comentarios, tus datos. Por ejemplo:
```
// =========================================================
// File: main.cpp
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```
<span style="text-decoration: underline;">De manera individual</span>, desarrolla la solución del siguiente problema:

Un **concurso de programación competitiva** es un concurso de programación algorítmica para estudiantes universitarios. En equipos de tres trabajarán para resolver la mayoría de los problemas del mundo real, fomentando la colaboración, la creatividad, la innovación y la capacidad de desempeñarse bajo presión. 

Los equipos concursantes se clasifican primero por la cantidad de problemas resueltos (cuantos más, mejor), luego por la cantidad decreciente de tiempo de penalización. Si dos o más participantes están empatados tanto en problemas resueltos como en tiempo de penalización, se califican en orden creciente de número de equipo.

Un problema se considera resuelto por un equipo concursante si alguna de las presentaciones para ese problema se consideró correcta. El tiempo de penalización se calcula como la cantidad de minutos que tomó el primer envío correcto para que se recibiera un problema más 20 minutos por cada envío incorrecto recibido antes de la solución correcta. Si existe un envío posterior de un problema ya resuelto, no se toma en cuenta. Los problemas no resueltos no incurren en penalizaciones de tiempo.

## <span style="color: rgb(26, 99, 169);">**Entrada**</span>
La entrada consiste en una instantánea de la fila de evaluación, que contiene entradas de algunos o todos los concursantes del 1 al 100 que resuelven los problemas del 1 al 9. Cada línea de entrada constará de tres números y una letra:
```
#team #problem time result
```
Donde *result* puede ser 'C', 'I', 'R', 'U' o 'E'. Estos representan la presentación correcta (*Correct*), incorrecta (*Incorrect*), de solicitud de aclaración (*Request*), no juzgada (*Unjudged *) y errónea (*Erroneous *). Los últimos tres casos no afectan la puntuación.

Las líneas de entrada están en el orden en que se recibieron los envíos.

## <span style="color: rgb(26, 99, 169);">**Salida**</span>
La salida consistirá en un marcador ordenado como se ha descrito anteriormente. Cada línea de salida contendrá un número de concursante, el número de problemas resueltos por el concursante y el tiempo de penalización acumulado por el concursante. Dado que no todos los concursantes del 1 al 100 están participando, muestre solo los concursantes que han realizado una presentación.

## <span style="color: rgb(26, 99, 169);">**Ejemplo de entrada**</span>
```
1 2 10 I
3 1 11 C
1 2 19 R
1 2 21 C
1 1 25 C
```

## <span style="color: rgb(26, 99, 169);">**Ejemplo de salida**</span>
```
1 2 66
3 1 11
```

Para probar tu implementación, compila tu programa con el comando:
```
g++ -std=c++11 main.cpp -o app
```
Posteriormente, prueba con cada uno de los archivos de entrada de prueba que encontrarás en este repositorio (input1.txt, input2.txt, input3.txt, input4.txt). Los resultados que debes obtener se encuentran en los archivos llamados output1.txt, output1.txt, output1.txt y output1.txt. Para realizar las pruebas, puedes usar las siguientes líneas de código. Por ejemplo, si queremos probar con el archivo de prueba "input1.txt".
```
./app < input1.txt > mysolution1.txt
diff mysolution1.txt output1.txt
```
Si el segundo comando no tenga ninguna salida, sabrás que los resultados que obtuviste son los esperados. 

Por último, realiza una investigación y reflexión en forma individual de la importancia y eficiencia del uso de los diferentes algoritmos de ordenamiento y búsqueda en una situación problema de esta naturaleza, generando un documento llamado **"ReflexAct5.2.pdf"**

## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **80%** - Para cada una de las funcionalidades se evaluará:

    - **Excelente (80%)** - pasa correctamente todos los casos de prueba.
    - **Muy Bien (60%)** - pasa correctamente el 75% de los casos de prueba.
    - **Bien (40%)** - pasa correctamente el 50% de los casos de prueba.
    - **Insuficiente (20%)** - pasa correctamente menos del 50% de los casos de prueba.


- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>
- **10%** - Se respetenan los nombres de las funciones en la aplicación.

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>
Esta actividad forma parte tanto de tu calificación final del curso, así como del portafolio de evidencias de las competencias a desarrollar del curso, por lo que se te pide que en forma individual:
* Realices una entrega de  los archivos correspondientes de los algoritmos de ordenamiento y búsqueda, en la sección correspondiente dentro de esta plataforma, así como el documento de reflexión individual (**ReflexAct5.2.pdf**).
* Generes una carpeta en forma personal llamada **TC1031(Portafolio_Final)** que servirá como preparación para la entrega del portafolio de competencias que se realizará al final del curso, esta carpeta debe contener 5 carpetas:
    * Act1.3
    * Act2.3
    * Act3.4
    * Act4.3
    * **Act5.2** - coloca aquí tus archivos que solucionaron la <span style="text-decoration: underline;">actividad 1.3</span> así como el documento de reflexión individual (**ReflexAct5.2.pdf**).
