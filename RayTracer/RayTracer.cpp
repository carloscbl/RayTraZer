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
	//std::cin.get();
    return 0;
}

