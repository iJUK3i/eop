#!/bin/bash
ldapsearch -Q 'cn=*bon*' | awk '/cn: / {print$2}' | wc -l | tr -d '[:blank:]'
