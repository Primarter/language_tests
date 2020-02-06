#!/bin/bash
for i in {1..1000}; do IFS=$' ' echo -n $RANDOM ""; done