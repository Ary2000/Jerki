#include <iostream>
#include "Simple_window.h"
#include "Graph.h"
using namespace std;

typedef struct Nodo* enlace;
struct Nodo {
	int v;
	enlace sig;
	Nodo(int v) : v{ v }, sig{ nullptr } {}
	Nodo(int v, enlace sig) : v{ v }, sig{ sig } {}
};

int main() {
	Point tl(100, 100);
	//Simple_window win(Point(200, 200), 600, 400, "Canvas");
	//win.wait_for_button();
}