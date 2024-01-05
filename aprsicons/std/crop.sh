#!/bin/sh

for file in *.h; do
    sed -n '24,117p' $file > $file
done
