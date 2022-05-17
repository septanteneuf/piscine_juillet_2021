find . -name "*.sh" -type f | xargs -n 1 basename | cut -f 1 -d "."
