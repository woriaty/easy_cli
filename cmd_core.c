#include "cmd_core.h"

struct cmd_table user_table[] = {
	{"ls", "list user commands", cmd_list_cmd},
};

int cmd_register(struct cmd_table *table)
{
	return 0;
}
