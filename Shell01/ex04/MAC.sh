ifconfig | grep "ether " | sed "s/ether//g" | sed 's/ //g' | tr -d '\t'
