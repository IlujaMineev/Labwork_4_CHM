#pragma once

#include <math.h>
#include <vector>

# define M_PI           3.14159265358979323846  /* pi */

double F(double x) {
	return 2 + 5 * x + x*x;
}
double U(double x) {
	return x*x + 5 * x + 8;
}
double UI(double x) {

	long double c1 = 0.314196525355864;
	long double c2 = -0.314196525355864;
	long double c3 = 0.182739030570168;
	long double c4 = -1.35026894834718;

	if (x <= 0.5) {
		return (c1 * exp(sqrt(2.0) * x) + c2 * exp(-sqrt(2.0) * x));
	}
	else {
		return (c3 * exp(x) + c4 * exp(-x) + 1.0);
	}
}
double K1(double x) {
	return x*x + 1;
}
double K2(double x) {
	return 1;
}
double Q1(double x) {
	return exp(-x);
}
double Q2(double x) {
	return x + 1;
}
double F1(double x) {
	return 1;
}
double F2(double x) {
	return x*x*x;
}
//functions

double* ExactSolutionsI(double* arr, int size) {
	double* result = new double[size + 1];
	for (int i = 0; i < size + 1; i++) {
		result[i] = U(arr[i]);
	}
	return result;
}
double* LS(int start, int stop, int count) { // Make a greed
	double * res = new double[count];
	double step = (double)(stop - start) / (double)(count);
	double cur = (double)start;
	res[0] = start;
	for (int i = 1; i < count + 1; i++) {
		cur += step;
		res[i] = cur;
	}
	return res;
}
double* HLS(double* arr, int Count) {
	double* res = new double[2 * Count];
	double hStep = (arr[1] - arr[0]) / 2;
	res[0] = 0.0;
	for (int i = 1; i < 2 * Count; i++) {
		res[i] = res[i - 1] + hStep;
	}
	res[2 * Count] = 1.0;
	return res;
}

double calcInteg(int val, double x, double left, double right, double m) {
	if (m != -1.0) {//no cut
		if (x < 0.5) {
			switch (val) {
			case 1: {
				val = 11;
			}
					break;
			case 2: {
				val = 21;
			}
					break;

			case 3: {
				val = 31;
			}
					break;
			}
		}
		else {
			switch (val) {
			case 1: {
				val = 12;
			}
					break;
			case 2: {
				val = 22;
			}
					break;

			case 3: {
				val = 32;
			}
					break;
			}
		}

		double res;
		if (val == 11) {
			double res = (((right)-(left)) * ((exp(-x) * sqrt(exp(1.0)))));
			return res;
		}
		else if (val == 21) {
			return 2.0 * (right - left);
		}
		else if (val == 31) {
			return  cos(M_PI * x) * (right - left);
			return res;
		}
		else if (val == 12) {
			return (right - left);
		}
		else if (val == 22) {
			return sin(M_PI * x) * (right - left);
			return res;
		}
		else if (val == 32) {
			return (exp(x) * sqrt(exp(1.0)) * (right - left));
		}
	}
	else {

		double middle = (right - left) / 2 + left;
		if (middle < 0.5) {
			switch (val) {
			case 1: {
				val = 11;
			}
					break;
			case 2: {
				val = 21;
			}
					break;

			case 3: {
				val = 31;
			}
					break;
			}
		}
		else {
			switch (val) {
			case 1: {
				val = 12;
			}
					break;
			case 2: {
				val = 22;
			}
					break;

			case 3: {
				val = 32;
			}
					break;
			}
		}

		if (val == 11) {
			double res = (((right)-(left)) * ((exp(-middle) * sqrt(exp(1.0)))));
			return res;

		}
		else if (val == 21) {
			return 2.0 * (right - left);
		}
		else if (val == 31) {
			return  cos(M_PI * middle) * (right - left);
		}
		else if (val == 12) {
			double res = (right - left);//
			return res;
		}
		else if (val == 22) {
			return sin(M_PI * middle) * (right - left);
		}
		else if (val == 32) {
			return (exp(middle) * sqrt(exp(1.0))) * (right - left);
		}
	}
}

double CalcIntegralsI(int val, double x, double x_i, double x_i1, double E) {
	double result = 0.0;

	if ((x_i <= E) && (x_i1 >= E)) {
		result = calcInteg(val, x, x_i, E, -1.0) + calcInteg(val, x, E, x_i1, -1.0);
	}
	else {
		result = calcInteg(val, x, x_i, x_i1, -2.0);
	}
	return result;
}

double calcIntegII(int val, double left, double right, double m, double x) {
	if (m != -1.0) {//no cut
		double E = 0.5;
		if (x < E) {
			switch (val) {
			case 1: {
				val = 11;
			}
					break;
			case 2: {
				val = 21;
			}
					break;

			case 3: {
				val = 31;
			}
					break;
			}
		}
		else {
			switch (val) {
			case 1: {
				val = 12;
			}
					break;
			case 2: {
				val = 22;
			}
					break;

			case 3: {
				val = 32;
			}
					break;
			}
		}
		double res;
		if (val == 11) {
			res = 1.0 * (right - left);
			return res;
		}
		else if (val == 21) {
			res = 2.0 * (right - left);
			return res;
		}
		else if (val == 31) {
			res = 0.0 * (right - left);
			return res;
		}
		else if (val == 12) {
			res = (right - left);
			return res;
		}
		else if (val == 22) {
			res = right - left;
			return res;
		}
		else if (val == 32) {
			res = (right - left);
			return res;
		}
	}
	else {
		
		double middle = (right - left) / 2 + left;
		if (middle < 0.5) {
			switch (val) {
			case 1: {
				val = 11;
			}
					break;
			case 2: {
				val = 21;
			}
					break;

			case 3: {
				val = 31;
			}
					break;
			}
		}
		else {
			switch (val) {
			case 1: {
				val = 12;
			}
					break;
			case 2: {
				val = 22;
			}
					break;

			case 3: {
				val = 32;
			}
					break;
			}
		}
		if (val == 11) {
			double res = (right - left);// (((right)-(left)) * (1.0 / (exp(-middle) * sqrt(exp(1.0)))));
			return res;

		}
		else if (val == 21) {
			return 2.0 * (right - left);
		}
		else if (val == 31) {
			return 0;// cos(M_PI * middle) * (right - left);
		}
		else if (val == 12) {
			double res = (right - left);//
			return res;
		}
		else if (val == 22) {
			return (right - left);//sin(M_PI * middle) * (right - left);
		}
		else if (val == 32) {
			return (right - left); // exp(middle) / sqrt(exp(1.0)) * (right - left);
		}

	}
}

double CalcIntegralsII(int val, double x, double x_i, double x_i1, double E, double h) {
	double result = 0.0;

	if ((x_i < E) && (x_i1 > E)) {
		result = calcIntegII(val, x_i, E, -1.0, x) + calcIntegII(val, E, x_i1, -1.0, x);
	}
	else {
		result = calcIntegII(val, x_i, x_i1, -2.0, x);
	}
	return result;
}