find . -type f -name "*.sh" -print | rev | cut -c4- | cut -d '/' -f 1 |rev
