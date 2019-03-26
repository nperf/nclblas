
#include "routines.h"

void dcopy(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const int n = info[0]->Uint32Value();
	const double *x = reinterpret_cast<double*>(GET_CONTENTS(info[1].As<v8::Float64Array>()));
	const int inc_x = info[2]->Uint32Value();
	double *y = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	const int inc_y = info[4]->Uint32Value();
	cblas_dcopy(n, x, inc_x, y, inc_y);
}

void scopy(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const int n = info[0]->Uint32Value();
	const float *x = reinterpret_cast<float*>(GET_CONTENTS(info[1].As<v8::Float32Array>()));
	const int inc_x = info[2]->Uint32Value();
	float *y = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	const int inc_y = info[4]->Uint32Value();
	cblas_scopy(n, x, inc_x, y, inc_y);
}

void zcopy(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const int n = info[0]->Uint32Value();
	const double *x = reinterpret_cast<double*>(GET_CONTENTS(info[1].As<v8::Float64Array>()));
	const int inc_x = info[2]->Uint32Value();
	double *y = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	const int inc_y = info[4]->Uint32Value();
	cblas_zcopy(n, x, inc_x, y, inc_y);
}

void ccopy(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const int n = info[0]->Uint32Value();
	const float *x = reinterpret_cast<float*>(GET_CONTENTS(info[1].As<v8::Float32Array>()));
	const int inc_x = info[2]->Uint32Value();
	float *y = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	const int inc_y = info[4]->Uint32Value();
	cblas_ccopy(n, x, inc_x, y, inc_y);
}
