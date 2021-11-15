#include <GL/glut.h>
#include <GL/glut.h>

/* define o tamanho dos quadrados */
static GLfloat vertice[10] = 
{
        1, 2,
        1, 2,
        1, 2,
        1, 2,
        1, 2
};

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS); /* Desenha quadrados */
    glColor3f(1.0, 1.0, 0.5); /* Define a cor do quadrado */
    glVertex3f(3, vertice[0], 0); 
    glVertex3f(2, vertice[0], 0);
    glVertex3f(2, vertice[1], 0);
    glVertex3f(3, vertice[1], 0);
    glEnd();

    glBegin(GL_QUADS); /* Desenha quadrados */
    glColor3f(1.0, 0.0, 0.0); /* Define a cor do quadrado */
    glVertex3f(1, vertice[2], 0);
    glVertex3f(0, vertice[2], 0);
    glVertex3f(0, vertice[3], 0);
    glVertex3f(1, vertice[3], 0);
    glEnd();

    glBegin(GL_QUADS); /* Desenha quadrados */
    glColor3f(0.0, 1.0, 0.0); /* Define a cor do quadrado */
    glVertex3f(-1, vertice[4], 0);
    glVertex3f(-2, vertice[4], 0);
    glVertex3f(-2, vertice[5], 0);
    glVertex3f(-1, vertice[5], 0);
    glEnd();
 
    glBegin(GL_QUADS); /* Desenha quadrados */
    glColor3f(0.0, 0.0, 1.0); /* Define a cor do quadrado */
    glVertex3f(-3, vertice[6], 0);
    glVertex3f(-4, vertice[6], 0);
    glVertex3f(-4, vertice[7], 0);
    glVertex3f(-3, vertice[7], 0);
    glEnd();

    glBegin(GL_QUADS); /* Desenha quadrados */
    glColor3f(1.0, 1.0, 1.0); /* Define a cor do quadrado */
    glVertex3f(-5, vertice[8], 0);
    glVertex3f(-6, vertice[8], 0);
    glVertex3f(-6, vertice[9], 0);
    glVertex3f(-5, vertice[9], 0);
    glEnd();

    glFlush();
}

