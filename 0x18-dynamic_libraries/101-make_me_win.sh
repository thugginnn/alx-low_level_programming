#!/bin/bash
gcc -shared -o /tmp/libcheat.so -fPIC -DPAYLOAD /vagrant/101-cheat2.c
LD_PRELOAD=/tmp/libcheat.so ./gm 9 8 10 24 75 9
rm /tmp/libcheat.so
