
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                               clock.c
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                                                    Forrest Yu, 2005
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include "string.h"
#include "global.h"
#include "protectFunc.h"

/*======================================================================*
                           clock_handler
 *======================================================================*/
void clock_handler(int irq)
{
	disp_str("#");

    if (k_reenter != 0) {
		disp_str("!");
		return;
	}

    p_proc_ready++;
    if(p_proc_ready >= proc_table + NR_TASKS)
        p_proc_ready = proc_table;

}
