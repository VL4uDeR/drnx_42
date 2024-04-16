if [ $# -eq 0 ]; then
    echo "Sin argumentos"
    exit 1
fi
for arg in "$@"; do
  mkdir "ex$arg"
done
