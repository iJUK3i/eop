#!/bin/bash
ls -l | awk 'NR % 2 {print} !(NR % 2) && /pattern/ {print}'
