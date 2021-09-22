#!/bin/bash


for f in "./findings/default/crashes/"*; do
	./4.out -f $f
done
