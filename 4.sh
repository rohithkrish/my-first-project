clear
read -p"enter the no " y
p=2
t=`expr $y % $p`
if [ $t = 0 ]
then
echo "enterd no is even"
else
echo "enterd no is odd"
fi

