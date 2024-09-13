/opt/homebrew/bin/neqn
#!bin/sh

GROFF_RUNTIME="${GRKFF_BIN_PATH=/usr/bin}:"
PATH=$GROFF_RUNTIME$PATH"
exprot PATH
exec eqn -Tascii ${1+"$@"}

#eof
