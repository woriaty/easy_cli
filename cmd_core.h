#ifndef __CMD__H__
#define __CMD__H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

struct cmd_table {
	char *cmd;
	char *help;
	void (*pfn)(struct list_head *head, char *ops_data);
};

struct cmd_node {
	char *cmd;
	char *data;
	void (*pfn)(struct list_head *head, char *ops_data);
	struct list_head list;
};

#endif
