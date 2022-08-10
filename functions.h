#ifndef FUNCTIONS
#define FUNCTIONS
#include <GL/glut.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

/* ---------------------------------------------------------------------------------------- */
/* --------------------------- Declaração das variáveis globais --------------------------- */
/* ---------------------------------------------------------------------------------------- */

GLfloat tx, ty = 0;

/* Cores*/

float rP = 0.858800, gP = 0.576500, bP = 0.439200; /* Cor da Cabeça do Personagem */
float rC = 0.258800, gC = 0.435300, bC = 0.258800; /* Cor do Cenário */
float rA = 0.196100, gA = 0.800000, bA = 0.196100; /* Cor da Árvore */
float rS = 1.0, gS = 0.0, bS = 0.0; /* Cor da Cobra */

/* Limite */

GLfloat win = 70;

/* Coordenadas da cabeça do personagem */

float px1 = 2, py1 = -16;
float px2 = -2, py2 = -16;
float px3 = -2, py3 = -20;
float px4 = 2, py4 = -20;

/* Variáveis para determinar a colisão*/

int colidiu = 0;
int final = 0;

/* Variável para a quantidade de vidas */

int vida = 3;

/* Variável que irá receber a quantidade de vidas em string */

char texto[30];
  
/* ---------------------------------------------------------------------------------------- */
/* ----------------------- Fim das declarações das variáveis globais ---------------------- */
/* ---------------------------------------------------------------------------------------- */

