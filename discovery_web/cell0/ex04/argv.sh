if [ $# -eq 0 ]; then
  echo "Sin argumentos!, intenta otra vez"
  exit 1
fi
if [ $# -gt 3 ]; then
  echo "Demasiados argumentos, solo mostrare 3 :P"
fi
i=0
for arg in "$@"; do
  echo "$arg"
  i=$((i+1))
  if [ $i -eq 3 ]; then
    break
  fi
done
