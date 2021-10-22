#!/bin/bash


for f in "./default/crashes/"*; do
	./parser $f
done
