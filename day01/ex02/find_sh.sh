find . -type f -name "*.sh" | rev | cut -d / -f 1 | cut -c 4- | rev
