
#include "routines.h"

void dtpsv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const CLBlastDiagonal diag = static_cast<CLBlastDiagonal>(info[2]->Uint32Value());
	const int n = info[3]->Uint32Value();
	const double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const int inc_x = info[6]->Uint32Value();
	cblas_dtpsv(CLBlastLayoutRowMajor, uplo, trans, diag, n, ap, x, inc_x);
}

void stpsv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const CLBlastDiagonal diag = static_cast<CLBlastDiagonal>(info[2]->Uint32Value());
	const int n = info[3]->Uint32Value();
	const float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const int inc_x = info[6]->Uint32Value();
	cblas_stpsv(CLBlastLayoutRowMajor, uplo, trans, diag, n, ap, x, inc_x);
}

void ztpsv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const CLBlastDiagonal diag = static_cast<CLBlastDiagonal>(info[2]->Uint32Value());
	const int n = info[3]->Uint32Value();
	const double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const int inc_x = info[6]->Uint32Value();
	cblas_ztpsv(CLBlastLayoutRowMajor, uplo, trans, diag, n, ap, x, inc_x);
}

void ctpsv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const CLBlastDiagonal diag = static_cast<CLBlastDiagonal>(info[2]->Uint32Value());
	const int n = info[3]->Uint32Value();
	const float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const int inc_x = info[6]->Uint32Value();
	cblas_ctpsv(CLBlastLayoutRowMajor, uplo, trans, diag, n, ap, x, inc_x);
}
