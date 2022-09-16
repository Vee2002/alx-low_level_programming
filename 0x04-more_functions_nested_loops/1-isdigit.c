#include "main.h"

/**
* _isdigit: Function to check digits
*@c : parameter passed to function
*Return: 1 if c is digit, 0 if otherwise
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}

return (0);

}
