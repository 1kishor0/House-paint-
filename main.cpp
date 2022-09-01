#include <GL/glu.h>
#include <GL/glut.h>
#include<windows.h>
#include <time.h>
struct tm *newtime;
time_t ltime;

GLUquadricObj *Disk;
GLfloat T=0;
static float	tx	=  -0.2;
static float	ty	=  -0.4;
static float r=1,g=1,b=1;
static float r1=0.1f,g1=0.1f,b1=0.0f;//0.1f, 0.1f, 0.0f
static float r2=0.0f,g2=0.5f,b2=0.5f;//0.0f, 0.5f, 0.5f
static float a=1,d=1,c=1,a1=1,d1=1,c1=1,a2=1,d2=1,c2=1,a3=1,d3=1,c3=1,a4=1,d4=1,c4=1;
float _angle = 20.0f;
float _cameraAngle = 0.5f;
const double PI = 3.14159265358979323;
static float h1[]={2.0f, 0.5f, 1.0f};
void colorchange(){
    //building
        r=1,g=0,b=0;
        //door
        a=0.0f,d=0.5f,c=0.5f;
        //baranda
        a1=1.0f,d1=0.5f,c1=0.0f;
        a2=1.0f,d2=0.5f,c2=0.0f;
        a3=0.0f,d3=1.0f,c3=1.0f;
        a4=0.0f,d4=1.0f,c4=1.0f;
 }
void colorchange2(){

        r=0;
        g=0;
        b=1;
                //door
        a=0.0f,d=0.5f,c=1.0f;//0.0f, 0.5f, 1.0f
        //baranda
        a1=0.0f,d1=0.1f,c1=0.1f;//0.0f, 0.1f, 0.1f
        a2=0.0f,d2=0.1f,c2=0.1f;//0.0f, 0.1f, 0.1f
        a3=0.0f,d3=0.1f,c3=0.0f;//0.0f, 0.1f, 0.0f
        a4=0.0f,d4=0.1f,c4=0.0f;
 }
void colorchange3(){

        r=1;
        g=1;
        b= 0.3;
                //door
        a=1.0f,d=0.0f,c=1.0f;//1.0f, 0.0f, 1.0f
        //baranda
        a1=0.5f,d1=0.5f,c1=0.5f;//0.5f, 0.5f, 0.5f
        a2=0.5f,d2=0.5f,c2=0.5f;//0.5f, 0.5f, 0.5f
        a3=0.0f,d3=0.1f,c3=0.0f;//0.0f, 0.1f, 0.0f
        a4=0.0f,d4=0.1f,c4=0.0f;//0.0f, 0.1f, 0.0f
 }

void MyInit()
{

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1,1,-1,1,2,10);
    glMatrixMode(GL_MODELVIEW);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);


}
void secondbuilding()
{
    GLfloat M1[]={0,0,0};
    GLfloat M2[]={1,0,0};
    GLfloat wb2[]={r2,g2,b2};

    glPushMatrix();
    glRotatef(0,0,1,0);
    glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,h1);
glPushMatrix();
    glScalef(1.3,2.2,1.3);
	glutSolidCube(0.5);
