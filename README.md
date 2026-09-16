# Hello world - Linux kernel module

Writing your first Linux kernel module is an exciting milestone. You are leaving "user space" (where standard applications live) and entering "kernel space."

This means you won't have access to the standard C library—so you can't use `printf()`—but you will have direct access to the core of the operating system (`printk(KERN_INFO "Hello, Kernel World!\n")`.

### Build requirements:
```bash
sudo apt update
sudo apt install build-essential linux-headers-$(uname -r)
```

#### Compile the module:
```bash
make
```

#### Load the module, and tail the kernel log:
```bash
sudo insmod hello.ko
sudo dmesg | tail -n 3
```

```c
[ 2189.554503] Hello, Kernel World!
```

#### Unload module, and tail the kernel log:
```bash
sudo rmmod hello
sudo dmesg | tail -n 3
```

```c
[ 2234.843365] Goodbye, Kernel World!
```
