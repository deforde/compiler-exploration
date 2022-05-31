rm -rf build/
mkdir build/
cd build/

gcc -fPIC -fvisibility=hidden -c ../bar.c
ar crs libbar.a bar.o
gcc -L. -shared -o libfoo.so -fPIC ../foo.c -lbar

gcc -c ../bar2.c
ar crs libbar2.a bar2.o

gcc -L. ../main.c -o app -lbar2 -lfoo

export LD_LIBRARY_PATH=$PWD
./app

cd ..
rm -rf build/

