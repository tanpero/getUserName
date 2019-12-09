#ifndef _GETUSERNAME_H_
#define _GETUSERNAME_H_

#include <iostream>  
#include <string>  

#ifdef _POSIX_
#include <unistd.h>  
#include <pwd.h>  
#endif  

#ifdef _WIN32  
#include <Windows.h>
#endif

#endif // !_GETUSERNAME_H_
