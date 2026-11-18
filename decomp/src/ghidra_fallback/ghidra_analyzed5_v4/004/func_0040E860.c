#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_0040F21C(int param_1);
extern int func_0040F2E4(void);
extern int func_0040F484(int param_1);
extern int func_00412E2C(int param_1);
extern int func_00412F58(void);

// USA 0040E860 <- EU 0040E840 (Ghidra, non-matching)

void func_0040E860(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x14);
  while( true ) {
    if (cVar1 != '\0') {
      return;
    }
    iVar2 = func_0040F2E4();
    func_0040F484(iVar2);
    if (*(char *)(param_1 + 0x14) != '\0') break;
    func_0010C0C0((int *)(param_1 + 8));
    iVar2 = func_0040F2E4();
    func_0040F21C(iVar2);
    func_0010C160((int *)(param_1 + 8));
    iVar2 = func_00412F58();
    func_00412E2C(iVar2);
    cVar1 = *(char *)(param_1 + 0x14);
  }
  return;
}

