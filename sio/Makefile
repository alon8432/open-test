
MK_TAG = sio

CFLAGS +=\
	-std=gnu++11 \
	-DLINUX_OS -DSIO_DEBUG=1\
	-o $(MK_TAG) *.cpp \

all : 
	g++ $(CFLAGS)

clean :
	rm -f $(MK_TAG) *.o *~