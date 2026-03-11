#!/bin/bash
g++-15 kon.cpp -o kon_actual
g++-15 kon_brut.cpp -o kon_brut
g++-15 kon_rand.cpp -o kon_rand

for i in {1..1000}; do
    ./kon_rand > kon.in
    ./kon_brut < kon.in > kon_brut.out
    ./kon_actual < kon.in > kon_actual.out
    if ! diff -q kon_brut.out kon_actual.out; then
        echo "FAIL [$i]"
        exit 1
    fi
    echo "OK [$i]"
done
echo "TESTS PASSED"