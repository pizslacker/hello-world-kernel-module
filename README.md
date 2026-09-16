# Hello world - Linux kernel module

### Compile the module:
```bash
make
```

Load the module:
```bash
sudo insmod hello.ko
```

Module output:
```bash
[ 2189.554503] Hello, Kernel World!
```

Module unload:
```bash
[ 2234.843365] Goodbye, Kernel World!
```
