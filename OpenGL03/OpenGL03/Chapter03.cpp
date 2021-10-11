
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>


static int Day = 0, Time, Time2, Time3, Time4, Time5, Time6, Time7, Time8, Time9 = 0, Day2, Day3, Day4, Day5, Day6, Day7, Day8, Day9 = 0;

void InitLight() {
	GLfloat mat_diffuse[] = { 0.5, 0.4, 0.3, 1.0 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shininess[] = { 15.0 };
	GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat light_diffuse[] = { 0.8, 0.8, 0.8, 1.0 };
	GLfloat light_ambient[] = { 0.3, 0.3, 0.3, 1.0 };
	GLfloat light_position[] = { -8, 6, 3.0, 0.0 };

	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

	glShadeModel(GL_SMOOTH);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
}
void MyDisplay() {

	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity(); 
	gluLookAt(0.1, 0.1, 0.1, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0);
	GLfloat mat_ambient[] = { 1.0, 0.0, 0.0, 1.0 };//�¾� ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glutSolidSphere(0.1, 20, 8); // �¾� �������
	glPushMatrix();
	glRotatef((GLfloat)Day3, 0.0, 1.0, 100.0); // �¾�� �������� ����
	glTranslatef(0.3, 0.0, 0.0); // �¾�� �������� �Ÿ�
	glRotatef((GLfloat)Time3, 0.0, 1.0, 100.0);// ���� ����
	GLfloat mat_ambient3[] = { 0.1, 0.1, 0.7, 1.0 };// ������
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient3);
	glutSolidSphere(0.022, 10, 8); // ���� ��� ����
	glPushMatrix();
	glRotatef((GLfloat)Time3, 0.0, 1.0, 100.0); // �ް� ���� ����
	glTranslatef(0.03, 0.0, 0.0); // �ް� �������� �Ÿ�
	GLfloat mat_ambient0[] = { 0.9, 0.8, 0.2, 1.0 };// �� ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient0);
	glutSolidSphere(0.003, 10, 8); // �� �������
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glRotatef((GLfloat)Day, 0.0, 1.0, 100.0); // �¾�� �������� ����
	glTranslatef(0.17, 0.0, 0.0); // �¾�� �������� �Ÿ�
	glRotatef((GLfloat)Time, 0.0, 1.0, 100.0);// ���� ����
	GLfloat mat_ambient1[] = { 0.9, 0.9, 0.9, 1.0 };// ���� ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient1);
	glutSolidSphere(0.005, 10, 8); // ���� �������
	glPopMatrix();


	glPushMatrix();
	glRotatef((GLfloat)Day2, 0.0, 1.0, 100.0);// �¾�� �ݼ����� ����
	glTranslatef(0.23, 0.0, 0.0); // �¾�� �ݼ����� �Ÿ�
	glRotatef((GLfloat)Time2, 0.0, 1.0, 100.0);// �ݼ� ����
	GLfloat mat_ambient2[] = { 0.9, 0.8, 0.2, 1.0 };// �ݼ� ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
	glutSolidSphere(0.02, 10, 8); // �ݼ� �������
	glPopMatrix();


	glPushMatrix();
	glRotatef((GLfloat)Day4, 0.0, 1.0, 100.0);// �¾�� ȭ������ ����
	glTranslatef(0.4, 0.0, 0.0); // �¾�� ȭ������ �Ÿ�
	glRotatef((GLfloat)Time4, 0.0, 1.0, 100.0);// ȭ�� ����
	GLfloat mat_ambient4[] = { 0.9, 0.2, 0.2, 1.0 };// ȭ�� ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient4);
	glutSolidSphere(0.015, 10, 8); // ȭ�� �������
	glPopMatrix();


	// ���༺ ����

	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.0); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient9[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient9);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.47, 0.0, 0.04); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient10[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient10);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.48, -0.05, 0.04); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient11[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient11);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.06, 0.04); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient12[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient12);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, -0.07, 0.06); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient13[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient13);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.46, -0.08, 0.06); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient14[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient14);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.09, 0.08); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient15[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient15);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, -0.1, 0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient16[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient16);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.43, -0.11, 0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient17[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient17);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.12, 0.12); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient18[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient18);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.42, -0.13, 0.12); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient19[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient19);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.14, 0.14); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient20[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient20);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, -0.15, 0.14); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient21[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient21);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.16, 0.18); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient22[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient22);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.17, 0.2); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient23[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient23);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.46, -0.17, 0.22); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient24[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient24);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.16, 0.24); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient25[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient25);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, -0.16, 0.26); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient26[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient26);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.47, -0.16, 0.28); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient27[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient27);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.15, 0.3); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient28[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient28);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, -0.14, 0.32); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient29[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient29);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, -0.14, 0.34); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient30[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient30);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, -0.13, 0.36); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient31[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient31);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.12, 0.38); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient32[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient32);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.40, -0.11, 0.4); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient33[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient33);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.49, -0.1, 0.41); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient34[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient34);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, -0.09, 0.42); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient35[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient35);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.08, 0.43); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient36[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient36);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, -0.07, 0.44); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient37[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient37);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.47, -0.06, 0.45); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient38[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient38);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.05, 0.46); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient39[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient39);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.43, -0.05, 0.47); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient40[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient40);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, -0.04, 0.48); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient41[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient41);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, -0.03, 0.49); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient42[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient42);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.02, 0.5); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient43[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient43);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.45, -0.01, 0.51); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient44[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient44);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.52); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient45[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient45);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.47, 0.01, 0.53); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient46[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient46);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.02, 0.54); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient47[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient47);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.46, 0.03, 0.55); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient48[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient48);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.04, 0.56); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient49[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient49);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.42, 0.05, 0.57); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient50[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient50);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.06, 0.58); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient51[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient51);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.43, 0.07, 0.59); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient52[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient52);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.08, 0.6); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient53[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient53);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.45, 0.09, 0.61); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient54[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient54);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.1, 0.61); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient55[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient55);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.43, 0.11, 0.63); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient56[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient56);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.42, 0.11, 0.64); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient57[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient57);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.12, 0.65); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient58[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient58);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.14, 0.66); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient59[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient59);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.15, 0.65); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient60[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient60);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.16, 0.65); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient61[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient61);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.17, 0.66); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient62[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient62);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.18, 0.67); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient63[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient63);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.46, 0.2, 0.68); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient64[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient64);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.21, 0.69); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient65[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient65);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.22, 0.71); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient66[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient66);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.23, 0.71); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient67[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient67);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.47, 0.24, 0.72); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient68[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient68);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.25, 0.73); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient69[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient69);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.26, 0.74); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient70[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient70);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.27, 0.75); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient71[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient71);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.42, 0.28, 0.75); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient72[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient72);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.29, 0.76); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient73[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient73);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.3, 0.77); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient74[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient74);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.31, 0.78); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient75[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient75);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.43, 0.32, 0.79); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient76[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient75);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.33, 0.8); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient77[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient77);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.42, 0.34, 0.81); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient78[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient78);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.35, 0.82); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient79[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient79);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.36, 0.82); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient80[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient80);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.37, 0.82); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient81[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient81);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.46, 0.37, 0.82); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient82[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient82);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.38, 0.81); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient83[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient83);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.42, 0.39, 0.82); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient84[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient84);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.4, 0.82); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient85[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient85);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.4, 0.41, 0.84); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient86[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient86);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.48, 0.42, 0.85); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient87[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient87);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.43, 0.86); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient88[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient88);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.44, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient89[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient89);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.48, 0.45, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient90[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient90);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.46, 0.46, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient91[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient91);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.45, 0.47, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient92[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient92);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.48, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient93[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient93);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.47, 0.49, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient94[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient94);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.5, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient95[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient95);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.47, 0.505, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient96[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient96);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.42, 0.507, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient97[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient97);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.40, 0.51, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient98[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient98);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.46, 0.52, 0.88); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient99[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient99);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.46, 0.53, 0.88); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient100[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient100);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.42, 0.54, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient101[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient101);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.43, 0.55, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient102[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient102);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.56, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient103[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient103);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.47, 0.57, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient104[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient104);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.58, 0.87); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient105[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient105);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.42, 0.59, 0.88); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient106[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient106);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.47, 0.6, 0.88); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient107[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient107);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.49, 0.61, 0.88); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient108[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient108);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.47, 0.62, 0.88); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient109[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient109);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.53, -0.1, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient110[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient110);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.54, -0.2, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient111[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient111);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.55, -0.25, -0.15); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient112[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient112);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.52, -0.3, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient113[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient113);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.52, -0.35, -0.15); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient114[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient114);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.51, -0.28, -0.08); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient115[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient115);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.51, -0.22, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient116[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient116);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.50, -0.24, -0.05); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient117[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient117);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.52, -0.28, -0.06); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient118[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient118);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.51, -0.1, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient119[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient119);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.52, -0.15, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient120[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient120);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.52, -0.2, -0.12); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient121[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient121);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.53, 0.1, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient122[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient122);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.52, 0.11, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient123[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient123);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.54, 0.12, -0.05); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient124[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient124);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.52, 0.1, -0.07); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient125[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient125);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.55, -0.13, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient126[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient126);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.55, -0.05, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient127[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient127);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.55, -0.07, -0.12); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient128[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient128);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.55, -0.09, -0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient129[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient129);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.52, 0.2, -0.05); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient130[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient130);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.8, -0.1, -0.5); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient131[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient131);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.8, -0.15, -0.4); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient132[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient132);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.8, -0.3, -0.4); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient133[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient133);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.8, -0.25, -0.4); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient134[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient134);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.8, -0.2, -0.4); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient135[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient135);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.8, -0.15, -0.35); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient136[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient136);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.7, -0.1, -0.35); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient137[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient137);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.75, -0.3, -0.4); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient138[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient138);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.65, -0.3, -0.3); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient139[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient139);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.6, -0.2, -0.18); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient140[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient140);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.6, -0.54, -0.3); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient141[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient141);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.56, 0.95, 0.20); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient142[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient142);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.1, -0.4); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient143[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient143);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.1, -0.37); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient144[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient144);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.15, -0.35); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient145[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient145);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.13, -0.24); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient146[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient146);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.18, -0.3); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient147[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient147);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.14, -0.28); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient148[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient148);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.12, -0.24); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient149[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient149);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.1, -0.20); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient150[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient150);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.48, 0.08, -0.18); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient151[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient151);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.06, -0.16); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient152[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient152);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.47, 0.04, -0.14); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient153[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient153);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.02, -0.12); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient154[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient154);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.02, -0.10); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient155[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient155);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.0, -0.08); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient156[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient156);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.1, -0.48); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient157[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient157);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, -0.02, -0.5); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient158[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient158);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, -0.01, -0.5); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient159[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient159);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.48, -0.04, -0.5); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient160[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient160);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.42, -0.02, -0.5); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient161[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient161);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.44, -0.02, -0.5); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient162[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient162);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.44, -0.06, -0.6); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient163[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient163);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.44, -0.08, -0.5); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient164[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient164);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.44, -0.12, -0.6); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient165[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient165);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.44, -0.14, -0.6); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient166[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient166);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.44, -0.16, -0.61); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient167[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient167);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.44, -0.18, -0.62); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient168[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient168);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.44, -0.2, -0.63); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient169[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient169);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.44, -0.22, -0.64); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient170[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient170);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.44, -0.24, -0.65); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient171[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient171);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.26, 0.05); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient172[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient172);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.44, 0.28, 0.06); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient173[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient173);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.30, 0.06); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient174[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient174);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.32, 0.06); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient175[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient175);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.34, 0.06); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient176[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient176);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.36, 0.06); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient177[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient177);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.38, 0.11); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient178[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient178);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.40, 0.09); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient179[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient179);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.42, 0.11); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient180[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient180);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.44, 0.11); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient181[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient181);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.46, 0.15); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient182[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient182);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.48, 0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient183[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient183);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.5, 0.15); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient184[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient184);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.52, 0.2); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient185[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient185);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.54, 0.2); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient186[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient186);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.56, 0.2); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient187[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient187);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.58, 0.2); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient188[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient188);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.44, 0.6, 0.2); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient189[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient189);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.1, 0.05); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient190[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient190);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.05, 0.05); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient191[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient191);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -0.1, 0.05); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient192[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient192);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.2, 0.05); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient193[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient193);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.25, 0.05); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient194[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient194);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.3, 0.05); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient195[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient195);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.35, 0.1); // �¾�� ���༺���� �Ÿ�
	GLfloat mat_ambient196[] = { 0.5, 0.5, 0.5, 1.0 };// ���༺ ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient196);
	glutSolidSphere(0.003, 10, 8); // ���༺ �������
	glPopMatrix();

	// ���༺ ��

	glPushMatrix();
	glRotatef((GLfloat)Day5, 0.0, 1.0, 100.0);// �¾�� �񼺻��� ����
	glTranslatef(0.6, 0.0, 0.0); // �¾�� �񼺻��� �Ÿ�
	glRotatef((GLfloat)Time5, 0.0, 1.0, 100.0);// �� ����
	GLfloat mat_ambient5[] = { 1.0, 0.5, 0.3, 1.0 };// �� ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient5);
	glutSolidSphere(0.05, 10, 8); // �� �������
	glPopMatrix();


	glPushMatrix();
	glRotatef((GLfloat)Day6, 0.0, 1.0, 100.0);// �¾�� �伺���� ����
	glTranslatef(0.75, 0.0, 0.0); // �¾�� �伺���� �Ÿ�
	glRotatef((GLfloat)Time6, 0.0, 1.0, 100.0);// �伺 ����
	GLfloat mat_ambient6[] = { 0.7, 0.3, 0.3, 1.0 };// �伺 ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient6);
	glutSolidSphere(0.035, 10, 8); // �伺 �������
	glPopMatrix();


	glPushMatrix();
	glRotatef((GLfloat)Day7, 0.0, 1.0, 100.0);// �¾�� õ�ռ����� ����
	glTranslatef(0.85, 0.0, 0.0); // �¾�� õ�ռ����� �Ÿ�
	glRotatef((GLfloat)Time7, 0.0, 1.0, 100.0);// õ�ռ� ����
	GLfloat mat_ambient7[] = { 0.6, 0.7, 0.9, 1.0 };// õ�ռ� ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient7);
	glutSolidSphere(0.025, 10, 8); // õ�ռ� �������
	glPopMatrix();


	glPushMatrix();
	glRotatef((GLfloat)Day8, 0.0, 1.0, 100.0);// �¾�� �ؿռ����� ����
	glTranslatef(0.95, 0.0, 0.0); // �¾�� �ؿռ����� �Ÿ�
	glRotatef((GLfloat)Time8, 0.0, 1.0, 100.0);// �ؿռ� ����
	GLfloat mat_ambient8[] = { 0.2, 0.3, 0.9, 1.0 };// �ؿռ� ����
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient8);
	glutSolidSphere(0.025, 10, 8); // �ؿռ� �������
	glPopMatrix();
	glutSwapBuffers();
}

void MyKeyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 'q':
		Day = (Day + 560) % 360;
		glutPostRedisplay();

		Day2 = (Day2 - 285) % 360;
		glutPostRedisplay();

		Day3 = (Day3 + 100) % 360;
		glutPostRedisplay();

		Day4 = (Day4 + 40) % 360;
		glutPostRedisplay();

		Day5 = (Day5 + 6) % 360;
		glutPostRedisplay();

		Day6 = (Day6 + 3) % 360;
		glutPostRedisplay();

		Day7 = (Day7 + 2) % 360;
		glutPostRedisplay();

		Day8 = (Day8 + 1) % 360;
		glutPostRedisplay();
		break;

	case 'w':// �������� ��Ʈ��
		Day = (Day + 560) % 360;
		glutPostRedisplay();
		break;
	case 'e':// �ݼ����� ��Ʈ��
		Day2 = (Day2 - 285) % 360;
		glutPostRedisplay();
		break;
	case 'r':// �������� ��Ʈ��
		Day3 = (Day3 + 100) % 360;
		glutPostRedisplay();
		break;
	case 't':// ȭ������ ��Ʈ��
		Day4 = (Day4 + 40) % 360;
		glutPostRedisplay();
		break;
	case 'y':// �񼺰��� ��Ʈ��
		Day5 = (Day5 + 6) % 360;
		glutPostRedisplay();
		break;
	case 'u':// �伺���� ��Ʈ��
		Day6 = (Day6 + 3) % 360;
		glutPostRedisplay();
		break;
	case 'i':// õ�ռ����� ��Ʈ��
		Day7 = (Day7 + 2) % 360;
		glutPostRedisplay();
		break;
	case 'o':// �ؿռ����� ��Ʈ��
		Day8 = (Day8 + 1) % 360;
		glutPostRedisplay();
		break;

	case 'a': // �༺ ��ü ���� ��Ʈ��
		Time = (Time + 4) % 360;
		glutPostRedisplay();

		Time2 = (Time2 - 1) % 360;
		glutPostRedisplay();

		Time3 = (Time3 + 243) % 360;
		glutPostRedisplay();

		Time4 = (Time4 + 243) % 360;
		glutPostRedisplay();

		Time5 = (Time5 + 730) % 360;
		glutPostRedisplay();

		Time6 = (Time6 + 730) % 360;
		glutPostRedisplay();

		Time7 = (Time7 - 365) % 360;
		glutPostRedisplay();

		Time8 = (Time8 + 730) % 360;
		glutPostRedisplay();

	case 's': // ���� ���� ��Ʈ��
		Time = (Time + 4) % 360;
		glutPostRedisplay();
		break;
	case 'd': // �ݼ� ���� ��Ʈ��
		Time2 = (Time2 - 1) % 360;
		glutPostRedisplay();
		break;
	case 'f': // ���� ���� ��Ʈ��
		Time3 = (Time3 + 243) % 360;
		glutPostRedisplay();
		break;
	case 'g': // ȭ�� ���� ��Ʈ��
		Time4 = (Time4 + 243) % 360;
		glutPostRedisplay();
		break;
	case 'h': // �� ���� ��Ʈ��
		Time5 = (Time5 + 730) % 360;
		glutPostRedisplay();
		break;
	case 'j': // �伺 ���� ��Ʈ��
		Time6 = (Time6 + 730) % 360;
		glutPostRedisplay();
		break;
	case 'k': // õ�ռ� ���� ��Ʈ��
		Time7 = (Time7 - 365) % 360;
		glutPostRedisplay();
		break;
	case 'l': // �ؿռ� ���� ��Ʈ��
		Time8 = (Time8 + 730) % 360;
		glutPostRedisplay();
		break;
	default:
		break;
	}
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1200, 900);
	glutInitWindowPosition(300, 50);
	glutCreateWindow("The Solar System Drawing");
	glClearColor(0.0, 0.0, 0.0, 0.0);
    InitLight();
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);
	glutMainLoop();
	return 0;
}