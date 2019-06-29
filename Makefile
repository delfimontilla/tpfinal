main: main.c errores.c tda_lista_rec.c tda_vector.c simpletron.c procesamiento.c
	gcc -ansi -Wall -pedantic -g -o main errores.c tda_lista_rec.c tda_vector.c simpletron.c procesamiento.c main.c
