#!/bin/bash
find . -type f -name '*.sh' | sed -e 's/.*\///' | sed -e 's/\.sh$//'
