#include "StatsCalc.h"
#include <cmath> // include cmath for mathmatical functions

float meanD = 4.0f; // setting constant mean devider to 4.0 (the number of inputs)

float StatsCalc::mean(int x1, int x2, int x3, int x4)
{
    calcmean = (x1 + x2 + x3 + x4) / meanD; // calculating mean by adding inputs and dividing by meanD
    return calcmean;
}

float StatsCalc::standarddeviation(int x1, int x2, int x3, int x4)
{
    calcmean = (x1 + x2 + x3 + x4) / meanD; //first claculating the mean
    return sqrt(((pow(x1 - calcmean,2)) + (pow(x2 - calcmean,2)) + (pow(x3 - calcmean,2)) + (pow(x4 - calcmean,2)))/4); // calculating the standard deviation using formula
}
