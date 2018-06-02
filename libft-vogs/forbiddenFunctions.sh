#!/bin/bash
# A simple script to find any 42 libft forbidden functions used in the files
# in the current directory. This requires extended grep. Feel free to add more.

echo
egrep -nr '\bprintf*' .
egrep -nr '\bmemset*' .
egrep -nr '\bbzero*' .
egrep -nr '\bmemcpy*' .
egrep -nr '\bmemccpy*' .
egrep -nr '\bmemmove*' .
egrep -nr '\bmemchr*' .
egrep -nr '\bmemcmp*' .
egrep -nr '\bstrlen*' .
egrep -nr '\bstrdup*' .
egrep -nr '\bstrcpy*' .
egrep -nr '\bstrncpy*' .
egrep -nr '\bstrcat*' .
egrep -nr '\bstrncat*' .
egrep -nr '\bstrlcat*' .
egrep -nr '\bstrchr*' .
egrep -nr '\bstrrchr*' .
egrep -nr '\bstrstr*' .
egrep -nr '\bstrnstr*' .
egrep -nr '\bstrcmp*' .
egrep -nr '\bstrncmp*' .
egrep -nr '\batoi*' .
egrep -nr '\bisalpha*' .
egrep -nr '\bisdigit*' .
egrep -nr '\bisalnum*' .
egrep -nr '\bisascii*' .
egrep -nr '\bisprint*' .
egrep -nr '\btoupper*' .
egrep -nr '\btolower*' .
echo
