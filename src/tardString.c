#include "tardString.h"


struct Match byStartAndCloseChar(char start, char close, char* inStr, size_t inStrLength)
{
	struct Match match;
	match.startPos = 0;
	match.stopPos = 0;
	for (size_t i = 0; i < inStrLength; i++)
	{
		if(start == inStr[i])
		{
			match.startPos = i;
			match.stopPos = 10;
			return match;
		}
			  
	}

	return match;

}
