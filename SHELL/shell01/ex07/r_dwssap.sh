#!/bin/sh
cat /etc/passwd | cut -d ':' -f 1 | sed -n "n;p" | rev | grep -v "#" | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ' ' | sed 's| |, |g' | rev | cut -c 3- | rev | tr '\n' '.'