glPopMatrix();
glPopAttrib();
//Door
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
glPushMatrix();
          glTranslatef(-0.0,-0.4,0.0);
       glScalef(0.20,0.30,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//window
//1st
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(0.2,0.4,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda1
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
glPushMatrix();
          glTranslatef(0.33,0.3,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda2
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
glPushMatrix();
          glTranslatef(0.33,0.3,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//2nd

//window
//2nd
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(-0.2,0.4,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda3
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
glPushMatrix();
          glTranslatef(-0.33,0.3,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda4
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
glPushMatrix();
          glTranslatef(-0.33,0.3,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//bid
glPushMatrix();
 glTranslatef(-0.003,0.099 ,0.002);
    glScalef(1.3,0.1,1.3);
	glutSolidCube(0.6);
glPopMatrix();

//2nd lap

//window
//1st
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(0.2,-0.09,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda1
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
glPushMatrix();
          glTranslatef(0.33,-0.17,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda2
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
glPushMatrix();
          glTranslatef(0.33,-0.17,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//2nd

//window
//2nd
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(-0.2,-0.09,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda3
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
glPushMatrix();
          glTranslatef(-0.33,-0.17,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda4
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
glPushMatrix();
          glTranslatef(-0.33,-0.17,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//bid
glPushMatrix();
 glTranslatef(-0.003,0.56 ,0.002);
    glScalef(1.3,0.1,1.3);
	glutSolidCube(0.6);
glPopMatrix();

//railing
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.2,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing2
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.24,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing3
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.16,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();

//railing4
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.234,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing5
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.20,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing6
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.17,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing7
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.234,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing8
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.20,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing9
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.17,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();

//railing10
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.2,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing11
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.24,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing12
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.16,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
glPopMatrix();
//painter

}

void firstBuilding()
{
    GLfloat h1[]={r, g ,b};
    GLfloat M1[]={0,0,0};
    GLfloat M100[]={a,d,c};
    GLfloat M2[]={1,0,0};
     GLfloat M20[]={1,0,0};
//baranda
GLfloat M101[]={a1,d1,c1};
GLfloat M102[]={a2,d2,c2};
GLfloat M103[]={a3,d3,c3};
GLfloat M104[]={a4,d4,c4};
    glPushMatrix();
    glRotatef(T,0,1,0);
 //whole house
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,h1);
glPushMatrix();
    glScalef(1.3,2.2,1.3);
	glutSolidCube(0.5);
glPopMatrix();
glPopAttrib();
/////////////////////////////////////////////////////////////
//Door
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M100);
glPushMatrix();
          glTranslatef(-0.0,-0.4,0.0);
       glScalef(0.20,0.30,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//window
//1st
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(0.2,0.4,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda1
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M101);
glPushMatrix();
          glTranslatef(0.33,0.3,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda2
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M101);
glPushMatrix();
          glTranslatef(0.33,0.3,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//2nd

//window
//2nd
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(-0.2,0.4,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda3
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M102);
glPushMatrix();
          glTranslatef(-0.33,0.3,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda4
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M102);
glPushMatrix();
          glTranslatef(-0.33,0.3,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//bid
glPushMatrix();
 glTranslatef(-0.003,0.099 ,0.002);
    glScalef(1.3,0.1,1.3);
	glutSolidCube(0.6);
glPopMatrix();

//2nd lap

//window
//1st
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(0.2,-0.09,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda1
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M103);
glPushMatrix();
          glTranslatef(0.33,-0.17,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda2
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M103);
glPushMatrix();
          glTranslatef(0.33,-0.17,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//2nd

//window
//2nd
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(-0.2,-0.09,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda3
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M104);
glPushMatrix();
          glTranslatef(-0.33,-0.17,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda4
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M104);
glPushMatrix();
          glTranslatef(-0.33,-0.17,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//bid
glPushMatrix();
 glTranslatef(-0.003,0.56 ,0.002);
    glScalef(1.3,0.1,1.3);
	glutSolidCube(0.6);
glPopMatrix();

//railing
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.2,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing2
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.24,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing3
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.16,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();

//railing4
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.234,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing5
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.20,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing6
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.17,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing7
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.234,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing8
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.20,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing9
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.17,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();

//railing10
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.2,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing11
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.24,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing12
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.16,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
glPopMatrix();
//painter

}
void clocktower(){
    GLfloat M1[]={0,0,0};
    GLfloat M2[]={1,0,0};
     GLfloat M20[]={1,0,0};


glPushMatrix();
    glScalef(0.8,2.2,1.3);
	glutSolidCube(0.5);
glPopMatrix();
}
void clockhead()
{


}
void road(){
GLfloat M3[]={0.1,0.1,0.1};
GLfloat M4[]={0,1,0};

//Base
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M4);
glPushMatrix();
 glTranslatef(-0.003,-2.5 ,0.66);
 gluLookAt(0.01,0.8,5,0,0,0,0,1,0);
    glScalef(5.3,0.027,1.5);
	glutSolidCube(1.5);
	glPopAttrib();
glPopMatrix();

  //Road
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M3);
glPushMatrix();
gluLookAt(0,0.8,5,0,0,0,0,1,0);

glTranslatef(-0.044,-4.599,-0.49);
    glScalef(7.10,-0.22,-3.0);
	glutSolidCube(1.32);
	glPopAttrib();
glPopMatrix();

//2nd block

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M4);
glPushMatrix();
 glTranslatef(0.007,-1.25 ,0.66);
 gluLookAt(0.01,0.8,5,0,0,0,0,1,0);
    glScalef(5.3,0.027,1.5);
	glutSolidCube(1.3);
	glPopAttrib();
glPopMatrix();

//3rd block

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M4);
glPushMatrix();
 glTranslatef(0.007,-0.26 ,0.66);
 gluLookAt(0.01,0.8,5,0,0,0,0,1,0);
    glScalef(5.3,0.027,1.5);
	glutSolidCube(1.3);
	glPopAttrib();
glPopMatrix();

}
void roadbid(){

//bid
GLfloat rb[]={1,1,1};
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,rb);
glPushMatrix();
 glTranslatef(-0.007,-0.76 ,0.66);
    glScalef(0.09,-0.00001,0.05);
	glutSolidCube(0.7);
	glPopAttrib();
glPopMatrix();

//bid 2
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,rb);
glPushMatrix();
 glTranslatef(1.01,-0.76 ,0.66);
    glScalef(0.09,-0.00001,0.05);
	glutSolidCube(0.7);
	glPopAttrib();
glPopMatrix();

//bid3
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,rb);
glPushMatrix();
 glTranslatef(0.5,-0.76 ,0.66);
    glScalef(0.09,-0.00001,0.05);
	glutSolidCube(0.7);
	glPopAttrib();
glPopMatrix();
//bid4
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,rb);
glPushMatrix();
 glTranslatef(-0.5,-0.76 ,0.66);
    glScalef(0.09,-0.00001,0.05);
	glutSolidCube(0.7);
	glPopAttrib();
glPopMatrix();
//bid5
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,rb);
glPushMatrix();
 glTranslatef(-1.1,-0.76 ,0.66);
    glScalef(0.09,-0.00001,0.05);
	glutSolidCube(0.7);
	glPopAttrib();
glPopMatrix();
}

void roadbidcall(){

 roadbid();


}
void Sky(){



GLfloat M10[]={0.0,1.0,1.0,1.0};
glPushMatrix();
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M10);
          glTranslatef(-0.0,1.2,-1.05);
       glScalef(30.50,5.30,1.0);
glutSolidCube(0.3);
glPopAttrib();
glPopMatrix();

}
void sun(){
    GLfloat suncolor[]={1.0f, 1.0f, 0.0f, 0.0f};
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,suncolor);
glPushMatrix();
glTranslatef(-0.9,1.1,0.5);
gluDisk(gluNewQuadric(),0,0.1,50,2);
glPopMatrix();
glPopAttrib();
}
void cloud(){
    //cloud1
GLfloat cloudcolor[]={0.5f, 1.0f, 1.0f};

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,cloudcolor);
glPushMatrix();
glTranslatef(-0.5,1.1,0.5);
gluDisk(gluNewQuadric(),0,0.04,50,2);
glPopMatrix();
glPopAttrib();
//cloud2

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,cloudcolor);
glPushMatrix();
glTranslatef(-0.44,1.14,0.5);
gluDisk(gluNewQuadric(),0,0.04,50,2);
glPopMatrix();
glPopAttrib();
//cloud3

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,cloudcolor);
glPushMatrix();
glTranslatef(-0.40,1.1,0.5);
gluDisk(gluNewQuadric(),0,0.04,50,2);
glPopMatrix();
glPopAttrib();

//cloud4

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,cloudcolor);
glPushMatrix();
glTranslatef(-0.44,1.09,0.5);
gluDisk(gluNewQuadric(),0,0.04,50,2);
glPopMatrix();
glPopAttrib();

}
void windmil(){
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,h1);
glPushMatrix();
glTranslatef(0.7,0.14 ,0.7);
    glScalef(-0.04,1.6,0.1);
	glutSolidCube(0.5);
