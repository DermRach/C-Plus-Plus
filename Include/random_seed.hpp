#pragma once
#ifndef RANDOM_SEED_HPP
#define RANDOM_SEED_HPP
#include<iostream>
#include<random>

// Este HPP roda no programa createheader.cpp disponível na pasta Básico

static int generatorSeed(int seed)
{
	std::mt19937 engine(seed);
	int gSeed = engine();
	return gSeed;
}

static int generatorSeed(int seed);

#endif
