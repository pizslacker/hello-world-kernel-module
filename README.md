# Hello world - Linux kernel module

Writing your first Linux kernel module is an exciting milestone. You are leaving "user space" (where standard applications live) and entering "kernel space."

This means you won't have access to the standard C library—so you can't use `printf()`—but you will have direct access to the core of the operating system.

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
