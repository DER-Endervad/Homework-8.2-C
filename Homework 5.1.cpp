#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle_Q.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include <Windows.h>
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	try {
		Figure figure(0);
		Figure figure1(1);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	std::cout << std::endl;


	Figure* t = new Triangle(10, 20, 30, 50, 60, 70);
	delete t;
	try {
		Figure* t1 = new Triangle(10, 20, 30, 50, 60, 60);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	try {
		Figure* t2 = new Triangle(10, 20, 0, 50, 60, 70);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	std::cout << std::endl;


	Figure* rt1 = new Right_triangle(10, 20, 30, 40, 50, 90);
	try {
		Figure* rt = new Right_triangle(10, 20, 30, 40, 70, 70);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	delete rt1; std::cout << std::endl;


	Figure* it = new Isosceles_triangle(10, 20, 10, 50, 80, 50);
	try {
		Figure* it1 = new Isosceles_triangle(20, 20, 10, 50, 80, 50);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	try {
		Figure* it2 = new Isosceles_triangle(10, 20, 10, 40, 80, 60);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	delete it; std::cout << std::endl;

	Figure* et = new Equilateral_triangle(30, 30, 30, 60, 60, 60);
	try {
		Figure* et1 = new Equilateral_triangle(20, 30, 30, 60, 60, 60);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	try {
		Figure* et2 = new Equilateral_triangle(30, 30, 30, 70, 70, 40);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	delete et; std::cout << std::endl;

	Figure* q = new Quadrangle(10, 20, 30, 40, 80, 80, 100, 100);
	try {
		Figure* q1 = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	try {
		Figure* q2 = new Quadrangle(10, 20, 30, 0, 80, 80, 100, 100);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	delete q; std::cout << std::endl;

	Figure* r = new Rectangle_Q(10, 20, 10, 20, 90, 90, 90, 90);
	try {
		Figure* r1 = new Rectangle_Q(10, 10, 10, 20, 90, 90, 90, 90);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	try {
		Figure* r2 = new Rectangle_Q(10, 20, 10, 20, 80, 90, 90, 100);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	delete r; std::cout << std::endl;

	Figure* s = new Square(20, 20, 20, 20, 90, 90, 90, 90);
	try {
		Figure* s1 = new Square(10, 20, 20, 20, 90, 90, 90, 90);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	try {
		Figure* s2 = new Square(20, 20, 20, 20, 80, 90, 90, 100);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	delete s; std::cout << std::endl;

	Figure* p = new Parallelogram(10, 20, 10, 20, 100, 80, 100, 80);
	try {
		Figure* p1 = new Parallelogram(10, 10, 10, 20, 100, 80, 100, 80);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	try {
		Figure* p2 = new Parallelogram(10, 20, 10, 20, 100, 100, 100, 60);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	delete p; std::cout << std::endl;

	Figure* rh = new Rhombus(10, 10, 10, 10, 100, 80, 100, 80);
	try {
		Figure* rh1 = new Rhombus(10, 10, 10, 20, 100, 80, 100, 80);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	try {
		Figure* rh2 = new Rhombus(10, 10, 10, 10, 100, 100, 100, 60);
	}
	catch (My_exception& my) {
		std::cerr << my.what() << std::endl;
	}
	delete rh; std::cout << std::endl;
}
