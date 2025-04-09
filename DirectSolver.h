#pragma once

#include "CSRMatrix.h"
#include "Parameters.h"

void DirectSparseSolver(CSRMatrix& matrix, float (&x)[XDIM][YDIM][ZDIM], float (&f)[XDIM][YDIM][ZDIM],
                        const bool writeOutput = true);
