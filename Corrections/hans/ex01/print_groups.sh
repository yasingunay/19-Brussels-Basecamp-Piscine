#! /bin/sh

#( id -nG $FT_USER ; echo -n ",:," ; echo $FT_USER ) | cat | sed 's/ /,/' | tr -d '\n'
groups $FT_USER | sed 's/ /,/g' | tr -d '\n'
