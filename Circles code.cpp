
#include "stdafx.h"
#include <Windows.h>
#include <GL\glut.h>
#include <math.h>


// function that draw triangle with single color to all
void drawColoredTriangle(){
	glClear(GL_COLOR_BUFFER_BIT ); // Clear The Screen And The Depth Buffer
	glBegin( GL_TRIANGLES );
	glColor3f( 1.f, 0.f, 0.f ); // Sets current primary color to red
	glVertex3f( -1.0f, -1.0f,0.0); // Specify three vertices
	glVertex3f( 0.0f, 0.0f,0.0);
	glVertex3f( 1.0f, -1.0f,0.0);
	glEnd();
	glFlush();
}
//
//function that draw triangle with different color for every vertex
void drawDifferentColoredTriangle(){
	glClear(GL_COLOR_BUFFER_BIT); // Clear The Screen And The Depth Buffer
	glBegin( GL_TRIANGLE_FAN );
	glColor3f( 1.f, 0.f, 0.f );
	glVertex3f( 0.f, 0.f, 0.f );
	glColor3f( 0.f, 1.f, 0.f );
	glVertex3f( 1.f, 0.f, 0.f );
	glColor3f( 0.f, 0.f, 1.f );
	glVertex3f( 0.f, 1.f, 0.f );
	glColor3f(1.0f,1.0f,0.0f);
	glVertex3f( -1.f, 1.f, 0.f );
	glColor3f(1.0f,1.0f,1.0f);
	glVertex3f( -1.f, 0.f, 0.f );
	glEnd();
	glFlush();
}
void drawPolygon(){
	glClear(GL_COLOR_BUFFER_BIT );
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.7,0.8,0.0);
	glVertex3f(0.7,-0.5,0.0);
	glVertex3f(0.2,-0.7,0.0);
	glVertex3f(0.2,0.5,0.0);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(0.7,0.8,0.0);
	glVertex3f(0.2,0.3,0.0);
	glVertex3f(-0.7,0.3,0.0);
	glVertex3f(-0.3,0.8,0.0);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
	glVertex3f(0.2,0.3,0.0);
	glVertex3f(-0.7,0.3,0.0);
	glVertex3f(-0.7,-0.7,0.0);
	glVertex3f(0.2,-0.7,0.0);
	glEnd();
	glFlush();
}
void drawshap(){
	glClear(GL_COLOR_BUFFER_BIT );
	glLineWidth(50.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(1.0,1.0,0.0);
	glVertex3f(-1.0,-1.0,0.0);
	glVertex3f(-1.0,0.0,0.0);
	glVertex3f(1.0,0.0,0.0);

	glEnd();
	glFlush();

}

void drawCircle(){
	glClear(GL_COLOR_BUFFER_BIT );
	//glLineWidth(50.0);
	glBegin(GL_LINE_LOOP);
	for (float i = 0; i < 360; i++){
		glColor3f(0.0,1.0,1.0);
		glVertex3f((1.0*sin(i)),
			(1.0*cos(i)),0.0);
		glVertex3f((1.0*sin(i)),
			(1.0*cos(i)),0.0);		
	}
	glEnd();
	glFlush();

}
void drawCircle2(){
	glClear(GL_COLOR_BUFFER_BIT );
	glPointSize(5.0);
	glBegin(GL_POINTS);
	//for (float i = 0; i < 360; i=i+0.001)دائرة داخل دائرة
	for (float i = 0; i < 360; i=i+2){
		glColor3f(0.0,1.0,1.0);
		glVertex3f((.5*sin(i)),(.5*cos(i)),0.0);
		// glVertex3f((1.0*sin(i)),(1.0*cos(i)),0.0);		
	}
	glEnd();
	glFlush();
}
void drawCircle3(){
	glClear(GL_COLOR_BUFFER_BIT );
	glPointSize(5.0);
	glBegin(GL_LINE_LOOP);
	
	for (float i = 0; i < 360; i=i+0.01){
		glColor3f(0.0,1.0,1.0);
		glVertex3f((.5*sin(i)),(.5*cos(i)),0.0);
	    glVertex3f((1.0*sin(i)),(1.0*cos(i)),0.0);		
	}
	glEnd();
	glFlush();
}
void drawCircle4(){
	glClear(GL_COLOR_BUFFER_BIT );
	//glLineWidth(50.0);
	glBegin(GL_LINE_LOOP);
	for (float i = 0; i < 360; i+=2){
		glColor3f(0.0,1.0,1.0);
		glVertex3f((1.0*sin(i)),
			(1.0*cos(i)),0.0);
		glVertex3f((1.0*sin(i)),
			(1.0*cos(i)),0.0);		
	}
	glEnd();
	glFlush();

}
void drawCircle5(){
	glClear(GL_COLOR_BUFFER_BIT );
	glPointSize(1.0);
	glBegin(GL_LINE_LOOP);
	
	for (float i = 0; i < 360; i=i+.001){
			
		glColor3f(1.,0.0,0.0);
		glVertex3f((.5*sin(i)),(.5*cos(i)),0.0);
		glColor3f(1.0,1.0,0.0);
	    glVertex3f((0.0*sin(i)),(0.0*cos(i)),0.0);
			
	}
	glEnd();
	glFlush();
}
void drawCircle6(){
	glClear(GL_COLOR_BUFFER_BIT );
	//glLineWidth(50.0);
	glBegin(GL_LINE_LOOP);
	for (float i = 0; i < 360; i+=2){
		glColor3f(0.0,1.0,1.0);
		glVertex3f((0.5*sin(i)),
			(1.0*cos(i)),0.0);
			glColor3f(.5,0.0,0.0);
		glVertex3f((1.0*sin(i)),
			(1.0*cos(i)),0.0);		
	}
	glEnd();
	glFlush();

}
void drawCircle7(){
	glClear(GL_COLOR_BUFFER_BIT );
	glPointSize(1.0);
	glBegin(GL_LINE_LOOP);
	
	for (float i = 0; i < 360; i=i+.001){
			
		glColor3f(1.,0.0,0.0);
		glVertex3f(abs(.5*sin(i)),(.5*cos(i)),0.0);
		glColor3f(1.0,1.0,0.0);
	    glVertex3f((0.0*sin(i)),(0.0*cos(i)),0.0);
			
	}
	glEnd();
	glFlush();
}
void drawCircle8(){
	glClear(GL_COLOR_BUFFER_BIT );
	glPointSize(1.0);
	glBegin(GL_LINE_LOOP);
	
	for (float i = 0; i < 360; i++){
			
		glColor3f(1.,1.0,1.0);
		glVertex3f(abs(1.*sin(i)),(1.*cos(i)),0.0);
		glColor3f(0.0,0.0,0.0);
	    glVertex3f((1.0*sin(i)),(1.0*cos(i)),0.0);
			
	}
	glEnd();
	glFlush();
}
//
//*
//*  this function simplify the code and have the initialization of the window
//*  
//*/
void Init(){
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();// Reset The View
	//glOrtho(-100.0,100.0,-100.0,100.0,0.0,0.0);
}
//the main window
int main(int argc,char** argv){

	glutInit(&argc,argv);
	// Set display window color to as glClearColor(R,G,B,Alpha)
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	// set the size of the window
	glutInitWindowSize(450,450);
	// initial start position of graphics window
	glutInitWindowPosition(100,100);		
	// create the window with title
	glutCreateWindow("Second Graphics Lab");
	//initialize the graphics
	Init();
	
	// specify the display function
	glutDisplayFunc(drawCircle4);
	// continue the display of shap
	glutMainLoop();

	return 0;
	//////
}
