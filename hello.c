#include <linux/init.h>   /* Needed for the macros */
#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */

/* 
 * Module metadata 
 * The GPL license is important; without it, the kernel will complain 
 * that the module is "tainting" the kernel.
 */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("k!M/pizslacker");
MODULE_DESCRIPTION("My First Kernel Module");
MODULE_VERSION("1.0");

/* 
 * The __init macro tells the kernel this code is only used at initialization.
 * It can be freed from memory once the module is loaded.
 */
static int __init hello_init(void) {
    // printk is the kernel's version of printf
    printk(KERN_INFO "Hello, Kernel World!\n");
    
    // A return of 0 means the module successfully loaded
    return 0; 
}

/* 
 * The __exit macro tells the kernel to discard this function if the 
 * module is built directly into the kernel (not as a loadable module).
 */
static void __exit hello_exit(void) {
    printk(KERN_INFO "Goodbye, Kernel World!\n");
}

/* Register the init and exit functions */
module_init(hello_init);
module_exit(hello_exit);