glPopMatrix();
glPopAttrib();

GLfloat milcolor[]={1.0f, 1.0f, 0.0f, 0.0f};
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,milcolor);



glPushMatrix();
glTranslatef(0.65,0.5,0.9);
gluDisk(gluNewQuadric(),0,0.17,3,2);
glPopMatrix();
glPopAttrib();

}
void TireRotate(int value)
{
   	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}

	glutPostRedisplay(); ////Tell GLUT that the scene has changed
	glutTimerFunc(25, TireRotate, 0);
}


void Draw() {
    GLfloat pos[]={0,1,0,1};
    GLfloat col[]={1,1,1,1};


	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glLightfv(GL_LIGHT0,GL_POSITION,pos);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,col);

gluLookAt(0,0.8,3,0,0,0,0,1,0);

Sky();
firstBuilding();
//upper left building
glPushMatrix();
          glTranslatef(-0.98,0.34,0.0);
          glScalef(0.6,0.7,1.3);
                secondbuilding();
glPopMatrix();
//upper right building
glPushMatrix();
          glTranslatef(0.9,0.34,0.0);
          glScalef(0.6,0.7,1.3);
          secondbuilding();
glPopMatrix();

//clocktower
glPushMatrix();

          glTranslatef(-0.59,0.65,-0.9);
          glScalef(0.6,0.7,1.3);
                clocktower();

