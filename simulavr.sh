 simulavr --gdbserver --device atmega16 --clock-freq 16000000 --port 4242 --disp-prog simulavr-disp & 
  xterm -e avr-gdb --command=__avr_gdbinit
  pkill simulavr
