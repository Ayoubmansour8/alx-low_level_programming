export CFILE="main.c"
./compile_script.sh
#!/bin/bash

# Retrieve the C file name from the CFILE environment variable
c_file="$CFILE"

# Compile the C file and create the executable
gcc "$c_file" -o cisfun

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  echo "Programming is like building a multilingual puzzle"
  echo ""
  echo "Size of a char: $(sizeof char) byte(s)"
  echo "Size of an int: $(sizeof int) byte(s)"
  echo "Size of a long int: $(sizeof long int) byte(s)"
  echo "Size of a long long int: $(sizeof long long int) byte(s)"
  echo "Size of a float: $(sizeof float) byte(s)"
else
  echo "Compilation failed."
fi

