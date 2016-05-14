
#include <string.h>

struct Match{
	size_t startPos;
	size_t stopPos;
};

struct Match byStartAndCloseChar(char start, char close, char* inStr, size_t inStrLength);

struct Match byNestedString(char* inStr, size_t inStrLength);