glPopMatrix();
//clockhead
 clockhead();
road();
roadbidcall();

sun();
glPushMatrix();
glTranslatef(-0.26,-0.1,0.3);
cloud();
glPopMatrix();
//cloud2
glPushMatrix();
glTranslatef(0.7,-0.2,0.0);
cloud();
glPopMatrix();
//cloud3
glPushMatrix();
glTranslatef(1.2,0.09,0.0);
cloud();
glPopMatrix();

//mil

windmil();

glutSwapBuffers();
}

void spin()
{
    T=T+10;
    if(T>360)
        T-=360;
    glutPostRedisplay();
}
void backspin()
{
    T=T-10;
    if(T<360)
        T+=360;
    glutPostRedisplay();
}

void spe_key(int key, int x, int y)
{


	switch (key) {

		case GLUT_KEY_LEFT:
				spin();
				break;

			//spinDisplay_left();
			//break;

		case GLUT_KEY_RIGHT:
				backspin();
				break;

			//spinDisplay_right();
			//break;

	  default:
			break;
	}
}

//night

void nightsky(){

GLfloat skyclr[]={0.0f, 0.0f, 0.0f};
glPushMatrix();
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,skyclr);
          glTranslatef(-0.0,1.2,-1.05);
       glScalef(30.50,5.30,1.0);
glutSolidCube(0.3);
glPopAttrib();
glPopMatrix();



}
void moon(){

 GLfloat mooncolor[]={1.0f, 1.0f, 1.0f, 1.0f};
 GLfloat mooncolor2[]={0.0f, 0.0f, 0.0f};
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,mooncolor);
glPushMatrix();
glTranslatef(-0.9,1.1,0.5);
gluDisk(gluNewQuadric(),0,0.08,50,1);
glPopMatrix();
glPopAttrib();


glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,mooncolor2);
glPushMatrix();
glTranslatef(-0.87,1.130,0.6);
gluDisk(gluNewQuadric(),0,0.08,50,1);
glPopMatrix();
glPopAttrib();

}
void nightcloud(){

GLfloat cloudcolor[]={0.1f, 0.1f, 0.1f};

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,cloudcolor);
glPushMatrix();
glTranslatef(-0.5,1.1,0.5);
gluDisk(gluNewQuadric(),0,0.04,50,2);
glPopMatrix();
glPopAttrib();
//cloud2

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,cloudcolor);
glPushMatrix();
glTranslatef(-0.44,1.14,0.5);
gluDisk(gluNewQuadric(),0,0.04,50,2);
glPopMatrix();
glPopAttrib();
//cloud3

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,cloudcolor);
glPushMatrix();
glTranslatef(-0.40,1.1,0.5);
gluDisk(gluNewQuadric(),0,0.04,50,2);
glPopMatrix();
glPopAttrib();

//cloud4

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,cloudcolor);
glPushMatrix();
glTranslatef(-0.44,1.09,0.5);
gluDisk(gluNewQuadric(),0,0.04,50,2);
glPopMatrix();
glPopAttrib();


}
void nightroad(){
GLfloat M3[]={0.1,0.1,0.1};
GLfloat ntbs[]={1.0f, 0.5f, 0.0f, 0.0f};

//Base
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,ntbs);
glPushMatrix();
 glTranslatef(-0.003,-2.5 ,0.66);
 gluLookAt(0,0.8,5,0,0,0,0,1,0);
    glScalef(5.3,0.027,1.5);

	glutSolidCube(1.5);
	glPopAttrib();
glPopMatrix();

  //Road
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M3);
glPushMatrix();
gluLookAt(0,0.8,5,0,0,0,0,1,0);

glTranslatef(-0.044,-4.599,-0.49);
    glScalef(7.10,-0.22,-3.0);
	glutSolidCube(1.32);
	glPopAttrib();
glPopMatrix();

//2nd base

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,ntbs);
glPushMatrix();
 glTranslatef(0.007,-1.25 ,0.66);
 gluLookAt(0.01,0.8,5,0,0,0,0,1,0);
    glScalef(5.3,0.027,1.5);
	glutSolidCube(1.3);
	glPopAttrib();
glPopMatrix();

//3rd base

glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,ntbs);
glPushMatrix();
 glTranslatef(0.007,-0.26 ,0.66);
 gluLookAt(0.01,0.8,5,0,0,0,0,1,0);
    glScalef(5.3,0.027,1.5);
	glutSolidCube(1.3);
	glPopAttrib();
glPopMatrix();
}
void nightfirstBuilding()
{
    GLfloat h1[]={r, g ,b};
    GLfloat M1[]={0,0,0};
    GLfloat M100[]={a,d,c};
    GLfloat M2[]={1,0,0};
     GLfloat M20[]={1,0,0};
//baranda
GLfloat M101[]={a1,d1,c1};
GLfloat M102[]={a2,d2,c2};
GLfloat M103[]={a3,d3,c3};
GLfloat M104[]={a4,d4,c4};
    glPushMatrix();
    glRotatef(T,0,1,0);
 //whole house
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,h1);
glPushMatrix();
    glScalef(1.3,2.2,1.3);
	glutSolidCube(0.5);
