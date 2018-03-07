#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(2);
    
    glBegin(GL_POINTS);
    GLfloat x, y, i;
    
     glColor3f(0.0f,1.0f,1.0f);
     for (i=-3.0; i<=4.0; i+=0.1)
		{
		 x=i;
		 y=sin((M_PI)*x);
		 glVertex3f(x,y,0.0f);
	 }
		glColor3f(1.0f,1.0f,0.0f); 
		for (i=-3.0; i<=4.0; i+=0.1)
	 {
		 x=i;
		 y=cos((M_PI)*x);
		 glVertex3f(x,y,0.0f);
	 }
    /*
    
     glColor3f(0.0f,1.0f,1.0f);
    GLfloat angulo;
    int i;
    
    glBegin(GL_POINTS);
    for (i=0; i<360; i+=1)
    {
		angulo =i*M_PI/180.0f; //grado a radianes
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(cos(angulo), sin(angulo), 0.0f);
	}
    */
    /*
    glColor3f(0.0f,1.0f,1.0f);
    GLfloat angulo;
    int i;
    
    glBegin(GL_LINES);
    for (i=0; i<360; i+=1)
    {
		angulo =i*M_PI/180.0f; //grado a radianes
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(cos(angulo), sin(angulo), 0.0f);
	}
	* /
    
    /*
    
    dibujar linea por linea 
    
    glBegin(GL_LINES);
		glColor3f(0.0f,0.0f,1.0f);
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.5f,0.0f);
	glBegin(GL_LINES);
	    glColor3f(1.0f,1.0f,0.0f);
		glVertex3f(0.5f,0.5f,0.0f);
		glVertex3f(1.0f,0.0f,0.0f);
	glBegin(GL_LINES);
		glColor3f(0.0f,0.0f,1.0f);
		glVertex3f(1.0f,0.0f,0.0f);
	glVertex3f(0.0f,0.0f,0.0f);
		glBegin(GL_LINES);
		glColor3f(0.0f,0.0f,1.0f);
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,-0.5f,0.0f);
	glBegin(GL_LINES);
	    glColor3f(1.0f,1.0f,0.0f);
		glVertex3f(0.5f,-0.5f,0.0f);
		glVertex3f(1.0f,0.0f,0.0f);
		*/
		
		/*
		 
		 Dibujar lineas unidas
		
	glBegin(GL_LINE_LOOP);
	    glColor3f(1.0f,1.0f,0.0f);
		glVertex3f(-0.5f,0.0f,0.0f);
		glVertex3f(0.0f,-0.5f,0.0f);
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.0f,0.5f,0.0f);
		glVertex3f(0.0f,0.0f,0.0f);

		*/
		
		
    //glBegin(GL_POINTS);
    // puntos en pantallas
    //glColor3f(0.0f,0.0f,1.0f);
    //glVertex3f(1.0f,-1.0f,0.0f);
    //glColor3f(1.0f,1.0f,0.0f);
    //glVertex3f(-1.0f,1.0f,0.0f);
    //glVertex3f(1.0f,1.0f,0.0f);
    //glVertex3f(-1.0f,-1.0f,0.0f);
    
    
    /*
    glBegin(GL_TRIANGLES);
    //dibujar triangulo
     glColor3f(1.0f,0.0f,0.0f);
     //color rojo
	 glVertex3f(0.0f,0.8f,0.0f);
	 //vertice 1
	 glColor3f(0.0f,0.1f,0.0f);
	 //color verde
	 glVertex3f(-0.6f,-0.2f,0.0f);
	 //vertice 2
	 glColor3f(0.0f,0.0f,1.0f);
	 //color azul
	 glVertex3f(0.6f,-0.2f,0.0f);
	 //vertice 3
   */
   
   /*
   
   glColor3f(0.0f,0.0f,1.0f);//color azul
   glBegin(GL_POLYGON);//polygo
    glVertex3f(-0.5f,0.5f,0.0f);//vertex 1
    glVertex3f(0.5f,0.5f,0.0f);//vertex 2
    glVertex3f(1.0f,0.f,0.0f);//vertex 3
    glVertex3f(0.5f,-0.5f,0.0f);//vertex 4
    glVertex3f(-0.5f,-0.5f,0.0f);//vertex 5
    glVertex3f(-1.0f,0.0f,0.0f);//vertex 6
    */
    
    /*
     
   glBegin(GL_QUADS);//
   glColor3f(0.0f,0.0f,1.0f);//color azul
    glVertex3f(0.0f,0.5f,0.0f);//vertex 1
    glVertex3f(0.5f,0.0f,0.0f);//vertex 2
       glVertex3f(0.0f,-0.5f,0.0f);//vertex 4
    glVertex3f(-0.5f,0.0f,0.0f);//vertex 3
 */
 /*
    glBegin(GL_QUAD_STRIP);
    //FIRST QUADS
    glColor3f(0.0f,0.0f,1.0f);//color azul
    glVertex3f(0.0f,-0.5f,0.0f);//vertex 1
    glVertex3f(0.5f,-0.5f,0.0f);//vertex 2
    glVertex3f(-0.5f,0.0f,0.0f);//vertex 4
    glVertex3f(0.5f,0.0f,0.0f);//vertex 3
    
    
    glColor3f(1.0f,0.0f,0.0f);//color azul
    glVertex3f(-0.7f,0.5f,0.0f);//vertex 1
    glVertex3f(0.7f,0.5f,0.0f);//vertex 2
    
     glColor3f(0.0f,1.0f,0.0f);//color azul
    glVertex3f(-0.8f,0.8f,0.0f);//vertex 1
    glVertex3f(0.9f,0.8f,0.0f);//vertex 2
  */  
    glEnd();
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
