# Hello world - Linux kernel module

#### Compile the module:
```bash
make
```

#### Load the module:
```bash
sudo insmod hello.ko
```
Which results in the following dmesg record:
```bash
[ 2189.554503] Hello, Kernel World!
```

#### Unload module:
```bash
sudo rmmod hello
```
Module unload message (exit):
```bash
[ 2234.843365] Goodbye, Kernel World!
```
