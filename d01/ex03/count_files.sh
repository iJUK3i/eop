#!/bin/bash
find . -path '*' | wc -l | tr -s '[:blank:]'
