#include "isogram.h"

bool is_isogram(const char phrase[])
{
  if (phrase == NULL)
  {
    return false;
  }

  int len = strlen(phrase);
  char seen[26] = {0};

  for (int i = 0; i < len; i++)
  {
    char c = phrase[i];

    if (islower(c))
    {
      if (seen[c - 'a'] != 0)
      {
        return false;
      }
      seen[c - 'a'] = 1;
    }

    else if (isupper(c))
    {
      if (seen[c - 'A'] != 0)
      {
        return false;
      }
      seen[c - 'A'] = 1;
    }
  }

  return true;
}