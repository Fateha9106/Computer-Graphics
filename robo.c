#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

//head
glColor3ub(228,19,19);
glBegin(GL_POLYGON);
glVertex2d (300,900);
glVertex2d (500,900);
glVertex2d (500,1000);
glVertex2d (300,1000);

glEnd();

//neck
glColor3ub(255,128,0);
glBegin(GL_POLYGON);
glVertex2d (360,850);
glVertex2d (440,850);
glVertex2d (440,900);
glVertex2d (360,900);
glEnd();

//chest
glColor3ub(255,153,153);
glBegin(GL_POLYGON);
glVertex2d (200,450);
glVertex2d (600,450);
glVertex2d (600,850);
glVertex2d (200,850);

glEnd();

//righthand
glColor3ub(228,19,19);
glBegin(GL_POLYGON);
glVertex2d (50,600);
glVertex2d (150,600);
glVertex2d (200,850);
glVertex2d (100,850);
glEnd();

//lefthand
glColor3ub(228,19,19);
glBegin(GL_POLYGON);
glVertex2d (650,600);
glVertex2d (750,600);
glVertex2d (700,850);
glVertex2d (600,850);


glEnd();

//leftleg
glColor3ub(228,19,19);
glBegin(GL_POLYGON);
glVertex2d (450,200);
glVertex2d (550,200);
glVertex2d (550,450);
glVertex2d (450,450);



glEnd();

//rightleg
glColor3ub(228,19,19);
glBegin(GL_POLYGON);
glVertex2d (250,200);
glVertex2d (350,200);
glVertex2d (350,450);
glVertex2d (250,450);



glEnd();







/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,1200,0,1200);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
