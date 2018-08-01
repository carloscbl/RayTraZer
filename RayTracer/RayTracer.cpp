// RayTracer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Render.h"
#include <fstream>
#include <iostream>


int main()
{
	Render r;
	r.traze();
	std::ofstream out("out.raw", std::ios::out, std::ios::binary);
	for (auto px : r.screen_matrix) {
		out << px;
	}
	out.close();
	std::cin.get();
    return 0;
}

