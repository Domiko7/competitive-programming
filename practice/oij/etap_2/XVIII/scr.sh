#!/bin/bash
g++-15 scr.cpp -o scr_actual
g++-15 scr_slower.cpp -o scr_brut
g++-15 scr_rand.cpp -o scr_rand

for i in {1..1000}; do
    ./scr_rand > scr.in
    ./scr_brut < scr.in > scr_brut.out
    ./scr_actual < scr.in > scr_actual.out
    if ! diff -q scr_brut.out scr_actual.out; then
        echo "[$i] FAIL"
        exit 1
    fi
    echo "[$i] OK"
done
echo "EVERYTHING PASSED"