void Inicializa(void){
	
	glClearColor(1.5f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
	void glPointSize(GLfloat size);
	
}

void checaColisao(int esq, int dir, int cima, int baixo){
	
	int setaEsq = esq;
	int setaDir = dir;
	int setaCima = cima;
	int setaBaixo = baixo;
	int  j, i;	
	
	//As coordenadas da primeria cobra são fixas
	//Somente as coordenadas do personagem mudam, conforme o movimento
	
	if(setaEsq){
		px1--;
		px2--;
		px3--;
		px4--;
	}
	
	if(setaDir){
		px1++;
		px2++;
		px3++;
		px4++;
	}
	
	if(setaCima){
		py1++;
		py2++;
		py3++;
		py4++;
	}
	
	if(setaBaixo){
		py1--;
		py2--;
		py3--;
		py4--;
	}
	
	//printf("(x1, y1) = %0.2f , %0.2f\n", px1, py1);
	//printf("(x2, y2) = %0.2f , %0.2f\n", px2, py2);
	//printf("(x3, y3) = %0.2f , %0.2f\n", px3, py3);
	//printf("(x4, y4) = %0.2f , %0.2f\n", px4, py4);
	//printf("\n");
	//printf("%d\n", final);
	
	
	    /*COBRA 1 */
		//cobra 1, coordenadas x1 e y1 do personagem	
		if( (px1 >= -13 && px1 <= 0) && (py1 >= -14 && py1 <= -12)){
			colidiu = 1;
		}
		
		//cobra 1, coordenadas x2 e y2 do personagem	
		if( (px2 >= -13 && px2 <= 0) && (py2 >= -14 && py2 <= -12)){
			colidiu = 1;
		}
		
		//cobra 1, coordenadas x3 e y3 do personagem	
		if( (px3 >= -13 && px3 <= 0) && (py3 >= -14 && py3 <= -12)){
			colidiu = 1;
		}
		
		//cobra 1, coordenadas x4 e y4 do personagem	
		if( (px4 >= -13 && px4 <= 0) && (py4 >= -14 && py4 <= -12)){
			colidiu = 1;
		}	
	
		/*COBRA 2 */
		//cobra 2, coordenadas x1 e y1 do personagem	
		if( (px1 >= 12 && px1 <= 25) && (py1 >= -11 && py1 <= -9)){
			colidiu = 1;
			//break;
		}
		
		//cobra 2, coordenadas x2 e y2 do personagem	
		if( (px2 >= 12 && px2 <= 25) && (py2 >= -11 && py2 <= -9)){
			colidiu = 1;
			//break;
		}
		
		//cobra 2, coordenadas x3 e y3 do personagem	
		if( (px3 >= 12 && px3 <= 25) && (py3 >= -11 && py3 <= -9)){
			colidiu = 1;
			//break;
		}
		
		//cobra 2, coordenadas x4 e y4 do personagem	
		if( (px4 >= 12 && px4 <= 25) && (py4 >= -11 && py4 <= -9)){
			colidiu = 1;
			//break;
		}
		
		/*COBRA 3 */
		//cobra 3, coordenadas x1 e y1 do personagem	
		if( (px1 >= -23 && px1 <= -10) && (py1 >= -1 && py1 <= 1)){
			colidiu = 1;
			//break;
		}
		
		//cobra 3, coordenadas x2 e y2 do personagem	
		if( (px2 >= -23 && px2 <= -10) && (py2 >= -1 && py2 <= 1)){
			colidiu = 1;
			//break;
		}
		
		//cobra 3, coordenadas x3 e y3 do personagem	
		if( (px3 >= -23 && px3 <= -10) && (py3 >= -1 && py3 <= 1)){
			colidiu = 1;
			//break;
		}
		
		//cobra 3, coordenadas x4 e y4 do personagem	
		if( (px4 >= -23 && px4 <= -10) && (py4 >= -1 && py4 <= 1)){
			colidiu = 1;
			//break;
		}
		
		/*COBRA 4 */
		//cobra 4, coordenadas x1 e y1 do personagem	
		if( (px1 >= 2 && px1 <= 15) && (py1 >= 4 && py1 <= 6)){
			colidiu = 1;
			//break;
		}
		
		//cobra 4, coordenadas x2 e y2 do personagem	
		if( (px2 >= 2 && px2 <= 15) && (py2 >= 4 && py2 <= 6)){
			colidiu = 1;
			//break;
		}
		
		//cobra 4, coordenadas x3 e y3 do personagem	
		if( (px3 >= 2 && px3 <= 15) && (py3 >= 4 && py3 <= 6)){
			colidiu = 1;
			//break;
		}
		
		//cobra 4, coordenadas x4 e y4 do personagem	
		if( (px4 >= 2 && px4 <= 15) && (py4 >= 4 && py4 <= 6)){
			colidiu = 1;
			//break;
		}
		
		/*COBRA 5 */
		//cobra 5, coordenadas x1 e y1 do personagem	
		if( (px1 >= 17 && px1 <= 30) && (py1 >= 9 && py1 <= 11)){
			colidiu = 1;
			//break;
		}
		
		//cobra 5, coordenadas x2 e y2 do personagem	
		if( (px2 >= 17 && px2 <= 30) && (py2 >= 9 && py2 <= 11)){
			colidiu = 1;
			//break;
		}
		
		//cobra 5, coordenadas x3 e y3 do personagem	
		if( (px3 >= 17 && px3 <= 30) && (py3 >= 9 && py3 <= 11)){
			colidiu = 1;
			//break;
		}
		
		//cobra 5, coordenadas x4 e y4 do personagem	
		if( (px4 >= 17 && px4 <= 30) && (py4 >= 9 && py4 <= 11)){
			colidiu = 1;
			//break;
		}
		
		/*COBRA 6*/
		//cobra 6, coordenadas x1 e y1 do personagem	
		if( (px1 >= -33 && px1 <= -20) && (py1 >= 19 && py1 <= 21)){
			colidiu = 1;
			//break;
		}
		
		//cobra 6, coordenadas x2 e y2 do personagem	
		if( (px2 >= -33 && px2 <= -20) && (py2 >= 19 && py2 <= 21)){
			colidiu = 1;
			//break;
		}
		
		//cobra 6, coordenadas x3 e y3 do personagem	
		if( (px3 >= -33 && px3 <= -20) && (py3 >= 19 && py3 <= 21)){
			colidiu = 1;
			//break;
		}
		
		//cobra 6, coordenadas x4 e y4 do personagem	
		if( (px4 >= -33 && px4 <= -20) && (py4 >= 19 && py4 <= 21)){
			colidiu = 1;
			//break;
		}
		
		/*COBRA 7*/
		//cobra 6, coordenadas x1 e y1 do personagem	
		if( (px1 >= -8 && px1 <= 5) && (py1 >= 19 && py1 <= 21)){
			colidiu = 1;
			//break;
		}
		
		//cobra 6, coordenadas x2 e y2 do personagem	
		if( (px2 >= -8 && px2 <= 5) && (py2 >= 19 && py2 <= 21)){
			colidiu = 1;
			//break;
		}
		
		//cobra 6, coordenadas x3 e y3 do personagem	
		if( (px3 >= -8 && px3 <= 5) && (py3 >= 19 && py3 <= 21)){
			colidiu = 1;
			//break;
		}
		
		//cobra 6, coordenadas x4 e y4 do personagem	
		if( (px4 >= -8 && px4 <= 5) && (py4 >= 19 && py4 <= 21)){
			colidiu = 1;
			//break;
		}
		
		//Checar colisão com a "chegada"
		if((px1 >= -11 && px1 <= 15) && (py1 >= 34 && py1 <= 44)){
			final = 1;
		}
}

void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
	GLsizei largura, altura;

	if(h == 0) h = 1;

	largura = w;
	altura = h;

	glViewport(0, 0, largura, altura);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	if (largura <= altura) 
		gluOrtho2D (-40.0f, 40.0f, -40.0f*altura/largura, 40.0f*altura/largura);
	else 
		gluOrtho2D (-40.0f*largura/altura, 40.0f*largura/altura, -40.0f, 40.0f);
}