/* Função callback chamada para gerenciar eventos de teclado */
void GerenciaTeclado(unsigned char key, int x, int y)
{
    /* Nesta parte do código os quadrados são movidos para cima e para baixo individualmente */
    if(key == 'q')
    {
        vertice[0] += 1;
        vertice[1] += 1;
        
        vertice[2] += 0;
        vertice[3] += 0;
        
        vertice[4] += 0;
        vertice[5] += 0;
        
        vertice[6] += 0;
        vertice[7] += 0;

        vertice[8] += 0;
        vertice[9] += 0;
    }
    else if(key == 'w')
    {
        vertice[0] -= 1;
        vertice[1] -= 1;
        
        vertice[2] += 1;
        vertice[3] += 1;
        
        vertice[4] -= 0;
        vertice[5] -= 0;
        
        vertice[6] -= 0;
        vertice[7] -= 0;

        vertice[8] -= 0;
        vertice[9] -= 0;
    }
    else if(key == 'e')
    {
        vertice[0] += 0;
        vertice[1] += 0;

        vertice[2] -= 1;
        vertice[3] -= 1;

        vertice[4] += 1;
        vertice[5] += 1;

        vertice[6] += 0;
        vertice[7] += 0;

        vertice[8] += 0;
        vertice[9] += 0;
    }
    else if(key == 'r')
    {
        vertice[0] -= 0;
        vertice[1] -= 0;
        
        vertice[2] -= 0;
        vertice[3] -= 0;
        
        vertice[4] -= 1;
        vertice[5] -= 1;
        
        vertice[6] += 1;
        vertice[7] += 1;

        vertice[8] -= 0;
        vertice[9] -= 0;
    }
    else if(key == 't')
    {
        vertice[0] -= 0;
        vertice[1] -= 0;
        
        vertice[2] -= 0;
        vertice[3] -= 0;
        
        vertice[4] -= 0;
        vertice[5] -= 0;
        
        vertice[6] -= 1;
        vertice[7] -= 1;

        vertice[8] += 1;
        vertice[9] += 1;
    }
    else if(key == 'a')
    {
        vertice[0] -= 0;
        vertice[1] -= 0;
        
        vertice[2] -= 0;
        vertice[3] -= 0;
        
        vertice[4] -= 0;
        vertice[5] -= 0;
        
        vertice[6] += 1;
        vertice[7] += 1;

        vertice[8] -= 1;
        vertice[9] -= 1;
    }
    else if(key == 's')
    {
        vertice[0] -= 0;
        vertice[1] -= 0;
        
        vertice[2] -= 0;
        vertice[3] -= 0;
        
        vertice[4] += 1;
        vertice[5] += 1;
        
        vertice[6] -= 1;
        vertice[7] -= 1;

        vertice[8] -= 0;
        vertice[9] -= 0;
    }
    else if(key == 'd')
    {
        vertice[0] -= 0;
        vertice[1] -= 0;
        
        vertice[2] += 1;
        vertice[3] += 1;
        
        vertice[4] -= 1;
        vertice[5] -= 1;
        
        vertice[6] -= 0;
        vertice[7] -= 0;

        vertice[8] += 0;
        vertice[9] += 0;
    }
    else if(key == 'f')
    {
        vertice[0] += 1;
        vertice[1] += 1;
        
        vertice[2] -= 1;
        vertice[3] -= 1;
        
        vertice[4] -= 0;
        vertice[5] -= 0;
        
        vertice[6] -= 0;
        vertice[7] -= 0;

        vertice[8] += 0;
        vertice[9] += 0;
    }
    else if(key == 'g')
    {
        vertice[0] -= 1;
        vertice[1] -= 1;
        
        vertice[2] -= 0;
        vertice[3] -= 0;
        
        vertice[4] -= 0;
        vertice[5] -= 0;
        
        vertice[6] -= 0;
        vertice[7] -= 0;

        vertice[8] += 0;
        vertice[9] += 0;
    }
    
    /* Nesta parte do código os quadrados são movido em bloco */
    /*if(key == 'q')
    {
        vertice[0] += 2;
        vertice[1] += 2;
        
        vertice[2] += 3;
        vertice[3] += 3;
        
        vertice[4] += 4;
        vertice[5] += 4;
        
        vertice[6] += 5;
        vertice[7] += 5;

        vertice[8] += 6;
        vertice[9] += 6;
    }
    else if(key == 'w')
    {
        vertice[0] -= 2;
        vertice[1] -= 2;
        
        vertice[2] -= 3;
        vertice[3] -= 3;
        
        vertice[4] -= 4;
        vertice[5] -= 4;
        
        vertice[6] -= 5;
        vertice[7] -= 5;

        vertice[8] -= 6;
        vertice[9] -= 6;
    }
    else if(key == 'e')
    {
        vertice[0] += 6;
        vertice[1] += 6;

        vertice[2] += 5;
        vertice[3] += 5;

        vertice[4] += 4;
        vertice[5] += 4;

        vertice[6] += 3;
        vertice[7] += 3;

        vertice[8] += 2;
        vertice[9] += 2;
    }
    else if(key == 'r')
    {
        vertice[0] -= 6;
        vertice[1] -= 6;
        
        vertice[2] -= 5;
        vertice[3] -= 5;
        
        vertice[4] -= 4;
        vertice[5] -= 4;
        
        vertice[6] -= 3;
        vertice[7] -= 3;

        vertice[8] -= 2;
        vertice[9] -= 2;
    }*/
}

int main(int argc, char **argv)
{
    /* Inicialização */
    glutInit(&argc, argv);
    glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,450);
    glutCreateWindow("Ola");

    glClearColor(0.0, 0.0, 0.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, 1.0, -1.0);

    /* Rgistra o callback de renderização */
    glutDisplayFunc(display);
    glutKeyboardFunc(GerenciaTeclado);

    /* Inicia o loop de eventos da GLUT */
    glutMainLoop();

    return 0;
}