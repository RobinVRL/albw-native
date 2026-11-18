#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 DAT_0050a304;
extern int DAT_0050a318;
extern char s_SE_LavaUp_DOWN_0050a308[];

// USA 0050A2B0 <- EU 0050A288 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_0050a304 undefined4
// GLOBAL DAT_0050a318 int
// GLOBAL s_SE_LavaUp_DOWN_0050a308 string

undefined4 func_0050A2B0(int *param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(char * *)(albw_frame + 0x64))
  if (*(char *)((int)param_1 + 0x467) == '\0') {
    puVar1 = (uint *)func_002C11E8(aiStack_70,1,10,0);
    func_0016898C(param_1[0x104],puVar1);
  }
  else {
    *(undefined4 *)(*(int *)(param_1[0x104] + 0x14) + 0x10) = DAT_0050a304;
  }
  local_c = s_SE_LavaUp_DOWN_0050a308;
  local_10 = DAT_0050a318;
  return func_00150A84(param_1,&local_10,0);
}

