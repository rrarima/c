#include "isogram.h"

bool is_isogram(const char phrase[]){
	if (phrase == NULL)
	{
		return false;
	}
	int len = strlen(phrase);
	for(int i = 0; i < len - 1; i++){
		for (int j = i + 1; j < len; j++)
		{
			if (phrase[i] == phrase[j])
			{
				return false;
			}
		}
	}
	return true;
}