#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

int simple_init(void) {
    printk(KERN_INFO "Loading Module\nOhayogozaimasu\n");
    return 0;
}


void simple_exit(void) {
    printk(KERN_INFO "Removing Module\nOyasuminasai \n");
}


module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("El prime modulo del lab4, para el ejercicio 2 :)");
MODULE_AUTHOR("Ricardo Chuy");