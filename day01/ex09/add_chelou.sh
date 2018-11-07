echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\\\"\?\!" "01234" | tr "mrdoc" "01234" | sed "s/^/ibase=5; obase=23;/" | bc | tr "0123456789ABC" "gtaio luSnemf"

# '\"?!
# 01234

# mrdoc
# 01234

# gtaio luSnemf
# 0123456789ABC
