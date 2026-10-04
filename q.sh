#!/bin/bash

for i in $(seq 1 10); do
    gcc "main$i.c" -o "main$i"
done