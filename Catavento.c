#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

//Aluno: Rick Martim Lino dos Santos

#define SIN_60 0.86
#define PI 3.14

float velocidade_ang = PI / 4;

typedef struct Vertex
{
    GLfloat x, y;
} Vertex;

Vertex petalas[] = {

    // muda a forma da petala

    {25.0f, SIN_60 * 50},
    {-25.0f,  SIN_60 * 50},
    {50.0f, 0.0f},
    {25.0, - SIN_60 * 50},
    {-50.0f, 0.0f},
    {-25.0, -SIN_60 * 50}};

void rotacao(float angle)
{
    Vertex previous;

    for (int i = 0; i < 6; i = i + 2)
    {
        for (int j = i; j < i + 2; j++)
        {   previous = petalas[j];

            petalas[j].x = previous.x * cos(angle) - previous.y * sin(angle);
            petalas[j].y = previous.y * cos(angle) + previous.x * sin(angle); 
        }   
    }
    glutPostRedisplay();
}

void velocidade(int value)
{
    float change = velocidade_ang + value * PI / 20; // calculo da mudança de velocidade

    if (change >= PI / 20 && change <= PI)
        velocidade_ang = change;    
}

void gerencia_teclado(unsigned char key, int x, int y)
{
    //comandos do teclado

    if (key == 'r') //direita
        rotacao(-velocidade_ang);

    if (key == 'l') //esquerda
        rotacao(velocidade_ang);

    if (key == 'f') //aumenta a velocidade
        velocidade(1);

    if (key == 's') //diminui a velocidade
        velocidade(-1);
}

void petala()
{
    glClear(GL_COLOR_BUFFER_BIT);
        for (int i = 0; i < 6; i = i + 2)
        {
            glBegin(GL_TRIANGLES);
            glColor3d(1.0f, 1.0f, 1.0f); // cor da pétala
            
            glVertex2f(0.0f, 0.0f);

            for (int j = i; j < i + 2; j++)
            {   
                GLfloat x = petalas[j].x;
                GLfloat y = petalas[j].y;

                glVertex2f(x,y);         
            }   
            glEnd();
        }
}

void display(void) // renderizar as formas 
{
    glClear(GL_COLOR_BUFFER_BIT); 
    petala();
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 400); // tamanho da janela
    glutCreateWindow("Catavento do CSA");

    glClearColor(0.0f, 0.0f, 1.0f, 0.0f); // cor de fundo
    gluOrtho2D(-150, 150, -150, 150);
    glutReshapeWindow(400, 400);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glutDisplayFunc(display);
    glutKeyboardFunc(gerencia_teclado);
    glutMainLoop();

    return 0;
}