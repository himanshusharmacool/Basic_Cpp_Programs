#	This script will run all c++ program one by one 




#compiling and executing prog
#i=1

for i in {1..35}
do
	clear
	g++ prog$i.cpp
	./a.out
	
	echo ""
	echo ""
	echo ""
	echo "Move to next prog(y/n): "
	read ch


if [ $ch == n ];
then
	exit	
fi
	

done	

