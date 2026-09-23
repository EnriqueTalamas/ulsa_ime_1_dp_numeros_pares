# Práctica 2: Guardar los números pares
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

__Mi prgrama pregunta 5 numeros y lo que hace con esos 5 numeros es que los guarda, pero solo a lo numeros pares los otrso numeros, osea impares, los ignora. Al final los numeros que son pares los imprime en la pantalla.  ___

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. _Los 5 numeros. ____

**Salidas:**
1. _Los numeros pares y cuales son. ____


## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- _Poner letras. Y que sean numeros____
- _Poner puntos decimales.____

**Tamaño del arreglo y por qué** (piensa en el peor caso):
__5 porque preguntas por solo 5 numeros.___

**¿El 0 y los negativos son pares? ¿Por qué?**
__Si porque a la hora de dividir el residuo da 0.___

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
__Que son 5 numeros___

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Pares guardados | Posición de cada par |
|---|---|---|---|
| 1 | 3, 8, 5, 2, 7 | _8,2____ | __0,1___ |
| 2 | _2,4,6,5,7____ | _2,4,6____ | _0,1,2____ |
| 3 | _1,2,8,6,4____ | _2,8,6,4____ | _0,1,2,3____ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí / No
SI
**¿Tuve que corregirla?**  __Si___

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numeros_pares
./numeros_pares
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->
Guardar los numeros pares de 5 numeros
Escribe un numero: 4
Escribe un numero: 6
Escribe un numero: 8
Escribe un numero: 2
Escribe un numero: 0

Se guardaron 5 numeros pares:
4 6 8 2 0


## 8. Experimentos (Fase 3)

**Experimento A: ¿qué apareció al imprimir las 5 posiciones del arreglo? ¿Por qué?**
_Aparecen valores que no se utilizan porque esas posiciones del arreglo no fueron asignadas.____

**Experimento B: ¿qué pasó al usar la variable del ciclo como posición del arreglo? ¿Por qué?**
__el rpograma intenta guardar el numero sea par o no, porque el programa lo usa para indicar la siguiente posicion.___

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mezcla | 1, 2, 3, 4, 5 | 2 pares: 2, 4 | _2,4____ | __si___ |
| Posiciones distintas | 3, 8, 5, 2, 7 | 2 pares: 8, 2 | _8,2____ | __si___ |
| Todos pares | 2, 4, 6, 8, 10 | 5 pares | _2,4,6,8,10____ | __si___ |
| Todos impares | 1, 3, 5, 7, 9 | 0 pares | _____ | __si___ |
| Con cero y negativos | 0, -3, -4, 7, 1 | 2 pares: 0, -4 | _0,-4____ | __si___ |
| Entrada inválida | `hola` o `3.5` | vuelve a pedir | _Escribe un numero entero_ |si |
| Caso propio 1 | _1,2,3,8,9____ | 2 pares:_2,8____ | _2,8____ | _si____ |
| Caso propio 2 | _Ian___ | __vuelve a pedir___ | Escribe un numero entero | __si___ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _No me funciono el else ____ | _la sintaxis____ | __si___ |
| 2 | __El uso del for ___ | _el valor de i____ | __si___ |

**Reto elegido (opcional):** __Utilizar el for en mas ejercicios___

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| __Si se puede utilizar uin if y adentro de ese if utilizar otro como una condicion extra.___ | __intente hacerlo con el while___ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
__Aprendi a usar comandos basicos y darle valor o igualdad a las variables.___

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
__Yo cambiaria el que puedas realizar el comando hasta que escribas el comando de salir.___

**¿Qué fue lo más difícil y cómo lo resolví?**
_Poner el comando con una sintaxis correcta, lo resolvi con practicas.____

**¿Qué pregunta me quedó sin responder?**
_Si puedes hacer una condicion dentro de otra condicion.____

**¿Por qué no puedo usar la variable del ciclo para guardar en el arreglo?**
____porque no representa la posicion correcta de los pares dentro del arreglo._

## 13. Lista de verificación antes de entregar (Fase 5)

- [ si] Llené todas las secciones (no quedan `__no __`)
- [ si] Mi programa compila sin advertencias
- [ si] Probé todos los casos de la tabla
- [ si] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ si] No modifiqué `utilerias.h`
- [ si] Hice al menos 3 commits con mensajes claros
- [ si] Hice `git push` y verifiqué mi fork en GitHub
- [ si] Entregué el enlace de mi fork en Classroom