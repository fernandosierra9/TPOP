/*
 ============================================================================
 Name        : SAFA.c
 Author      : fer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <commons/temporal.h>
#include <commons/fer.h>
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	char * tiempo = temporal_get_string_time();
	puts(tiempo);
	free(tiempo);
	algo();
	return EXIT_SUCCESS;
}
