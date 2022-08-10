#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>
#include "functions.h"

int main(void){
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400,400);
	glutCreateWindow("Dodge The Coral!");
	glutDisplayFunc(Desenha);
	glutReshapeFunc(AlteraTamanhoJanela);
	Inicializa();
	glutSpecialFunc(TeclasEspeciais);
	glutKeyboardFunc(Teclado);
	glutMouseFunc(GerenciaMouse);
	glutMainLoop();
}
