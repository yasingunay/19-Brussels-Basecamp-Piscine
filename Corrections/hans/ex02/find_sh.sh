#!/bin/sh
find . -type f -name "*.sh" | xargs basename -s .sh

#find . -type f -name "*.sh" -exec basename --suffix=.sh {} \;
# Work but i have difficulties to understand how -exec works ?

# find . -type f -name "*.sh" | rev | cut -d'/' -f 1 | rev | cut -d '.' -f 1 
# doesn't work with multiple occurence of delimiters.

# find . -type f -name "*.sh"  -printf "%f\b\b\b   \n" 
# I'm not sure the moulinnette accept "-printf"
