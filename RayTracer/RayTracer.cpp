// RayTracer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Render.h"
#include <fstream>

#include <iostream>
#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STBI_MSC_SECURE_CRT
#include "stb_image_write.h"


int main()
{
	Render r;
	r.traze();

	stbi_write_png("out.png", 1000, 1000, 1, &r.screen_matrix[0],1000);
	std::ofstream out("out.raw", std::ios::out, std::ios::binary);
	for (int a = 0; a < r.screen_matrix.size(); a++) {
		if (a % 250 == 0)
		{
			//out << '\n';
		}
		out << (uint8_t)r.screen_matrix[a];
	}
	out.close();
	//std::cin.get();
    return 0;
}

