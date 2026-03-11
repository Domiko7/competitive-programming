#!/bin/bash

set -e

g++-15 kul.cpp -o actual
g++-15 kul_slower.cpp -o brute
g++-15 kul_rand.cpp -o randomizer

set +e

for i in {1..100}; do
    ./randomizer > kul.in
    ./brute < kul.in > brute_kul.out
    ./actual < kul.in > actual_kul.out
    if ! diff -q brute_kul.out actual_kul.out; then
        echo "[${i}] FAIL"
        exit 1
    fi
    echo "[${i}] OK"
done

echo "EVERYTHING CORRECT"