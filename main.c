/*
 * main.c
 *
 *  Created on: 5 May 2018
 *      Author: greg
 */
void println(char msg) {
	printf(msg);
	printf("\n");
	return;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {


	printf("Hello World testMac1\n");
	println("this is a test function");

	return EXIT_SUCCESS;

}