void Teclado (unsigned char key, int x, int y){
	if (key == 113)
		exit(0);
}

void TeclasEspeciais(int key, int x, int y)
{
	
	if(key == GLUT_KEY_LEFT)
	{
		tx-=1;
		if ( tx < -win )
			tx = -win; 
			checaColisao(1,0,0,0); //(direta, esquerda, cima, baixo)
	}
	if(key == GLUT_KEY_RIGHT)
	{
		tx+=1;
		if ( tx > win )
			tx = win; 
			checaColisao(0,1,0,0);
	}     
	if(key == GLUT_KEY_UP)
	{
		ty+=1;
		if ( ty > win )
			ty = win; 
			checaColisao(0,0,1,0);
	}
	if(key == GLUT_KEY_DOWN)
	{
		ty-=1;
		if ( ty < -win )
			ty = -win; 
			checaColisao(0,0,0,1);
	}
	
	//exibeCoordenada(tx, ty);

	glutPostRedisplay();
}

void GerenciaMouse(int button, int state, int mousex, int mousey){
	
	if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN){
		
		float x = mousex;
		float y = 480-mousey;
		
		rC = 0.196100;
		gC = 0.800000;
		bC = 0.196100;
		
		rA = 0.137300;
		gA = 0.556900;
		bA = 0.137300;
		
		rP = 0.000000;
		gP = 0.000000;
		bP = 1.000000;
		
		rS = 1.000000;
		gS = 0.498000;
		bS = 0.000000;
		
		glutPostRedisplay();
	}else 
		if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN){
		
			float x = mousex;
			float y = 480-mousey;
		
			rC = 0.258800; 
			gC = 0.435300;
			bC = 0.258800;
			
			rA = 0.196100; 
			gA = 0.800000;
			bA = 0.196100;
			
			rP = 0.858800; 
			gP = 0.576500;
			bP = 0.439200;
			
			rS = 1.0;
			gS = 0.0;
			bS = 0.0;
		
			glutPostRedisplay();
	}
}

void quadroVidas(char *vidaString){
	
   char vida = 3;
	glColor3f(rS, gS, bS);
	glBegin(GL_QUADS);
		glVertex2f(-26.0f,37.0f);
		glVertex2f(-37.0f,37.0f); 
		glVertex2f(-37.0f,31.0f);       
		glVertex2f(-26.0f,31.0f);	
	glEnd();
	
		glPushMatrix();
		glColor3f(1,1,1);
		glRasterPos2f(-36.0, 33.0);        
		while(*vidaString)
             glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,*vidaString++); 
		glPopMatrix();
		
}

