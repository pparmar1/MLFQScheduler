#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
	setrunningticks(2);	
	setwaitingticks(4);
	setpriority(1,2);
	exit();
}
