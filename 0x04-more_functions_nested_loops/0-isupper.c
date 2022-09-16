#include "main.h"

/**
* _isupper - checks if chaaracter is uppercase or not
* @c : Parameter passed to function _isupper
* Return: 1 if uppercase, 0 if otherwise
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}

return (0);

}
