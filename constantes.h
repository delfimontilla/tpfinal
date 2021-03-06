#ifndef CONSTANTES__H
#define CONSTANTES__H 1

#include <stdio.h>

/*archivo de macros numéricas, palabras utilizadas como argumentos y bloques de mensajes de ayuda*/

#define ARGC_MAX 6
#define ARGC_MIN 2
#define CANT_PALABRAS_DEFAULT 50
#define ARG_POS_CANT_PALABRAS 1
#define ARG_POS_CANT_PALABRAS_NUM 2
#define ARG_POS_FSALIDA1 1
#define ARG_POS_FSALIDA1_TIPO 2
#define ARG_POS_FSALIDA2 3
#define ARG_POS_FSALIDA2_TIPO 4
#define ARG_POS_FENTRADA1 1
#define ARG_POS_FENTRADA2 3
#define ARG_POS_FENTRADA3 5
#define ARG_POS_H 1
#define MASK_ORIENTACION1 0x1FF
#define MASK_ORIENTACION2 0x7F
#define SHIFT_ORIENTACION 9
#define MIN_CANT_PALABRA 1
#define MAX_CANT_PALABRA 512
#define MAX_CADENA 100
#define MAX_CANT_OPCODE 128
#define MAX_CANT_OPERANDO 512
#define OPCION_TXT "txt"
#define FMT_T "t"
#define OPCION_BIN "bin"
#define FMT_B "b"
#define NOMBRE_SALIDA "dump"
#define ARG_H "-h"
#define ARG_CANT_PALABRAS "-m"
#define ARG_FSALIDA "-f"

#define MAX_FORMATO 2
#define TT "t:"
#define BB "b:"

#define FIN -99999999
#define MIN_PALABRA -9999999
#define MAX_PALABRA 9999999

#define SALTO "\n"
#define TABULACION "\t"
#define PREGUNTA "?"
#define DELIM_COMA ';'
#define DELIM_2PUNTOS ':'

#define ARG_STDIN "-"

#define TXT_AYUDA1 \
		SALTO \
		MSJ_TITULO_ARG \
		MSJ_TITULO_OPC \
		MSJ_TITULO_DESC \
		MSJ_AYUDA_ARG \
		MSJ_AYUDA_OPC \
		MSJ_AYUDA_DESC \
		MSJ_MEMORIA_ARG \
		MSJ_MEMORIA_OPC \
		MSJ_MEMORIA_DESC \

#define TXT_AYUDA2 \
		MSJ_ENTRADA_ARG \
		MSJ_ENTRADA_OPC \
		MSJ_ENTRADA_DESC \

#define TXT_AYUDA3 \
		MSJ_SALIDA_ARG \
		MSJ_SALIDA_OPC \
		MSJ_SALIDA_DESC \
		
#define TXT_AYUDA4 \
		TAB_TITULO_OP \
		TAB_TITULO_CODE \
		TAB_TITULO_DESC \
		TAB_ENT_SAL \
		TAB_LEER_OP \
		TAB_LEER_CODE \
		TAB_LEER_DESC \
		TAB_ESCRIBIR_OP \
		TAB_ESCRIBIR_CODE \
		TAB_ESCRIBIR_DESC \
		TAB_MOV \

#define TXT_AYUDA5 \
		TAB_CARGAR_OP \
		TAB_CARGAR_CODE \
		TAB_CARGAR_DESC \
		TAB_GUARDAR_OP \
		TAB_GUARDAR_CODE \
		TAB_GUARDAR_DESC \
		TAB_PCARGAR_OP \
		TAB_PCARGAR_CODE \
		TAB_PCARGAR_DESC \
		TAB_PGUARDAR_OP \
		TAB_PGUARDAR_CODE \
		TAB_PGUARDAR_DESC \
		TAB_MATE \
		TAB_SUMAR_OP \
		TAB_SUMAR_CODE \
		TAB_SUMAR_DESC \
		TAB_RESTAR_OP \
		TAB_RESTAR_CODE \
		TAB_RESTAR_DESC \
		TAB_DIVIDIR_OP \
		TAB_DIVIDIR_CODE \
		TAB_DIVIDIR_DESC \
	
#define TXT_AYUDA6 \
		TAB_MULT_OP \
		TAB_MULT_CODE \
		TAB_MULT_DESC \
		TAB_CONTROL \
		TAB_JUMP_OP \
		TAB_JUMP_CODE \
		TAB_JUMP_DESC \
		TAB_JMPNEG_OP \
		TAB_JMPNEG_CODE \
		TAB_JMPNEG_DESC \
		TAB_JMPZERO_OP \
		TAB_JMPZERO_CODE \
		TAB_JMPZERO_DESC \
		TAB_JNZ_OP \
		TAB_JNZ_CODE \
		TAB_JNZ_DESC \
		TAB_DJNZ_OP \
		TAB_DJNZ_CODE \
		TAB_DJNZ_DESC \
		TAB_FIN_OP \
		TAB_FIN_CODE \
		TAB_FIN_DESC \

#endif

