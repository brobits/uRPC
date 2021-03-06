// examples/cpp/matlabclient.hpp
// 
// Example Usage: see matlabclient.m

// EXPORTED_FUNCTION required by Microsoft compiler only. MATLAB's 
// loadlibrary() calls  the C preprocessor on this file which is why we need 
// the __cplusplus guard

#ifndef URPC_MATLAB_HPP
#define URPC_MATLAB_HPP

#ifdef _WIN32 // also defined for WIN64
#define EXPORTED_FUNCTION __declspec(dllexport)
#else
#define EXPORTED_FUNCTION
#endif

#ifdef __cplusplus
extern "C" {
#endif

EXPORTED_FUNCTION mxArray *request(const char * const, int, int, int);
  

// Small demos of functionality
// rough replica of MATLAB zeros() function
EXPORTED_FUNCTION mxArray *zeros(int, int);

#ifdef __cplusplus
}
#endif

#endif // URPC_MATLAB_HPP
