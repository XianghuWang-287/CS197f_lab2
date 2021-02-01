#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
  int sleep_num;
  char *buf;
  if (argc<1){
	printf("sleep needs arguments");
	exit();
  }
  buf=argv[1];
  sleep_num=atoi(buf);
  sleep(sleep_num);
  exit();
}
