#include "main.h"

/**
* _isupper: Function to check for uppercase characters and
* return 0 or 1
* @c : Parameter passed to function _isupper
* Return: 1 if uppercase, 0 if otherwise
*/

int _isupper(int c)
{
if (c == 'A' && c <= 'Z')
{
return (1);
}

return (0);

}