void mensagemPerdeu(){
	
	glColor3f(0,0,0);
	glRasterPos2f(-10.0, 0.0);        
	char* p = (char*) "Voce Perdeu!!";
	while (*p != '\0') {glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, *p++);}
	
}

void mensagemGanhou(){
	
	glColor3f(0,0,0);
	glRasterPos2f(-10.0, 0.0);        
	char* p = (char*) "Voce ganhou!";
	while (*p != '\0') {glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, *p++);}
	
}

void personagem(){
	//glPointSize(10.0f);
	
	//Cabeça
	glColor3f(rP, gP, bP);
	glBegin(GL_QUADS);
	
		glVertex2f(0.0f,0.0f);
		glVertex2f(0.0f, 4.0f); 
		glVertex2f(5.0f, 4.0f);       
		glVertex2f(5.0f, 0.0f);	
	glEnd();
	
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(2.0f);
	glBegin(GL_POINTS);
		glVertex2f(1.5f,2.0f);
		glVertex2f(3.5f,2.0f);
	glEnd();
	
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
		glVertex2f(1.5f,1.0f);
		glVertex2f(3.5f,1.0f);
	glEnd();
	
}

void cenario(){
	
	//grama
	glColor3f(rC, gC, bC);
	glBegin(GL_QUADS);
		glVertex2f(100.0f,100.0f);
		glVertex2f(-100.0f,100.0f); 
		glVertex2f(-100.0f,-100.0f);       
		glVertex2f(100.0f, -100.0f);	
	glEnd();
	
	//caminho
	glColor3f(0.858800f, 0.858800f, 0.439200f);
	glBegin(GL_QUADS);
		glVertex2f(-15.0f,41.0f);
		glVertex2f(-18.0f,-41.0f); 
		glVertex2f(18.0f,-41.0f);       
		glVertex2f(15.0f, 41.0f);	
	glEnd();

}

void arvore(){
	
	//árvore pt 1
	glColor3f(rA, gA, bA);
	glBegin(GL_QUADS);
		glVertex2f(32.0f,27.0f);
		glVertex2f(32.0f,9.0f);
		glVertex2f(46.0f,9.0f);
		glVertex2f(46.0f,27.0f);
	glEnd();
	
	//árvore pt 2
	glColor3f(rA, gA, bA);
	glBegin(GL_QUADS);
		glVertex2f(52.0f,23.0f);
		glVertex2f(27.0f,23.0f);
		glVertex2f(27.0f,13.0f);
		glVertex2f(52.0f,13.0f);
	glEnd();
	
	//árvore pt 3
	glColor3f(0.556900f, 0.419600f, 0.137300f);
	glBegin(GL_QUADS);
		glVertex2f(41.0f,9.0f);
		glVertex2f(37.0f,9.0f);
		glVertex2f(37.0f,-9.0f);
		glVertex2f(41.0f,-9.0f);
	glEnd();
}

