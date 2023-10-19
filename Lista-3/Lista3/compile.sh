#!/usr/bin/env nix-shell
#!nix-shell -i bash -p gcc
gcc -IHeaders/ -c Source/Fila.c -o Obj/Fila.o || mkdir Obj && gcc -IHeaders/ -c Source/Fila.c -o Obj/Fila.o &&
gcc -IHeaders/ -c Source/User.c -o Obj/User.o &&
gcc -IHeaders/ -c Program.c -o Obj/Program.o &&
gcc Obj/* -o Program.exe