#include<windows.h>
#include <iostream>
#include <GL/glut.h>
#include <math.h>

//////water
void rainyRiver();
int waterStatus = 0;
float waterX = 0;
float waterY = 0;
float boatx=0;
float boaty=0;

//////cloud
int meghmegh = 1;
int meghStatus = 0;
float meghX = 0;
float meghY = 0;
/////sun
int sunStatus = 0;
float sunX = 0;
float sunY = 0;

//////
float shipX = 0;
float shipY =0;
//////rain
int rainstatus=0;
int x=0;
int y=0;
float wx=0;
float wy=0;
////
int springstatus=0;
int lightstatus = 0;
int snowStatus = 0;
int  CloudmeghStatus =0;
int  winter =0;
int  waterboat =1;
GLfloat cloudSpeed=5.0f;
GLfloat Position3= 330;


void drawQuad(GLint x0, GLint y0, GLint x1, GLint y1, GLint x2, GLint y2, GLint x3, GLint y3)
{ glBegin(GL_QUADS);
  glVertex2f(x0,y0);glVertex2f(x1,y1);glVertex2f(x2,y2);glVertex2f(x3,y3);
  glEnd();
}

void drawTriangle(GLint x0, GLint y0, GLint x1, GLint y1, GLint x2, GLint y2)
{   glBegin(GL_TRIANGLES);
    glVertex2f(x0,y0);glVertex2f(x1,y1);glVertex2f(x2,y2);
    glEnd();
}
void DrawCircle(float cx, float cy, float r, int num_segments) {

	glBegin(GL_TRIANGLE_FAN);
	for (int i = 0; i < num_segments; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle

		float x = r * cosf(theta);//calculate x
		float y = r * sinf(theta);//calculate y

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
	glFlush();
}
void snow(){
  if(winter ==1){
    glPushMatrix();
    glTranslatef(0.0f,Position3, 0.0f);

    glColor3ub(255, 255, 255);
    DrawCircle(400, 480, 1, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(600, 480, 1, 2000);
   glColor3ub(255, 255, 255);
	DrawCircle(420, 480, 1, 2000);
	DrawCircle(440, 480, .5, 2000);
	DrawCircle(460, 500, 1, 2000);
glColor3ub(255, 255, 255);
	DrawCircle(480, 490, 1, 2000);
	DrawCircle(500, 480, .5, 2000);
	DrawCircle(520, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(570, 500, .5, 2000);
	DrawCircle(580, 480, 1, 2000);
	DrawCircle(590, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(100, 480, .8, 2000);
	DrawCircle(120, 490, .5, 2000);
	DrawCircle(140, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(160, 480, .5, 2000);
	DrawCircle(180, 480, .5, 2000);
	DrawCircle(200, 490, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(220, 490, 1, 2000);
	DrawCircle(240, 480, .5, 2000);
	DrawCircle(260, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(280, 500, .5, 2000);
	DrawCircle(300, 480, .5, 2000);
	DrawCircle(320, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(340, 480, .5, 2000);
	DrawCircle(360, 490, .5, 2000);
	DrawCircle(380, 480, 1, 2000);

    glTranslatef(0.0f,Position3, 0.0f);

   glColor3ub(255, 255, 255);
    DrawCircle(10, 600, 1, 2000);
	DrawCircle(30, 681, .5, 2000);
	DrawCircle(90, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(10, 500, .8, 2000);
	DrawCircle(30, 690, .5, 2000);
	DrawCircle(50, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(70, 600, .5, 2000);
	DrawCircle(90, 681, .5, 2000);
	DrawCircle(21, 690, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(610, 600, 1, 2000);
	DrawCircle(630, 681, .5, 2000);
	DrawCircle(690, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(610, 500, .8, 2000);
	DrawCircle(630, 690, .5, 2000);
	DrawCircle(650, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(670, 600, .5, 2000);
	DrawCircle(690, 681, .5, 2000);
	DrawCircle(621, 690, 1, 2000);
    glColor3ub(28, 40, 51);
    DrawCircle(410, 480, .5, 2000);
	DrawCircle(510, 490, .5, 2000);
	DrawCircle(610, 480, 1, 2000);
    glColor3ub(255, 255, 255);
	DrawCircle(410, 480, .5, 2000);
	DrawCircle(430, 490, .5, 2000);
	DrawCircle(450, 480, 1, 2000);
	glColor3ub(255, 255, 255);
	DrawCircle(470, 480, .5, 2000);
	DrawCircle(490, 480, .5, 2000);
	DrawCircle(530, 490, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(570, 500, .5, 2000);
	DrawCircle(580, 480, 1, 2000);
	DrawCircle(590, 490, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(110, 500, .8, 2000);
	DrawCircle(130, 490, .5, 2000);
	DrawCircle(150, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(170, 480, .5, 2000);
	DrawCircle(190, 490, .5, 2000);
	DrawCircle(210, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(230, 500, .5, 2000);
	DrawCircle(250, 490, .5, 2000);
	DrawCircle(270, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(290, 500, .5, 2000);
	DrawCircle(310, 490, .5, 2000);
	DrawCircle(330, 480, .5, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(350, 500, .5, 2000);
	DrawCircle(370, 480, .5, 2000);
	DrawCircle(390, 490, .5, 2000);

    glTranslatef(Position3,Position3, 0.0f);

   glColor3ub(255, 255, 255);
    DrawCircle(10, 600, 1, 2000);
	DrawCircle(30, 681, .5, 2000);
	DrawCircle(90, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(10, 500, .8, 2000);
	DrawCircle(30, 690, .5, 2000);
	DrawCircle(50, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(70, 600, .5, 2000);
	DrawCircle(90, 681, .5, 2000);
	DrawCircle(21, 690, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(610, 600, 1, 2000);
	DrawCircle(630, 681, .5, 2000);
	DrawCircle(690, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(610, 500, .8, 2000);
	DrawCircle(630, 690, .5, 2000);
	DrawCircle(650, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(670, 600, .5, 2000);
	DrawCircle(690, 681, .5, 2000);
	DrawCircle(621, 690, 1, 2000);
    glColor3ub(255, 255, 255);
    DrawCircle(400, 500, .7, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(600, 480, .7, 2000);
glColor3ub(255, 255, 255);
	DrawCircle(420, 500, .7, 2000);
	DrawCircle(440, 490, .7, 2000);
	DrawCircle(460, 480, .7, 2000);
	glColor3ub(255, 255, 255);
	DrawCircle(480, 500, .5, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(520, 480, .5, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(570, 500, .7, 2000);
	DrawCircle(580, 490, .7, 2000);
	DrawCircle(590, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(100, 500, .8, 2000);
	DrawCircle(120, 490, .8, 2000);
	DrawCircle(140, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(160, 500, .7, 2000);
	DrawCircle(180, 490, .7, 2000);
	DrawCircle(200, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(220, 500, 1, 2000);
	DrawCircle(240, 490, .5, 2000);
	DrawCircle(260, 480, .5, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(280, 500, 1, 2000);
	DrawCircle(300, 490, .5, 2000);
	DrawCircle(320, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(340, 500, .5, 2000);
	DrawCircle(360, 490, 1, 2000);
	DrawCircle(380, 480, .5, 2000);
    glColor3ub(255, 255, 255);
    DrawCircle(410, 500, 1, 2000);
	DrawCircle(510, 490, .7, 2000);
	DrawCircle(610, 480, .6, 2000);
   glColor3ub(255, 255, 255);
	DrawCircle(410, 480, .7, 2000);
	DrawCircle(430, 490, .6, 2000);
	DrawCircle(450, 500, .5, 2000);
	glColor3ub(255, 255, 255);
	DrawCircle(470, 500, 1, 2000);
	DrawCircle(490, 490, .5, 2000);
	DrawCircle(530, 489, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(570, 500, 1, 2000);
	DrawCircle(580, 481, .7, 2000);
	DrawCircle(590, 491, .8, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(110, 500, .8, 2000);
	DrawCircle(130, 490, .5, 2000);
	DrawCircle(150, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(170, 500, 1, 2000);
	DrawCircle(190, 481, .5, 2000);
	DrawCircle(210, 490, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(230, 500, .5, 2000);
	DrawCircle(250, 498, .7, 2000);
	DrawCircle(270, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(290, 500, .5, 2000);
	DrawCircle(310, 490, .7, 2000);
	DrawCircle(330, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(350, 500, .5, 2000);
	DrawCircle(370, 490, 1, 2000);
	DrawCircle(390, 480, .7, 2000);
   glColor3ub(255, 255, 255);
    DrawCircle(400, 500, 1, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(600, 480, .7, 2000);
glColor3ub(255, 255, 255);
	DrawCircle(420, 500, 1, 2000);
	DrawCircle(440, 490, 1, 2000);
	DrawCircle(460, 480, 1, 2000);
glColor3ub(255, 255, 255);
	DrawCircle(480, 500, .7, 2000);
	DrawCircle(500, 490, 1, 2000);
	DrawCircle(520, 480, .7, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(570, 500, 1, 2000);
	DrawCircle(580, 490, .5, 2000);
	DrawCircle(590, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(100, 500, .8, 2000);
	DrawCircle(120, 490, .5, 2000);
	DrawCircle(140, 480, .8, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(160, 500, .7, 2000);
	DrawCircle(180, 490, 1, 2000);
	DrawCircle(200, 480, 1, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(220, 500, 1, 2000);
	DrawCircle(240, 490, .5, 2000);
	DrawCircle(260, 480, 1, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(280, 500, 1, 2000);
	DrawCircle(300, 490, .5, 2000);
	DrawCircle(320, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(340, 500, .5, 2000);
	DrawCircle(360, 490, .7, 2000);
	DrawCircle(380, 480, 1, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(410, 500, 1, 2000);
	DrawCircle(510, 490, .7, 2000);
	DrawCircle(610, 480, 1, 2000);
   glColor3ub(255, 255, 255);
	DrawCircle(410, 480, 1, 2000);
	DrawCircle(430, 490, .7, 2000);
	DrawCircle(450, 500, 1, 2000);
	glColor3ub(255, 255, 255);
	DrawCircle(470, 600, 1, 2000);
	DrawCircle(490, 690, .5, 2000);
	DrawCircle(530, 689, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(570, 600, 1, 2000);
	DrawCircle(580, 681, .5, 2000);
	DrawCircle(590, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(110, 500, .8, 2000);
	DrawCircle(130, 690, .5, 2000);
	DrawCircle(150, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(170, 600, .5, 2000);
	DrawCircle(190, 681, .5, 2000);
	DrawCircle(210, 690, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(230, 600, 1, 2000);
	DrawCircle(250, 698, .7, 2000);
	DrawCircle(270, 680, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(290, 600, 1, 2000);
	DrawCircle(310, 690, .5, 2000);
	DrawCircle(330, 680, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(350, 600, 1, 2000);
	DrawCircle(370, 690, .7, 2000);
	DrawCircle(390, 680, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(10, 600, 1, 2000);
	DrawCircle(30, 681, .5, 2000);
	DrawCircle(90, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(10, 500, .8, 2000);
	DrawCircle(30, 690, .5, 2000);
	DrawCircle(50, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(70, 600, .5, 2000);
	DrawCircle(90, 681, .5, 2000);
	DrawCircle(21, 690, 1, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(610, 600, 1, 2000);
	DrawCircle(630, 681, .5, 2000);
	DrawCircle(690, 691, .8, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(610, 500, .8, 2000);
	DrawCircle(630, 690, .5, 2000);
    DrawCircle(650, 680, .8, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(670, 600, .5, 2000);
	DrawCircle(690, 681, .5, 2000);
	DrawCircle(621, 690, 1, 2000);

    glPopMatrix();

    }
}
////////////////// snow start and stop moving
void update3(int value){
    if(Position3<-300)
    {
        Position3=+30.0f;
    }
    if(Position3>300)
       {
           Position3=3;
       }
      Position3 -= cloudSpeed;
      glutPostRedisplay();
      glutTimerFunc(400, update3, 0);////snow spped increase/decrease
}

////////////////// sun movement
float position2 = 0.0f;
float speed2 = 0.6f;

void update2(int value){
    if(position2 > 300)
    position2 = +1500;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(130, update2, 0);//sun spped increase/decrease
}
void sky(){
    glColor3ub (6, 196, 184);
    glBegin(GL_QUADS);
    glVertex2f(0, 480);
    glVertex2f(0, 255);
    glVertex2f(640, 255);
    glVertex2f(640, 480);
    glEnd();
}
void wintersky()
{
    if(winter==1)
    {
         glColor3ub (190, 167, 162);
         glBegin(GL_QUADS);
    glVertex2f(0, 480);
    glVertex2f(0, 255);
    glVertex2f(640, 255);
    glVertex2f(640, 480);
    glEnd();
    }
}
void hills(){
//from left 1st hill
glColor3ub (150, 129, 117);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 250);
    glVertex2f(0, 300);
    glVertex2f(55, 250);

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(0, 250);
    glVertex2f(0, 400);
    glVertex2f(0, 400);
    glVertex2f(55, 255);
    glEnd();


    glColor3ub (150, 129, 117);
    glBegin(GL_TRIANGLES);
    glVertex2f(20, 255);
    glVertex2f(120, 340);
    glVertex2f(200, 255);

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(30, 275);
    glVertex2f(120, 340);

    glVertex2f(120, 340);
    glVertex2f(200, 255);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(20, 255);
    glVertex2f(120, 340);

    glVertex2f(120, 340);
    glVertex2f(200, 255);
    glEnd();

    glColor3ub (150, 129, 117);
    glBegin(GL_TRIANGLES);
    glVertex2f(20, 255);
    glVertex2f(120, 340);
    glVertex2f(200, 255);

    glColor3ub (150, 129, 117);
    glBegin(GL_TRIANGLES);
    glVertex2f(180, 255);
    glVertex2f(270, 320);
    glVertex2f(360, 255);
    glEnd();
    //////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(180, 255);
    glVertex2f(270, 320);

    glVertex2f(270, 320);
    glVertex2f(360, 255);
    glEnd();

    glColor3ub (150, 129, 117);
    glBegin(GL_TRIANGLES);
    glVertex2f(260, 255);
    glVertex2f(340, 360);
    glVertex2f(450, 255);
    glEnd();
    //////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(293, 299);
    glVertex2f(340, 360);
    glVertex2f(340, 360);
    glVertex2f(450, 255);
    glEnd();
    //right last hills
    glColor3ub (150, 129, 117);
    glBegin(GL_TRIANGLES);
    glVertex2f(440, 255);
    glVertex2f(535, 385);
    glVertex2f(650, 250);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(440, 255);
    glVertex2f(535, 385);
    glVertex2f(535, 385);
    glVertex2f(650, 250);
    glEnd();

    glFlush();
}





void river(){
    glColor3ub (108, 210, 175);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(640, 0);
    glVertex2f(640, 255);
      glVertex2f(0, 255);

    glEnd();
}
void winterriver(){
    if (winter==1){
    glColor3ub (160, 200, 200);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(640, 0);
    glVertex2f(640, 255);
      glVertex2f(0, 255);

    glEnd();}
}

void daywater(){
    if(rainstatus==0){
    //glColor3ub (169, 242, 242);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glBegin(GL_LINES);
    glVertex2f(200, 220);
    glVertex2f(220, 220);

    glVertex2f(210, 230);
    glVertex2f(220, 230);

    glVertex2f(300, 220);
    glVertex2f(320, 220);


    glVertex2f(100, 240);
    glVertex2f(120, 240);

    glVertex2f(150, 180);
    glVertex2f(150, 180);

    glVertex2f(0, 190);
    glVertex2f(10, 190);

    glVertex2f(0, 200);
    glVertex2f(10, 200);

    glVertex2f(30, 185);
    glVertex2f(40, 185);

    glVertex2f(100, 250);
    glVertex2f(125, 250);

    glVertex2f(150,240);
    glVertex2f(165,240);

    glVertex2f(90,200);
    glVertex2f(100,200);



    glVertex2f(270,235);
    glVertex2f(275,235);

    glVertex2f(260,35);
    glVertex2f(275,35);

    glVertex2f(260,35);
    glVertex2f(275,35);

    glVertex2f(250,45);
    glVertex2f(275,45);

    glVertex2f(250,55);
    glVertex2f(265,55);

     glVertex2f(270,235);
    glVertex2f(275,235);

    glVertex2f(260,35);
    glVertex2f(275,35);

    glVertex2f(280,85);
    glVertex2f(305,85);

    glVertex2f(250,65);
    glVertex2f(275,65);

    glVertex2f(80,45);
    glVertex2f(100,45);

    glVertex2f(50,40);
    glVertex2f(70,40);

    glVertex2f(30,45);
    glVertex2f(45,45);

    glVertex2f(10,40);
    glVertex2f(40,40);

    glVertex2f(30,145);
    glVertex2f(45,145);

    glVertex2f(170,190);
    glVertex2f(190,190);

    glVertex2f(105,90);
    glVertex2f(120,90);

    glVertex2f(80,145);
    glVertex2f(95,145);

    glVertex2f(305,90);
    glVertex2f(320,90);

    glVertex2f(380,145);
    glVertex2f(395,145);

    glVertex2f(505,40);
    glVertex2f(520,40);

    glVertex2f(570,25);
    glVertex2f(595,25);

    glVertex2f(50,130);
    glVertex2f(80,130);

    glVertex2f(250,65);
    glVertex2f(275,65);

    glVertex2f(240,25);
    glVertex2f(265,25);

    glVertex2f(350,55);
    glVertex2f(375,55);

    glVertex2f(340,25);
    glVertex2f(365,25);


    glEnd();
    }
   }

////////////////ship///////////////
void ship()
{
    //ship body black
    glColor3ub (0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(340, 50);
    glVertex2f(260, 150);
    glVertex2f(620, 150);
    glVertex2f(540, 50);
    glEnd();
    //under the ship uellow
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(340, 50);
    glVertex2f(540, 50);
    glVertex2f(540, 45);
    glVertex2f(340, 45);
    glEnd();
     //ship up the body
    glColor3ub (200, 140, 5);
    glBegin(GL_QUADS);
    glVertex2f(290, 150);
    glVertex2f(590, 150);
    glVertex2f(590, 190);
    glVertex2f(290, 190);
    glEnd();
    glColor3ub (175, 3, 60);//lalic
    glBegin(GL_QUADS);
    glVertex2f(290, 190);
    glVertex2f(590, 190);
    glVertex2f(560, 215);
    glVertex2f(320, 215);
    glEnd();
    //window1
    glColor3ub (2, 80, 135);
    glBegin(GL_QUADS);
    glVertex2f(330, 160);
    glVertex2f(360, 160);
    glVertex2f(360, 180);
    glVertex2f(330, 180);
    glEnd();
    //window2
    glColor3ub (2, 80, 135);
    glBegin(GL_QUADS);
    glVertex2f(390, 160);
    glVertex2f(420, 160);
    glVertex2f(420, 180);
    glVertex2f(390, 180);
    glEnd();
    //window3
    glColor3ub (2, 80, 135);
    glBegin(GL_QUADS);
    glVertex2f(450, 160);
    glVertex2f(480, 160);
    glVertex2f(480, 180);
    glVertex2f(450, 180);
    glEnd();
    //window4
    glColor3ub (2, 80, 135);
    glBegin(GL_QUADS);
    glVertex2f(510, 160);
    glVertex2f(540, 160);
    glVertex2f(540, 180);
    glVertex2f(510, 180);
    glEnd();
    //smoke top of the ship1
    glColor3ub (180, 150, 3);
    glBegin(GL_QUADS);
    glVertex2f(350, 215);
    glVertex2f(375, 215);
    glVertex2f(375, 245);
    glVertex2f(350, 245);
    glEnd();

    glColor3ub (0, 0, 3);
    glBegin(GL_QUADS);
    glVertex2f(350, 245);
    glVertex2f(375, 245);
    glVertex2f(375, 250);
    glVertex2f(350, 250);
    glEnd();
    //smoke top of the ship2
    glColor3ub (180, 150, 3);
    glBegin(GL_QUADS);
    glVertex2f(390, 215);
    glVertex2f(415, 215);
    glVertex2f(415, 245);
    glVertex2f(390, 245);
    glEnd();

    glColor3ub (0, 0, 3);
    glBegin(GL_QUADS);
    glVertex2f(390, 245);
    glVertex2f(415, 245);
    glVertex2f(415, 250);
    glVertex2f(390, 250);
    glEnd();
     //smoke top of the ship3
    glColor3ub (180, 150, 3);
    glBegin(GL_QUADS);
    glVertex2f(430, 215);
    glVertex2f(455, 215);
    glVertex2f(455, 245);
    glVertex2f(430, 245);
    glEnd();

    glColor3ub (0, 0, 3);
    glBegin(GL_QUADS);
    glVertex2f(430, 245);
    glVertex2f(455, 245);
    glVertex2f(455, 250);
    glVertex2f(430, 250);
    glEnd();
     //smoke top of the ship4
    glColor3ub (180, 150, 3);
    glBegin(GL_QUADS);
    glVertex2f(470, 215);
    glVertex2f(495, 215);
    glVertex2f(495, 245);
    glVertex2f(470, 245);
    glEnd();

    glColor3ub (0, 0, 3);
    glBegin(GL_QUADS);
    glVertex2f(470, 245);
    glVertex2f(495, 245);
    glVertex2f(495, 250);
    glVertex2f(470, 250);
    glEnd();
    //smoke top of the ship5
    glColor3ub (180, 150, 3);
    glBegin(GL_QUADS);
    glVertex2f(510, 215);
    glVertex2f(535, 215);
    glVertex2f(535, 245);
    glVertex2f(510, 245);
    glEnd();

    glColor3ub (0, 0, 3);
    glBegin(GL_QUADS);
    glVertex2f(510, 245);
    glVertex2f(535, 245);
    glVertex2f(535, 250);
    glVertex2f(510, 250);
    glEnd();


}
//////////////Ship end////////////////////


void moveWater(int x){
    if (waterStatus ==1)
    {
        waterX += 1;//left or right side move water
    }
    if (waterX>300)
    {
        waterX = -200;
    }

    glPushMatrix();
    glTranslatef(waterX, waterY, 0);
    if(x==1)
        {
          rainyRiver();

            daywater();
    }
    else{
            rainyRiver();
    }
    glPopMatrix();

    glFlush();
}

///////////////////moving ship
void moveWaterboat(int xx){

if(waterboat==1)

    {

        boatx-= 1;//change left or right

    }
    if (boatx<-620)
    {
        boatx =-0;
    }

    glPushMatrix();
    glTranslatef(boatx, boaty, 0);
    if(xx==1)
        {

    ship();
    }
    else{
       ship();
    }
    glPopMatrix();
    glFlush();

}

void megh(){
     glColor3ub (200, 220, 220);
	DrawCircle(20, 450, 25, 2000);
	DrawCircle(50, 450, 35, 2000);
	DrawCircle(80, 450, 25, 2000);

    glColor3ub (200, 220, 220);
	DrawCircle(220, 400, 25, 2000);
	DrawCircle(250, 400, 35, 2000);
	DrawCircle(280, 400, 25, 2000);

    glColor3ub (200, 220, 220);
	DrawCircle(300, 420, 25, 2000);
	DrawCircle(330, 420, 35, 2000);
	DrawCircle(360, 420, 25, 2000);

    glColor3ub (200, 220, 220);
	DrawCircle(400, 400, 25, 2000);
	DrawCircle(430, 400, 35, 2000);
	DrawCircle(460, 400, 25, 2000);
	glFlush();

	glColor3ub (200, 220, 220);
	DrawCircle(580, 480, 25, 2000);
	DrawCircle(510, 480, 35, 2000);
	DrawCircle(540, 480, 25, 2000);
	glFlush();
}

void Cloudmegh(){
    glColor3ub (100, 120, 100 );
	DrawCircle(190, 440, 25, 2000);
	DrawCircle(200, 440, 35, 2000);
	DrawCircle(230, 440, 25, 2000);

    glColor3ub (100, 120, 100 );
	DrawCircle(270, 470, 25, 2000);
	DrawCircle(290, 470, 35, 2000);
	DrawCircle(310, 470, 25, 2000);

    glColor3ub (100, 120, 100 );
	DrawCircle(330, 450, 25, 2000);
	DrawCircle(350, 450, 35, 2000);
	DrawCircle(390, 450, 25, 2000);

    glColor3ub (100, 120, 100 );
	DrawCircle(530, 450, 25, 2000);
	DrawCircle(550, 450, 35, 2000);
	DrawCircle(570, 450, 25, 2000);


	glFlush();
}


void drawSun(){
    if(rainstatus==0){
    glPushMatrix();
    glTranslatef(0,position2, 0.0f);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    DrawCircle(220, 398, 20, 500);

    glEnd();
    glPopMatrix();
    //glFlush();
    }
}


void beakup()
{
if(winter==0){

        glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
	glLineWidth(5);
	glVertex2f(60, 300);
    glVertex2f(63, 315);

    glVertex2f(60, 300);
    glVertex2f(58, 315);
     glVertex2f(58, 315);
    glVertex2f(63, 315);

    glEnd();

       glColor3ub (233, 44,22);
    glBegin(GL_POLYGON);

	glVertex2f(60, 300);
    glVertex2f(58, 315);

    glVertex2f(63, 315);

   glEnd();
    glColor3ub (58, 43,64);
    glBegin(GL_POLYGON);

	glVertex2f(40, 330);
    glVertex2f(38, 345);

    glVertex2f(43, 345);

   glEnd();
}
}
void beakdown()
{ if (winter==0){
        glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
	glLineWidth(5);
	glVertex2f(60, 300);
    glVertex2f(63, 285);

    glVertex2f(60, 300);
    glVertex2f(58, 285);
     glVertex2f(58, 285);
    glVertex2f(63, 285);

    glEnd();
    glColor3ub (233, 44,22);
    glBegin(GL_POLYGON);

	glVertex2f(60, 300);
    glVertex2f(58, 285);

    glVertex2f(63, 285);

   glEnd();
   glColor3ub (58, 43,64);
    glBegin(GL_POLYGON);

	glVertex2f(40, 330);
    glVertex2f(38, 315);

    glVertex2f(43, 315);

   glEnd();}
}


void rain()
{
    glColor3d(0,1,0);
    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
    x=rand(),y=rand();
    x%=1000; y%=1000;

        glBegin(GL_LINES);
        glColor3b(1,1,1);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

    for(int i=1;i<=1000;i+=5){
  x=rand(),y=rand();
       x%=1000; y%=1000;

        glBegin(GL_LINES);
        glColor3b(1,1,1);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();

    }

}
void moverain(int x)
{ if(rainstatus ==1){
        wx -= 0.01;
        wy -= 0.01;
    glPushMatrix();
    glTranslatef(wx, wy, 0);
if (x==1){
    rain();
}
    glPopMatrix();

    //glFlush();
}
}
void rainyCloud(){
    if(rainstatus==1)
    {
        glColor3ub (84, 84, 84  );
        DrawCircle(170, 400, 25, 2000);
        DrawCircle(200, 400, 35, 2000);
        DrawCircle(230, 400, 25, 2000);

         glColor3ub (84, 84, 84  );
        DrawCircle(300, 420, 25, 2000);
        DrawCircle(330, 420, 35, 2000);
        DrawCircle(360, 420, 25, 2000);

         glColor3ub (84, 84, 84  );
        DrawCircle(500, 400, 25, 2000);
        DrawCircle(530, 400, 35, 2000);
        DrawCircle(560, 400, 25, 2000);


        int random1 = rand() % 10 + 1;
        int random2 = rand() % 10 + 1;
        int random3 = rand() % 10 + 1;

         if(random1==2) //Lighting when rain start 1
         {
               glColor3ub (200, 144, 5);
                glBegin(GL_TRIANGLES);
                glVertex2f(180,340);
                glVertex2f(190,340);
                glVertex2f(200,370);
                glEnd();


            glColor3ub (200, 144, 5);
            glBegin(GL_POLYGON);
            glVertex2f(175, 310);
            glVertex2f(195, 340);
            glVertex2f(185, 340);

            glEnd();


         }
  if(random2==2) //Lighting when rain start 2
         {

        glColor3ub (200, 144, 5);
        glBegin(GL_TRIANGLES);
        glVertex2f(510,340);
        glVertex2f(520,340);
        glVertex2f(530,370);
        glEnd();

        glColor3ub (200, 144, 5);
        glBegin(GL_POLYGON);
        glVertex2f(505, 310);
        glVertex2f(525, 340);
        glVertex2f(515, 340);
        glEnd();

} if(random2==3) //Lighting when rain start 3
         {

        glColor3ub (200, 144, 5);
        glBegin(GL_TRIANGLES);
        glVertex2f(20,340);
        glVertex2f(30,340);
        glVertex2f(40,370);
        glEnd();

        glColor3ub (200, 144, 5);
        glBegin(GL_POLYGON);
        glVertex2f(15, 310);
        glVertex2f(25, 340);
        glVertex2f(15, 340);
        glEnd();

}

        glFlush();
    }

}
void rainySky(){
    if(rainstatus==1)
    {
            glColor3ub (120, 145, 156);
            glBegin(GL_QUADS);
            glVertex2f(0, 480);
            glVertex2f(0, 255);
            glVertex2f(640, 255);
            glVertex2f(640, 480);
            glEnd();

            int random1 = rand() % 10 + 1;
            if(random1==2)
            {
                sky();
            }
    }
}
void moveMegh(int x){

            if(meghStatus ==1){
            meghX -=2;//move megh right or left
            }
    if (meghX>400)
        {
            meghX = -20;
        }
    glPushMatrix();
    glTranslatef(meghX, meghY, 0);


      if(x==1)
    {
       megh();
       rainyCloud();
    }
    else{
        Cloudmegh();
        rainyCloud();
    }

    glPopMatrix();
    glFlush();
}


void rainyRiver()
{
    if(rainstatus==1)
    {
        int xaxis=1200;
        int yaxis=255;
        glColor3ub (160, 220, 220);
        glBegin(GL_LINES);

        for(int i=0; i<200; i++)
        {
            for(int j=0; j<200; j++){
            glVertex2f( xaxis-10,  yaxis-5);
            glVertex2f( xaxis-20,  yaxis);
            glVertex2f( xaxis,  yaxis);
            glVertex2f(  xaxis-10,  yaxis-5);
            xaxis-=20;
        }
        yaxis-=20;
        xaxis=640;

        }

       glEnd();
    }
}

void rainywater()
{
    if(rainstatus==1)
    {


        for (int i = 0; i < 150; i++)
        {
             int random1 = rand() % 640 + 1;
            int random2 = rand() % 255 + 1;
            glColor3ub(255, 255, 255);
            DrawCircle(random1,random2,1,1000);



        }

    }
}
void myDisplay(void){
if(position2>= -250.0f){
    sky();
    wintersky();
    rainySky();
    hills();
    drawSun();
    river();
    winterriver();
    rainywater();
    moveWater(1);
    moveMegh(1);
    moveWaterboat(1);
    snow();
    moverain(1);

       // winterscene();
    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();}
    else{
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient[] = {0.41,1.31,1.88, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
    sky();
    glDisable(GL_LIGHTING);
    rainySky();
    glEnable(GL_LIGHTING);
    GLfloat global_ambient2[] = {1.29,1.29,1.29, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);
    hills();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient3[] = {1.9,1.9,1.9, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient1[] = {.60,1.90,2.76, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);
    river();

    glDisable(GL_LIGHTING);
    winterriver();

    glEnable(GL_LIGHTING);
    GLfloat global_ambient4[] = {4.0,4.0,4.0, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);
    //drawMoon();
     //moveMoon(1);
    glDisable(GL_LIGHTING);

    moveWater(2);
    rainywater();


    glEnable(GL_LIGHTING);
    GLfloat global_ambient5[] = {0.0,1.50,1.25, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient5);

    glDisable(GL_LIGHTING);

    moveMegh(2);
    moveWaterboat(1);
    snow();
    moverain(1);

    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();
    }
}

void mykeyboard(unsigned char key, int x, int y){


	 if (key == 'A' || key == 'a'){		////////megh starting
		meghStatus = 1;
	}
	else if (key == 'B' || key == 'b'){		//////megh STOP
		meghStatus = 0;
	}
	else if (key == 'C' || key == 'c'){		////water strting
		waterStatus = 1;
	}
	else if (key == 'D' || key == 'd'){		//water stop
		waterStatus = 0;
	}


	 else if (key == 'E' || key == 'e'){		////winter starting
		winter = 1;
		waterboat=0;

	}
	 else if (key == 'F' || key == 'f'){		////winter stop
		winter = 0;
		waterboat=1;

	}
    else if (key == 'l' || key == 'L'){		//light starting
		lightstatus = 1;
	}
    else if (key == '0' || key == 'o'){     //light stop
		lightstatus = 0;
	}
	else if (key == '1' ){              //rain starting
		rainstatus = 1;
	}
	else if (key == '2' ){		//rain stop
		rainstatus = 0;
	}


}

void myInit(void){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glColor3f(.0f,.0f,.0f);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("Ship Sink on the River");
    glutPostRedisplay();
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(mykeyboard);
    myInit();
    glutTimerFunc(30, update2, 0);
    glutTimerFunc(5,update3,0);
    glutMainLoop();
    return 0;
}
