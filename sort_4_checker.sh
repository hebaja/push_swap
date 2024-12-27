#!/bin/bash
echo 1 2 3 4
ARG="1 2 3 4"; ./push_swap $ARG | ./checker_linux $ARG
echo 1 2 4 3
ARG="1 2 4 3"; ./push_swap $ARG | ./checker_linux $ARG
echo 1 3 2 4
ARG="1 3 2 4"; ./push_swap $ARG | ./checker_linux $ARG
echo 1 3 4 2
ARG="1 3 4 2"; ./push_swap $ARG | ./checker_linux $ARG
echo 1 4 2 3
ARG="1 4 2 3"; ./push_swap $ARG | ./checker_linux $ARG
echo 1 4 3 2 
ARG="1 4 3 2"; ./push_swap $ARG | ./checker_linux $ARG
echo 1 4 3 2 
ARG="1 4 3 2"; ./push_swap $ARG | ./checker_linux $ARG
echo 2 1 3 4
ARG="2 1 3 4"; ./push_swap $ARG | ./checker_linux $ARG
echo 2 1 4 3
ARG="2 1 4 3"; ./push_swap $ARG | ./checker_linux $ARG
echo 2 3 1 4
ARG="2 3 1 4"; ./push_swap $ARG | ./checker_linux $ARG
echo 2 3 4 1
ARG="2 3 4 1"; ./push_swap $ARG | ./checker_linux $ARG
echo 2 4 1 3  
ARG="2 4 1 3"; ./push_swap $ARG | ./checker_linux $ARG
echo 2 4 3 1
ARG="2 4 3 1"; ./push_swap $ARG | ./checker_linux $ARG
echo 3 1 2 4
ARG="3 1 2 4"; ./push_swap $ARG | ./checker_linux $ARG
echo 3 1 4 2  
ARG="3 1 4 2"; ./push_swap $ARG | ./checker_linux $ARG
echo 3 2 1 4
ARG="3 2 1 4"; ./push_swap $ARG | ./checker_linux $ARG
echo 3 2 4 1
ARG="3 2 4 1"; ./push_swap $ARG | ./checker_linux $ARG
echo 3 4 1 2  
ARG="3 4 1 2"; ./push_swap $ARG | ./checker_linux $ARG
echo 3 4 2 1
ARG="3 4 2 1"; ./push_swap $ARG | ./checker_linux $ARG
echo 4 1 2 3
ARG="4 1 2 3"; ./push_swap $ARG | ./checker_linux $ARG
echo 4 1 3 2
ARG="4 1 3 2"; ./push_swap $ARG | ./checker_linux $ARG
echo 4 2 1 3  
ARG="4 2 1 3"; ./push_swap $ARG | ./checker_linux $ARG
echo 4 2 3 1
ARG="4 2 3 1"; ./push_swap $ARG | ./checker_linux $ARG
echo 4 3 1 2  
ARG="4 3 1 2"; ./push_swap $ARG | ./checker_linux $ARG
echo 4 3 2 1
ARG="4 3 2 1"; ./push_swap $ARG | ./checker_linux $ARG
