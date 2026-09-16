# Hello world - Linux kernel module

#### Compile the module:
```bash
make
```

#### Load the module:
```bash
sudo insmod hello.ko
```

```bash
[ 2189.554503] Hello, Kernel World!
```

#### Unload module:
```bash
sudo rmmod hello
```

```bash
[ 2234.843365] Goodbye, Kernel World!
```
