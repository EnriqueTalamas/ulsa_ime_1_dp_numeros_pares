# Receta: Guardar los números pares

1. Mostrar mensaje de bienvenida
2. totalPares ← __Total pares=Total pares+1____
3. contador ← __0____
4. MIENTRAS contador __<Cantidad____ CANTIDAD HACER
       numero ← leerEntero("_Ingresa un numero_____")
       SI numero _n Mod2=0_____ ENTONCES
           pares[_total pares_____] ← numero
           totalPares ← __total pares+1____
       FIN SI
       contador ← __contador++____
   FIN MIENTRAS
5. Mostrar "Pares encontrados: " y cuales son.__
6. i ← 0
7. MIENTRAS i < Total_Pares_ HACER
       Mostrar pares[i]
       i ← _i+1_____
   FIN MIENTRAS