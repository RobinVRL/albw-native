#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_00468030(int param_1,uint *param_2,int param_3);
extern int func_00582178(int param_1,int *param_2,int param_3);
extern int *DAT_00467740;

// USA 00467704 <- EU 004676DC (Ghidra, non-matching)
// GLOBAL DAT_00467740 int *

undefined4 func_00467704(int param_1)

{
  int iVar1;
  uint *puVar2;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_118 ((uint *)(albw_frame + 0x8))
  #define auStack_10c ((undefined1 *)(albw_frame + 0x14))
  puVar2 = local_118;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  func_0010B3EC(local_118,0x40,(int)auStack_10c);
  iVar1 = func_00582178(*DAT_00467740,(int *)local_118,(int)*(char *)(param_1 + 299));
  if (iVar1 == 0) {
    puVar2 = (uint *)0x0;
  }
  return func_00468030(param_1,puVar2,(int)*(char *)(param_1 + 299));
}

