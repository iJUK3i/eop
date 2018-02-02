#!/bin/sh
cat $1 | grep -i "bauer" | grep -i "nicolas" | sed '4d' | grep -o '\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{4\}'
