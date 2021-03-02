#pragma once
#include "framework.h"

using std::string;
using std::vector;
using std::shared_ptr;

constexpr auto VERSION = "1.0.0";

// Source: Polyhook 2
template<typename T>
T FnCast(FARPROC fnToCast, T pFnCastTo)
{
	return (T) fnToCast;
}