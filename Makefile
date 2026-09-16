# Note: The indented lines under 'all' and 'clean' MUST use a Tab, not spaces!

obj-m += hello.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean