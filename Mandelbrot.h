/*********************
**  Mandelbrot fractal
** clang -Xpreprocessor -fopenmp -lomp -o Mandelbrot Mandelbrot.c
** by Dan Garcia <ddgarcia@cs.berkeley.edu>
** Modified for this class by Justin Yokota and Chenyu Shi
**********************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdint.h>
/*
This function returns the number of iterations that cause the initial point to exceed the threshold.
If the threshold is not exceeded after maxiters, the function returns maxiters.
*/
uint64_t MandelbrotIterations(uint64_t maxiters, ComplexNumber * point, double threshold);

/*
This function calculates the Mandelbrot plot and stores the result in output.
The number of pixels in the image is resolution * 2 + 1 in one row/column. It's a square image.
Scale is the the distance between center and the top pixel in one dimension.
*/
void Mandelbrot(double threshold, uint64_t max_iterations, ComplexNumber* center, double scale, uint64_t resolution, uint64_t * output);
