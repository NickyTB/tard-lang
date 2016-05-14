#include "tardString.h"
#include <stdbool.h>

/*Returns index of start and stop inclusive in struct Match.
  It makes sure it balances the number of start chars with stop chars.
  If startPos and stopPos is equal then a matching, balanced start and close is not found.
  Ex. If start is '(' and stop is ')' it will match the indexes representing "(123(4554)321)" in "(123(4554)321)789".
 */
struct Match byStartAndCloseChar(char start, char close, char* inStr, size_t inStrLength)
{
	struct Match match;
	match.startPos = 0;
	match.stopPos = 0;
	bool startFound = false;
	int nrOfStarts = 0;
	for (size_t i = 0; i < inStrLength; i++)
	{
		if(startFound)
		{
			if(start == inStr[i])
			{
				nrOfStarts++;
				continue;
			}
			if(close == inStr[i])
			{
				nrOfStarts--;
				if(nrOfStarts == 0)
				{
					match.stopPos = i;
					return match;
				}
			}
		}
		else
		{
			if(start == inStr[i])
			{
				match.startPos = i;
				startFound = true;
				nrOfStarts++;
			}
		}
			  
	}

	match.stopPos = match .startPos;
	return match;

}