void cobra(){
	//corpo
	glColor3f(rS, gS, bS);
	glBegin(GL_QUADS);
		glVertex2f(25.0f,-9.0f);
		glVertex2f(12.0f,-9.0f);
		glVertex2f(12.0f,-11.0f);
		glVertex2f(25.0f,-11.0f);
	glEnd();
	
	//listra preta 1
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
		glVertex2f(12.0f,-9.0f);
		glVertex2f(12.0f,-11.0f);
		glVertex2f(13.0f,-11.0f);
		glVertex2f(13.0f,-9.0f);
	glEnd();
	
	//listra branca 1
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
		glVertex2f(13.0f,-9.0f);
		glVertex2f(13.0f,-11.0f);
		glVertex2f(13.5f,-11.0f);
		glVertex2f(13.5f,-9.0f);
	glEnd();
	
	//listra branca 2
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
		glVertex2f(15.0f,-9.0f);
		glVertex2f(15.0f,-11.0f);
		glVertex2f(15.5f,-11.0f);
		glVertex2f(15.5f,-9.0f);
	glEnd();
	
	//listra preta 2
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
		glVertex2f(15.5f,-9.0f);
		glVertex2f(15.5f,-11.0f);
		glVertex2f(16.5f,-11.0f);
		glVertex2f(16.5f,-9.0f);
	glEnd();
	
	//listra branca 3
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
		glVertex2f(16.5f,-9.0f);
		glVertex2f(16.5f,-11.0f);
		glVertex2f(17.0f,-11.0f);
		glVertex2f(17.0f,-9.0f);
	glEnd();
	
	//listra branca 4
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
		glVertex2f(18.5f,-9.0f);
		glVertex2f(18.5f,-11.0f);
		glVertex2f(19.0f,-11.0f);
		glVertex2f(19.0f,-9.0f);
	glEnd();
	
	//lista preta
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
		glVertex2f(19.0f,-9.0f);
		glVertex2f(19.0f,-11.0f);
		glVertex2f(20.0f,-11.0f);
		glVertex2f(20.0f,-9.0f);
	glEnd();
	
	//listra branca 5
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
		glVertex2f(20.0f,-9.0f);
		glVertex2f(20.0f,-11.0f);
		glVertex2f(20.5f,-11.0f);
		glVertex2f(20.5f,-9.0f);
	glEnd();
	
	//listra branca 6
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
		glVertex2f(22.0f,-9.0f);
		glVertex2f(22.0f,-11.0f);
		glVertex2f(22.5f,-11.0f);
		glVertex2f(22.5f,-9.0f);
	glEnd();
	
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
		glVertex2f(22.5f,-9.0f);
		glVertex2f(22.5f,-11.0f);
		glVertex2f(23.5f,-11.0f);
		glVertex2f(23.5f,-9.0f);
	glEnd();
	
	//listra branca 7
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
		glVertex2f(23.5f,-9.0f);
		glVertex2f(23.5f,-11.0f);
		glVertex2f(24.0f,-11.0f);
		glVertex2f(24.0f,-9.0f);
	glEnd();
	
}

void Desenha(void){

	int aux;

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT);
	
	cenario();
	arvore();
	cobra();
	
	glPushMatrix();
	glTranslatef(-25.0f,-3.0f,0.0f);
	cobra();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-35.0f,10.0f,0.0f);
	cobra();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-10.0f,15.0f,0.0f);
	cobra();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-20.0f,30.0f,0.0f);
	cobra();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(5.0f,20.0f,0.0f);
	cobra();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-45.0f,30.0f,0.0f);
	cobra();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-77.5f,-18.0f,0.0f);
	arvore();
	glPopMatrix();
	
	if(vida>0){
		sprintf(texto, "%d vida(s)", vida);
		quadroVidas(texto);
	
		if(colidiu == 1){
			vida = vida - 1;
			aux = 1;
			//atualiza a variável para seu estado inicial
			colidiu = 0;		
		}
		
	}
	
	glPushMatrix();
	glTranslatef(-2.5f,-20.0f,0.0f);	
	glTranslatef(tx,ty,0.0f);
 	personagem();
	glPopMatrix();
	
	if(aux==1){
		tx = 0;
		ty = 0;
		
		px1 = 2;
		py1 = -16;
		
		px2 = -2;
		py2 = -16;
		
		px3 = -2; 
		py3 = -20;
		
		px4 = 2; 
		py4 = -20;	
	}
	
	aux=0;

	if(vida == 0){
		glClear(GL_COLOR_BUFFER_BIT);
		mensagemPerdeu();
		glutSwapBuffers();
	}
	
	if(final == 1){
		glClear(GL_COLOR_BUFFER_BIT);
		mensagemGanhou();
		glutSwapBuffers();
	}
	
	glPushMatrix();
	glTranslatef(tx,ty,0.0f);	
	glPopMatrix();
	
	glFlush();
}

#endif
