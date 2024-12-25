#!/bin/bash
echo 1 2 3 4
./push_swap 1 2 3 4 | wc -l
echo 1 2 4 3
./push_swap 1 2 4 3 | wc -l
echo 1 3 2 4
./push_swap 1 3 2 4 | wc -l
echo 1 3 4 2
./push_swap 1 3 4 2 | wc -l
echo 1 4 2 3
./push_swap 1 4 2 3 | wc -l
echo 1 4 3 2 
./push_swap 1 4 3 2 | wc -l
echo 1 4 3 2 
./push_swap 1 4 3 2 | wc -l
echo 2 1 3 4
./push_swap 2 1 3 4 | wc -l
echo 2 1 4 3
./push_swap 2 1 4 3 | wc -l
echo 2 3 1 4
./push_swap 2 3 1 4 | wc -l
echo 2 3 4 1
./push_swap 2 3 4 1 | wc -l
echo 2 4 1 3  
./push_swap 2 4 1 3 | wc -l
echo 2 4 3 1
./push_swap 2 4 3 1 | wc -l
echo 3 1 2 4
./push_swap 3 1 2 4 | wc -l
echo 3 1 4 2  
./push_swap 3 1 4 2 | wc -l
echo 3 2 1 4
./push_swap 3 2 1 4 | wc -l
echo 3 2 4 1
./push_swap 3 2 4 1 | wc -l
echo 3 4 1 2  
./push_swap 3 4 1 2 | wc -l
echo 3 4 2 1
./push_swap 3 4 2 1 | wc -l
echo 4 1 2 3
./push_swap 4 1 2 3 | wc -l
echo 4 1 3 2
./push_swap 4 1 3 2 | wc -l
echo 4 2 1 3  
./push_swap 4 2 1 3 | wc -l
echo 4 2 3 1
./push_swap 4 2 3 1 | wc -l
echo 4 3 1 2  
./push_swap 4 3 1 2 | wc -l
echo 4 3 2 1
./push_swap 4 3 2 1 | wc -l
