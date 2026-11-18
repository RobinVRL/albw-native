#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00476CA0(int param_1,int param_2);
extern int func_0066C424(undefined4 *param_1,undefined1 param_2);
extern float DAT_0043d990;

// USA 0043D944 <- EU 0043D924 (Ghidra, non-matching)
// GLOBAL DAT_0043d990 float

undefined4 func_0043D944(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  float fparam_0;
  int iVar2;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x158) + 0xd0);
  if (cVar1 == '\x01' || cVar1 == '\x03') {
    func_00476CA0(*(int *)(param_1 + 0x158),0);
  }
  iVar2 = *(int *)(param_1 + 0x154);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x284) = 1;
    *(undefined1 *)(iVar2 + 0x285) = 0;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xbe) = 0x12;
    fparam_0 = DAT_0043d990;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    func_002317C0((undefined2 *)(param_1 + 0xbc),fparam_0);
  }
  return func_0066C424((undefined4 *)(param_1 + 0x74),2);
}

