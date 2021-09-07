#!/bin/sh
(echo $(($(echo $FT_NBR1 | tr "\'\\\\\"?\!" "01234" | xargs echo "ibase=5;" | bc) + $(echo -n $FT_NBR2 | tr "mrdoc" "01234" | xargs echo "ibase=5;" | bc)))) | xargs echo "ibase=10 ; obase = 13;" | bc | tr "0123456789ABC" "gtaio luSnemf"
