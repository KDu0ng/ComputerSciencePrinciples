if [ "$#" -ne 1 ]; then
  printf "Usage: bash compile.sh filename \n    or bash compile.sh folder/filename\n"
  exit 1
fi

g++ -o "$1.exe" "$1.cpp" && ./"$1.exe"