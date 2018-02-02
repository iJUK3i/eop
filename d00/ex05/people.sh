ldapsearch -Q 'uid=z*' cn | sed '/^#/ d' | sed '/^dn/ d' | cut -c 5- | sed -e '/^$/ d' | sort -rf | sed '/^lt/ d' | sed '/^ch/ d'
