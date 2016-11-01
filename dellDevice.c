#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

static int my_init(void) {
  printk("Start Dell WD15 Driver\n");
  return 0;
}
static void my_exit(void) {
  printk("Exit Dell WD15 Driver\n");
  return;
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tyler Frasca");
