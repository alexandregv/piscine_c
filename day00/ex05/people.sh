ldapsearch -LLL "uid=z*" | grep -i "cn:" | cut -c 5- | sort -dr
