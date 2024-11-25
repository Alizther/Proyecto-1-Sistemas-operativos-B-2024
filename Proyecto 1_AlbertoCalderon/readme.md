# Autor
Alberto José Calderón Zerpa
	Ci: 24198092

## Algoritmos

La aplicacion Esta disea como un simulador de Algoritmos de procesos, para la materia de Sistemas operativos sementre B-2024

La aplicacion está escrita en C++ y utiliza Qt Creator como interfas Grafica
La aplicacion corre los diversos Algoritmos usados en sistemas operativos para priorizar tareas y procesos

Los algoritmos implementados son los siguientes:

***No Expulsivos***
    *Primero en llegar primero en ejecutar (FCFS)
    *Primero el trabajo más corto (SJF)
    *Selección aleatoria
    *Planificación basada en prioridades

**Expulsivos***
    *Turno rotativo (round robin)
    *Primero el menor tiempo restante (SRTF)
    *Planificación basada en prioridades

El simulador cuenta con una interfaz que permite a los usuarios:

*Generar de manera aleatoria detalles de procesos:
	*Tiempo de llegada (arrival time)
	*Tiempo de procesamiento (burst time) 
	*Prioridad.

*Elegir que algoritmo se quiere ejecutar, con la finalidad de observar su comportamiento. 

### Ejecucion 

Se necesita {Qt Creator}.
	Abrir el proyecto y ejecutar con la plataforma.
	Necesario tener c++20.


