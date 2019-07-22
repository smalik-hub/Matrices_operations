/*
 * Matrices.cxx
 *
 *  Created on: 2018-02-23
 *      Author: Shahzaib Malik
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <memory>
#include "Matrices.h"
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {

	Matrix *M = NULL;

	int method;
	cout << "Method 1: matrix addition" << endl;
	cout << "Method 2: matrix multiplication" << endl;
	cout << "Select the method:" << " ";
	cin >> method;

	switch (method) {
	case 1:
		M->matrixadd();

		break;

	case 2:
		M->matrixmultiply();

	}

	return 0;
}

