ldapsearch -Q "sn=*bon*" | grep "sn:" | grep -i "bon" | wc -l | bc