glPopMatrix();
glPopAttrib();
/////////////////////////////////////////////////////////////
//Door
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M100);
glPushMatrix();
          glTranslatef(-0.0,-0.4,0.0);
       glScalef(0.20,0.30,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//window
//1st
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(0.2,0.4,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda1
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M101);
glPushMatrix();
          glTranslatef(0.33,0.3,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda2
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M101);
glPushMatrix();
          glTranslatef(0.33,0.3,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//2nd

//window
//2nd
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(-0.2,0.4,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda3
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M102);
glPushMatrix();
          glTranslatef(-0.33,0.3,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda4
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M102);
glPushMatrix();
          glTranslatef(-0.33,0.3,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//bid
glPushMatrix();
 glTranslatef(-0.003,0.099 ,0.002);
    glScalef(1.3,0.1,1.3);
	glutSolidCube(0.6);
glPopMatrix();

//2nd lap

//window
//1st
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(0.2,-0.09,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda1
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M103);
glPushMatrix();
          glTranslatef(0.33,-0.17,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda2
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M103);
glPushMatrix();
          glTranslatef(0.33,-0.17,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//2nd

//window
//2nd
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M1);
glPushMatrix();
          glTranslatef(-0.2,-0.09,0.0);
       glScalef(0.10,0.14,0.7);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda3
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M104);
glPushMatrix();
          glTranslatef(-0.33,-0.17,0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//baranda4
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M104);
glPushMatrix();
          glTranslatef(-0.33,-0.17,-0.2);
       glScalef(0.12,0.18,0.3);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//bid
glPushMatrix();
 glTranslatef(-0.003,0.56 ,0.002);
    glScalef(1.3,0.1,1.3);
	glutSolidCube(0.6);
glPopMatrix();

//railing
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.2,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing2
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.24,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing3
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.16,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();

//railing4
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.234,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing5
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.20,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing6
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.17,-0.09,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing7
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.234,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing8
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.20,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing9
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(0.17,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();

//railing10
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.2,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing11
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.24,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
//railing12
glPushAttrib(GL_ALL_ATTRIB_BITS);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M2);
glPushMatrix();
          glTranslatef(-0.16,0.40,0.0);
       glScalef(0.01,0.15,0.71);
    glutSolidCube(1);
glPopMatrix();
glPopAttrib();
glPopMatrix();
//painter

}

void Night(){

 GLfloat pos[]={0,1,0,1};
    GLfloat col[]={1,1,1,1};


	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glLightfv(GL_LIGHT0,GL_POSITION,pos);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,col);

gluLookAt(0,0.8,3,0,0,0,0,1,0);

nightsky();
nightfirstBuilding();
//upper left building
glPushMatrix();
          glTranslatef(-0.98,0.34,0.0);
          glScalef(0.6,0.7,1.3);
                secondbuilding();
glPopMatrix();
//upper right building
glPushMatrix();
          glTranslatef(0.9,0.34,0.0);
          glScalef(0.6,0.7,1.3);
          secondbuilding();
glPopMatrix();

//clocktower
glPushMatrix();

          glTranslatef(-0.59,0.65,-0.9);
          glScalef(0.6,0.7,1.3);
                clocktower();

glPopMatrix();
//clockhead
 clockhead();
nightroad();
roadbidcall();

moon();
glPushMatrix();
glTranslatef(-0.26,-0.1,0.3);
nightcloud();
glPopMatrix();
//cloud2
glPushMatrix();
glTranslatef(0.7,-0.2,0.0);
nightcloud();
glPopMatrix();
//cloud3
glPushMatrix();
glTranslatef(1.2,0.09,0.0);
nightcloud();
glPopMatrix();



glutSwapBuffers();

}


void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'r':
        colorchange();
			break;
        case 'e':
            colorchange3();
            break;
		case 'q':
            colorchange2();
			break;

		case 's':
             glutDestroyWindow(1);

            glutInitWindowPosition(250,50);
	glutInitWindowSize(1200, 1200);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Night");

    MyInit();
    glutDisplayFunc(Night);
    glutSpecialFunc(spe_key);
glutKeyboardFunc(my_keyboard);
	glutMainLoop();
			 break;

	  default:
			break;
	}
}

int main(int C, char  *V[]) {
	//Initialize GLUT
	glutInit(&C, V);
	glutInitWindowPosition(250,50);
	glutInitWindowSize(1200, 1200);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Day");

    MyInit();
    glutDisplayFunc(Draw);

    glutSpecialFunc(spe_key);
glutKeyboardFunc(my_keyboard);
glutTimerFunc(20, TireRotate, 0);
	glutMainLoop();
	return 0;
}
